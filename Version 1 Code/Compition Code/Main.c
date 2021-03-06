#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    Stage1LeftEncoder, sensorPotentiometer)
#pragma config(Sensor, in2,    Stage1RightEncoder, sensorPotentiometer)
#pragma config(Sensor, dgtl1,  Stage2DisEncoder, sensorQuadEncoder)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           TorqueLeft,    tmotorVex393HighSpeed_HBridge, openLoop)
#pragma config(Motor,  port2,           BaseLeft,      tmotorVex393HighSpeed_MC29, openLoop, reversed, encoderPort, I2C_1)
#pragma config(Motor,  port3,           BaseRight,     tmotorVex393HighSpeed_MC29, openLoop, encoderPort, I2C_2)
#pragma config(Motor,  port4,           Stage1Left,    tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port5,           Stage1Right,   tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           Stage2Motor,   tmotorVex393HighSpeed_MC29, openLoop, encoderPort, dgtl1)
#pragma config(Motor,  port8,           TorqueExtend,  tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port9,           GrabberMotor,  tmotorServoStandard, openLoop)
#pragma config(Motor,  port10,          TorqueRight,   tmotorVex393HighSpeed_HBridge, openLoop)
#pragma platform(VEX2)

#pragma competitionControl(Competition)
#include "Vex_Competition_Includes.c"
#include "Varibles.c"
#include "CONTROL_COMMANDS.c"
#include "Sensor&LCD_Control.c"

void pre_auton()
{
  bStopTasksBetweenModes = true;
}




////////////////////////////////////////////AUTON//////////////////////////////////////////



task autonomous()
{

  AutonomousCodePlaceholderForTesting();
}



/////////////////////////////////////////USER CONTROL///////////////////////////////////////



task usercontrol()
{

  while (true)
  {
    TankDrive();
		TorqueLift();
		TorqueExtention();
		Stage1();
		Stage2();
		GrabberControl();
		Sensor();
  }
}
