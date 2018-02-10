#pragma config(UART_Usage, UART1, uartVEXLCD, baudRate19200, IOPins, None, None)
#pragma config(UART_Usage, UART2, uartNotUsed, baudRate4800, IOPins, None, None)
#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    m44,            sensorPotentiometer)
#pragma config(Sensor, in2,    Gyro,           sensorGyro)
#pragma config(Sensor, dgtl1,  leftSolenoid,   sensorDigitalOut)
#pragma config(Sensor, dgtl2,  rightSolenoid,  sensorDigitalOut)
#pragma config(Sensor, dgtl4,  BaseLeftEncoder, sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  BaseRightEncoder, sensorQuadEncoder)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           ArmL,          tmotorVex393TurboSpeed_HBridge, openLoop, reversed, encoderPort, I2C_1)
#pragma config(Motor,  port2,           BaseLeft,      tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           Extender,      tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port7,           Claw,          tmotorServoStandard, openLoop)
#pragma config(Motor,  port9,           BaseRight,     tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          ArmR,          tmotorVex393TurboSpeed_HBridge, openLoop, encoderPort, I2C_2)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX2)
#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c" //Main competition background code...do not modify!


int AutoSelect = -1;
int ClawSpeed,ExtenderSpeed,pneumaticState;
int BasePosition, ArmPostion, ArmPostion2  = 0;

#include "AutonomousFunction.c"
#include "LeftMobileGoal.c"
#include "RightMobileGoal.c"
#include "AutoSkills.c"
#include "Control Commands.c"
#include "LCD.c"
#include "Debugger&Codewriter.c"

void pre_auton()
{
	bDisplayCompetitionStatusOnLcd = false;
	startTask( LCD );
	startTask( Calculations );
	bStopTasksBetweenModes = false;

}

task autonomous()
{
	clearTimer(T1);
	AutoProgram();

}

task usercontrol()
{
	// User control code here, inside the loop
	clearTimer(T1);

	startTask( BaseControl );
	startTask( ArmControl );
	startTask( MobileGoalControl );
	startTask( ClawControl );


}