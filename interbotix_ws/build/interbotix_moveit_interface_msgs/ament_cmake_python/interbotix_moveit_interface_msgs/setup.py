from setuptools import find_packages
from setuptools import setup

setup(
    name='interbotix_moveit_interface_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('interbotix_moveit_interface_msgs', 'interbotix_moveit_interface_msgs.*')),
)
