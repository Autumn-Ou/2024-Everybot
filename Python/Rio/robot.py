#!/usr/bin/env python3

import rev
import wpilib.drive


class MyRobot(wpilib.TimedRobot):
    def robotInit(self):
        """Robot initialization function"""

        # create motor controller objects
        left_front = rev.CANSparkMax(11, rev.CANSparkMax.MotorType.kBrushless)
        left_back = rev.CANSparkMax(12, rev.CANSparkMax.MotorType.kBrushless)
        right_front = rev.CANSparkMax(13, rev.CANSparkMax.MotorType.kBrushless)
        right_back = rev.CANSparkMax(14, rev.CANSparkMax.MotorType.kBrushless)

        # create motor groups
        left_motors = wpilib.MotorControllerGroup(left_front, left_back)
        right_motors = wpilib.MotorControllerGroup(right_front, right_back)

        # object that handles basic drive operations
        self.myRobot = wpilib.drive.DifferentialDrive(left_motors, right_motors)
        self.myRobot.setExpiration(0.1)

        # joystick #0
        self.stick = wpilib.XboxController(0)

    def teleopInit(self):
        """Executed at the start of teleop mode"""
        self.myRobot.setSafetyEnabled(True)

    def teleopPeriodic(self):
        """Runs the motors with tank steering"""
        self.myRobot.arcadeDrive(
            -self.stick.getLeftY(), -self.stick.getRightX(), True
        )


if __name__ == "__main__":
    wpilib.run(MyRobot)