from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'leo_rover_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # Include launch files
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
        # Include world (.sdf or dae) files
        (os.path.join('share', package_name, 'worlds'), glob(os.path.join('worlds', '**/**.[sd][da][fe]'), recursive=True)),
        # Include config (.yaml) files
        (os.path.join('share', package_name, 'config'), glob(os.path.join('config', '*.yaml'))),
        # Include rviz (.rviz) files
        (os.path.join('share', package_name, 'rviz'), glob(os.path.join('rviz', '*.rviz'))),
        # Include map (.yaml and .pgm) files
        (os.path.join('share', package_name, 'maps'), glob(os.path.join('maps', '*.[yp][ag][m]'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='leorover-group9',
    maintainer_email='leorover-group9@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'leo_rover_controller_node = leo_rover_controller.leo_rover_controller:main'
        ],
    },
)
