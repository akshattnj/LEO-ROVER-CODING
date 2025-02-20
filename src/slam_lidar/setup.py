from setuptools import find_packages, setup

package_name = 'slam_lidar'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/slam_lidar.launch.py']),  # ✅ Add this line
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sfr2024',
    maintainer_email='sfr2024@todo.todo',
    description='TODO: Package description',
    license='BSD-3-Clause',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
