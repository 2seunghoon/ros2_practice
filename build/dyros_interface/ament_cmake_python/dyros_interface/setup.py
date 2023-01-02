from setuptools import find_packages
from setuptools import setup

setup(
    name='dyros_interface',
    version='0.0.0',
    packages=find_packages(
        include=('dyros_interface', 'dyros_interface.*')),
)
