/*
	Copyright 2016 Benjamin Vedder	benjamin@vedder.se

	This file is part of the VESC firmware.

	The VESC firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The VESC firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef MCCONF_STEN_H_
#define MCCONF_STEN_H_

/*
 * HW: 4.10f
 */

/*
 * Parameters
 */
#define MCCONF_DEFAULT_MOTOR_TYPE			MOTOR_TYPE_BLDC
#define MCCONF_L_CURRENT_MAX				35.0f	// Current limit in Amperes (Upper)
#define MCCONF_L_CURRENT_MIN				-30.0f	// Current limit in Amperes (Lower)
#define MCCONF_L_MAX_ABS_CURRENT			130.0f	// The maximum absolute current above which a fault is generated
#define MCCONF_L_SLOW_ABS_OVERCURRENT		1		// Use the filtered (and hence slower) current for the overcurrent fault detection
#define MCCONF_L_IN_CURRENT_MAX				25.0f	// Input current limit in Amperes (Upper)
#define MCCONF_L_IN_CURRENT_MIN				-20.0f	// Input current limit in Amperes (Lower)
#define MCCONF_L_RPM_MAX					80000.0f	// The motor speed limit (Upper)
#define MCCONF_L_RPM_MIN					-80000.0f	// The motor speed limit (Lower)
#define MCCONF_L_MIN_VOLTAGE				10.0f	// Minimum input voltage
#define MCCONF_L_MAX_VOLTAGE				57.0f	// Maximum input voltage
#define MCCONF_CC_STARTUP_BOOST_DUTY		0.03f	// The lowest duty cycle to use in current control mode (has to be > MCPWM_MIN_DUTY_CYCLE)
#define MCCONF_L_RPM_LIMIT_NEG_TORQUE		0		// Use negative torque to limit the RPM
#define MCCONF_L_CURR_MAX_RPM_FBRAKE		1500	// Maximum electrical RPM to use full brake at

#define MCCONF_L_BATTERY_CUT_START			41.0f	// Start limiting the positive current at this voltage
#define MCCONF_L_BATTERY_CUT_END			39.0f		// Limit the positive current completely at this voltage

// Sensorless settings
#define MCCONF_SENSOR_MODE				SENSOR_MODE_SENSORLESS // Sensor mode
#define MCCONF_SL_MIN_RPM					250		// Auto-commutate below this RPM
#define MCCONF_SL_MIN_ERPM_CYCLE_INT_LIMIT	1100.0f	// Minimum RPM to calculate the BEMF coupling from
#define MCCONF_SL_CYCLE_INT_LIMIT			80.0f	// Flux integrator limit 0 ERPM
#define MCCONF_SL_PHASE_ADVANCE_AT_BR	0.8f		// Flux integrator limit percentage at MCPWM_CYCLE_INT_START_RPM_BR ERPM
#define MCCONF_SL_BEMF_COUPLING_K		750.0f	// Input voltage to bemf coupling constant

// FOC settings
#define MCCONF_FOC_CURRENT_KP			0.03f
#define MCCONF_FOC_CURRENT_KI			50.0f
#define MCCONF_FOC_F_SW					20000.0f
#define MCCONF_FOC_MOTOR_L				0.000007f
#define MCCONF_FOC_MOTOR_R				0.015f
#define MCCONF_FOC_MOTOR_FLUX_LINKAGE	0.00245f
#define MCCONF_FOC_OBSERVER_GAIN		9e7f
#define MCCONF_FOC_OPENLOOP_RPM			600.0f
#define MCCONF_FOC_SL_OPENLOOP_HYST		0.5f
#define MCCONF_FOC_SL_OPENLOOP_TIME		0.5f

// Speed PID parameters
#define MCCONF_S_PID_KP					0.0001f	// Proportional gain
#define MCCONF_S_PID_KI					0.002f	// Integral gain
#define MCCONF_S_PID_KD					0.0f		// Derivative gain
#define MCCONF_S_PID_MIN_RPM				1200.0f	// Minimum allowed RPM

#endif /* MCCONF_STEN_H_ */