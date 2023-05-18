# Getting Started

## Setup
1. Install the newest [WPILib release](https://github.com/wpilibsuite/allwpilib/releases) for your platform.
2. Install the [REV client](https://docs.revrobotics.com/rev-hardware-client/) to interact with the Spark MAX motor
   controllers.
3. Open `2024-Everybot\Python\Rio` in VSCode to get proper tooling support
4. To start using the simulation type in your terminal `py -3 robot.py sim` on windows or `python3 robot.py sim` on
   linux/mac
5. To deploy to the actual robot type in your terminal `py -3 robot.py deploy` on windows or `python3 robot.py deploy` 
on linux/mac

## Hardware Setup

1. Flash your radio with the newest firmware, instructions can be found
   [here](https://docs.wpilib.org/en/stable/docs/zero-to-robot/step-3/radio-programming.html)
2. Set your Spark Max CAN IDs using the [REV client](https://docs.revrobotics.com/rev-hardware-client/) to match the
   following table:

| Motor       | ID |
|-------------|----|
| Left Front  | 11 |
| Left Back   | 12 |
| Right Front | 13 |
| Right Back  | 14 |

3. Confirm your Rio is connected to the radio, you can connect to the robot with the DS, & the CAN network is fully
   intact, from here you're ready to start deploying the base everybot code by running `py -3 robot.py deploy` in your
   terminal.

### Resources
- [WPILib Documentation](https://docs.wpilib.org/en/stable/)
- [RobotPy Documentation](https://robotpy.readthedocs.io/en/stable/)
- [REV Robotics Documentation](https://robotpy.readthedocs.io/projects/rev/en/stable/api.html)
- [CTRE Documentation](https://robotpy.readthedocs.io/projects/ctre/en/stable/api.html)
- [Introduction to Python Programming Princeton](https://introcs.cs.princeton.edu/python/home/)
- [Introduction to Python Video](https://www.youtube.com/watch?v=rfscVS0vtbw)
- [Control Theory for FRC](https://controls-in-frc.link/)
- Intro to Mathematics [3 Blue 1 Brown](https://www.youtube.com/@3blue1brown):
    - [Geometry](https://www.youtube.com/watch?v=GNcFjFmqEc8&list=PLZHQObOWTQDMXMi3bUMThGdYqos36X_lA)
    - [Statistics](https://www.youtube.com/watch?v=8idr1WZ1A7Q&list=PL0t49HdSsmyZHmM96zyRCf79kSBnb9RRH)
    - [Linear Algebra](https://www.youtube.com/watch?v=kjBOesZCoqc&list=PL0-GT3co4r2y2YErbmuJw2L5tW4Ew2O5B)
    - [Calculus](https://www.youtube.com/watch?v=WUvTyaaNkzM&list=PLZHQObOWTQDMsr9K-rj53DwVRMYO3t5Yr)
- [Photon Vision](https://docs.photonvision.org/en/latest/)

### Importing Needed Libraries
Follow the instructions on the [Robot Py Website](https://robotpy.readthedocs.io/en/stable/install/robot.html) to 
set up your environment. Make sure to install the Rev package too.

### Using Gradle
Currently, RobotPy does not rely on gradle unlike Java & C++ implementations, however on the package instillation side
pip makes a fantastic replacement for python packages and the 
[Robot Py Website](https://robotpy.readthedocs.io/en/stable/install/robot.html) will take you through how to use it.

### Using Git
Git & Specifically GitHub are used to manage code changes and versions, if you are not familiar with git, you can learn
more at [Git Handbook](https://guides.github.com/introduction/git-handbook/). We provide an included `.gitignore` file
which prevents certain unnecessary files from being tracked by git, if you need to add a file to git that is being
ignored you can remove it or the folder it is in from the `.gitignore` file. To add a file to `.gitignore` you can
add a single file `example.txt`, a folder `/example/`, or a file type `*.txt`. To users new to git using the GitHub
desktop client is recommended, it can be downloaded at [GitHub Desktop](https://desktop.github.com/).

#### GitHub Actions
*Python Support for this coming soon**
This repository contains a GitHub Actions workflow that will automatically build and test the code on every push to
confirm that the code compiles and passes all tests. This is a great way to ensure that the code is always in a working
state. The workflow can be found in `.github/workflows/build.yml`. The workflow is configured to run on every push to
the `main` branch. If you would like to change this, you can edit the `on` section of the workflow file. The workflow
will also run on every pull request to the `main` branch. If you would like to change this, you can edit the
`pull_request` section of the workflow file.