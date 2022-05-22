from setuptools import setup
import os
from glob import glob

package_name = 'ldmk_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='user',
    maintainer_email='user@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'anglespublisher = ldmk_package.anglespublisher:main',
            'roboticsIK = ldmk_package.roboticsIK:main',
            'teleop_keyboard = ldmk_package.teleop_keyboard',
            'anglespublisher2 = ldmk_package.anglespublisher2',
        ],
    },
)
