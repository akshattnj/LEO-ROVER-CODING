import cv2
import numpy as np
from sklearn.cluster import KMeans

# Optional: Only import RealSense if it's available
try:
    import pyrealsense2 as rs
    realsense_available = True
except ImportError:
    realsense_available = False

def get_hsv_bounds(hsv_samples, num_clusters=3):
    hsv_samples = np.array(hsv_samples)
    kmeans = KMeans(n_clusters=num_clusters, random_state=42, n_init=10)
    kmeans.fit(hsv_samples)
    labels = kmeans.labels_

    hsv_ranges = []
    for i in range(num_clusters):
        cluster_points = hsv_samples[labels == i]
        lower_bound = np.min(cluster_points, axis=0)
        upper_bound = np.max(cluster_points, axis=0)
        hsv_ranges.append((tuple(lower_bound.tolist()), tuple(upper_bound.tolist())))
    return hsv_ranges

# Choose camera type
print("Choose camera source:")
print("1: System webcam")
print("2: Intel RealSense")
choice = input("Enter 1 or 2: ").strip()

use_realsense = choice == '2'

if use_realsense and not realsense_available:
    print("⚠️ RealSense not available. Falling back to system camera.")
    use_realsense = False

# Ask the user for a color name
color_name = input("Enter the color name to train: ").strip()

# Data storage
hsv_samples = []

print("🔹 Place the object inside the box in the center.")
print("🔹 Press 's' to sample HSV values, 'q' to quit and export values.")

try:
    if use_realsense:
        # Set up RealSense pipeline
        pipeline = rs.pipeline()
        config = rs.config()
        config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)
        pipeline.start(config)
    else:
        # Set up system webcam
        cap = cv2.VideoCapture(0)

    while True:
        if use_realsense:
            frames = pipeline.wait_for_frames()
            color_frame = frames.get_color_frame()
            if not color_frame:
                continue
            frame = np.asanyarray(color_frame.get_data())
        else:
            ret, frame = cap.read()
            if not ret:
                print("❌ Failed to grab frame")
                continue

        blurred = cv2.GaussianBlur(frame, (5, 5), 0)
        hsv = cv2.cvtColor(blurred, cv2.COLOR_BGR2HSV)

        # Draw a centered box
        h, w, _ = frame.shape
        box_size = 100
        x1, y1 = (w // 2 - box_size, h // 2 - box_size)
        x2, y2 = (w // 2 + box_size, h // 2 + box_size)
        cv2.rectangle(frame, (x1, y1), (x2, y2), (0, 255, 0), 2)

        cv2.imshow("Color Sampler", frame)

        key = cv2.waitKey(1) & 0xFF
        if key == ord('s'):
            sample_region = hsv[y1:y2, x1:x2]
            hsv_samples.extend(sample_region.reshape(-1, 3))
            print(f"✅ Sampled {len(sample_region.reshape(-1, 3))} HSV values...")
        elif key == ord('q'):
            if hsv_samples:
                hsv_samples = np.array(hsv_samples)
                hsv_samples = hsv_samples[hsv_samples[:, 1] > 50]  # Filter low saturation
                hsv_ranges = get_hsv_bounds(hsv_samples, num_clusters=3)
                print("\n🔹 Final HSV Ranges for", color_name)
                print(f"'{color_name}': {hsv_ranges},")
            else:
                print("⚠️ No samples collected!")
            break

finally:
    if use_realsense:
        pipeline.stop()
    else:
        cap.release()
    cv2.destroyAllWindows()
