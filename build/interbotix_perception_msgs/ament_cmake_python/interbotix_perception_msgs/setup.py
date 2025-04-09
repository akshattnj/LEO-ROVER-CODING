from setuptools import find_packages
from setuptools import setup

setup(
    name='interbotix_perception_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('interbotix_perception_msgs', 'interbotix_perception_msgs.*')),
)
