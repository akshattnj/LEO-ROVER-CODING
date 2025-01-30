import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/sfr2024/LEO-ROVER-CODING/install/camera_open'
