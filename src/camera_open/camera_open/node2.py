import cv2
import numpy as np
import pyrealsense2 as rs

def nothing(x):
    pass

# Create a window for trackbars
cv2.namedWindow("Trackbars")

# Create trackbars for HSV range adjustment
cv2.createTrackbar("LH", "Trackbars", 0, 179, nothing)
cv2.createTrackbar("LS", "Trackbars", 0, 255, nothing)
cv2.createTrackbar("LV", "Trackbars", 0, 255, nothing)
cv2.createTrackbar("UH", "Trackbars", 179, 179, nothing)
cv2.createTrackbar("US", "Trackbars", 255, 255, nothing)
cv2.createTrackbar("UV", "Trackbars", 255, 255, nothing)

# Configure RealSense pipeline
pipeline = rs.pipeline()
config = rs.config()

# Enable the color stream
config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)

# Start the pipeline
pipeline.start(config)

try:
    while True:
        # Wait for a frame
        frames = pipeline.wait_for_frames()
        color_frame = frames.get_color_frame()

        if not color_frame:
            continue

        # Convert RealSense frame to a numpy array
        frame = np.asanyarray(color_frame.get_data())

        # Convert the frame to HSV
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

        # Get the HSV range from the trackbars
        lh = cv2.getTrackbarPos("LH", "Trackbars")
        ls = cv2.getTrackbarPos("LS", "Trackbars")
        lv = cv2.getTrackbarPos("LV", "Trackbars")
        uh = cv2.getTrackbarPos("UH", "Trackbars")
        us = cv2.getTrackbarPos("US", "Trackbars")
        uv = cv2.getTrackbarPos("UV", "Trackbars")

        # Define lower and upper HSV range
        lower_bound = np.array([lh, ls, lv])
        upper_bound = np.array([uh, us, uv])

        # Create a mask for the selected HSV range
        mask = cv2.inRange(hsv, lower_bound, upper_bound)

        # Display the original frame and the mask
        cv2.imshow("RealSense Frame", frame)
        cv2.imshow("Mask", mask)

        # Break the loop when 'q' is pressed
        if cv2.waitKey(1) & 0xFF == ord("q"):
            print(f"Lower HSV: {lower_bound}")
            print(f"Upper HSV: {upper_bound}")
            break

finally:
    # Stop the RealSense pipeline
    pipeline.stop()
    cv2.destroyAllWindows()
