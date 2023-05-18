#include "subsystems/Drive.h"

Drive::Drive() {
  // Implementation of subsystem constructor goes here.
  Drive::leftFront.SetInverted(false);
  Drive::leftBack.SetInverted(false);
  Drive::rightFront.SetInverted(true);
  Drive::rightBack.SetInverted(true);

  Drive::leftFront.SetSmartCurrentLimit(40);
  Drive::leftBack.SetSmartCurrentLimit(40);
  Drive::rightFront.SetSmartCurrentLimit(40);
  Drive::rightBack.SetSmartCurrentLimit(40);

  Drive::leftFront.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
  Drive::leftBack.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
  Drive::rightFront.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
  Drive::rightBack.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
}

void Drive::Periodic() {
  // Implementation of subsystem periodic method goes here.
}

void Drive::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
}
