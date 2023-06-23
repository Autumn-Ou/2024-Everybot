#pragma once

#include <frc2/command/CommandPtr.h>
#include <frc2/command/SubsystemBase.h>
#include <rev/CANSparkMax.h>
#include <frc/motorcontrol/MotorControllerGroup.h>

class Drive : public frc2::SubsystemBase {
 public:
  Drive();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  /**
   * Will be called periodically whenever the CommandScheduler runs during
   * simulation.
   */
  void SimulationPeriodic() override;

  frc::DifferentialDrive drive{&leftMotors, &rightMotors};

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  rev::CANSparkMax leftFront{11, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax leftBack{12, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax rightFront{13, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax rightBack{14, rev::CANSparkMax::MotorType::kBrushless};

  frc::MotorControllerGroup leftMotors{leftFront, leftBack};
  frc::MotorControllerGroup rightMotors{rightFront, rightBack};
};