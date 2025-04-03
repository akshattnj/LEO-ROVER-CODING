from setuptools import find_packages
from setuptools import setup

setup(
    name='leo_with_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('leo_with_interfaces', 'leo_with_interfaces.*')),
)
