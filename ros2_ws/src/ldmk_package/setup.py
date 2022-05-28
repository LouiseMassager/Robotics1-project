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
            'teleop_keyboard = ldmk_package.teleop_keyboard',
            'roboticsIK = ldmk_package.roboticsIK:main',
            'fingersclient = ldmk_package.fingersclient:main',
            'anglespublisher_manual = ldmk_package.anglespublisher_manual',
            'fingersclient_manual = ldmk_package.fingersclient_manual:main',
        ],
    },
)
