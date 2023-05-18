// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
#include <rev/CANSparkMax.h>
#include <units/length.h>

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */

namespace OperatorConstants {

constexpr int k_driverControllerPort = 0;

}  // namespace OperatorConstants

namespace DriveConstants {
    // Spark Max Setup
    constexpr int k_currentLimit = 40;

    // Kinematics & Estimation
    constexpr units::meter_t k_trackWidth = 0.5900928_m;
    constexpr units::meter_t k_wheelDiameter = 0.15_m;
    constexpr double k_driveGearing = 8.25;
}  // namespace DriveConstants
