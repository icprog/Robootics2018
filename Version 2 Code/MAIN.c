#pragma config(UART_Usage, UART2, uartNotUsed, baudRate4800, IOPins, None, None)
#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, dgtl1,  leftPneumatic,  sensorDigitalOut)
#pragma config(Sensor, dgtl12, rightPneumatic, sensorDigitalOut)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           leftArmMotor,  tmotorVex393TurboSpeed_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           backLeftMotor, tmotorVex393HighSpeed_MC29, openLoop, reversed, encoderPort, I2C_1)
#pragma config(Motor,  port3,           frontLeftMotor, tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           extenderMotor, tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port7,           clawMotor,     tmotorServoStandard, openLoop)
#pragma config(Motor,  port8,           frontRightMotor, tmotorVex393TurboSpeed_MC29, openLoop)
#pragma config(Motor,  port9,           backRightMotor, tmotorVex393HighSpeed_MC29, openLoop, reversed, encoderPort, I2C_2)
#pragma config(Motor,  port10,          rightArmMotor, tmotorVex393TurboSpeed_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "Varibles.c"
#include "CONTROL_COMMANDS.c"

task main();
{
	while(true)
	{
		DriveChain();
		PressureControl();
		ArmLift();
		ClawControl();
		ExtenderControl();
	}
}
