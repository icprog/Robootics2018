#pragma config(UART_Usage, UART1, uartVEXLCD, baudRate19200, IOPins, None, None)
#pragma config(UART_Usage, UART2, uartNotUsed, baudRate4800, IOPins, None, None)
#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    LCDInput,       sensorPotentiometer)
#pragma config(Sensor, dgtl1,  leftSolenoid,   sensorDigitalOut)
#pragma config(Sensor, dgtl12, rightSolenoid,  sensorDigitalOut)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           ArmL,          tmotorVex393TurboSpeed_HBridge, openLoop, reversed, encoderPort, I2C_1)
#pragma config(Motor,  port2,           BaseBL,        tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           BaseFL,        tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           Extender,      tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port7,           Claw,          tmotorServoStandard, openLoop)
#pragma config(Motor,  port8,           BaseFR,        tmotorVex393TurboSpeed_MC29, openLoop)
#pragma config(Motor,  port9,           BaseBR,        tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          ArmR,          tmotorVex393TurboSpeed_HBridge, openLoop, encoderPort, I2C_2)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX2)
#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c" //Main competition background code...do not modify!

bool Auto = false;
bool User = true;
#include "Control Commands.c"

void pre_auton()
{

  bStopTasksBetweenModes = false;

}

task autonomous()
{
	while (true)
  {
    BaseControl(false);
    ArmControl(false);
    MobileGoalControl(false);
    ClawControl(false);
  }
}

task usercontrol()
{
  // User control code here, inside the loop
  while (true)
  {
    BaseControl(true);
    ArmControl(true);
    MobileGoalControl(true);
    ClawControl(true);
  }
}
