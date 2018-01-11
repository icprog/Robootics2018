///////////////////// Drive Chain Control ////////////////////////////////////////////////////////////////////////////
void DriveChain(){
	if(abs(vexRT[Ch3]) > threshold){
		frontLeftMotorSpeed = vexRT[Ch3];
		backLeftMotorSpeed = vexRT[Ch3];
	}
	else{
		frontLeftMotorSpeed = 0;
		backLeftMotorSpeed = 0;
	}

	if(abs(vexRT[Ch2]) > threshold){
		frontRightMotorSpeed = vexRT[Ch2];
		backRightMotorSpeed = vexRT[Ch2];
	}
	else {
		frontRightMotorSpeed = 0;
		backRightMotorSpeed = 0;
	}
	motor[frontLeftMotor] = frontLeftMotorSpeed;
	motor[backLeftMotor] = backLeftMotorSpeed;
	motor[frontRightMotor] = frontRightMotorSpeed;
	motor[backRightMotor] = backRightMotorSpeed;
}
//////////////////// Pneunatic Piston Control ////////////////////////////////////
void PressureControl(){
	if(vexRT[Btn6U] == 1){
      SensorValue[rightPneumatic] = 1;
      SensorValue[leftPneumatic] = 1;
    }

  else if(vexRT[Btn6D] == 1){
      SensorValue[leftPneumatic] = 0;
      SensorValue[rightPneumatic] = 0;
  	}
}
////////////////// Arm Lift Control ///////////////////////////////////////////////
void ArmLift(){
	if(abs(vexRT[Ch2Xmtr2]) > threshold){
		leftArmMotorSpeed = vexRT[Ch2Xmtr2];
		rightArmMotorSpeed = vexRT[Ch2Xmtr2];
	}

	else{
		leftArmMotorSpeed = 0;
		rightArmMotorSpeed = 0;
	}

	motor[leftArmMotor] = leftArmMotorSpeed;
	motor[rightArmMotor] = rightArmMotorSpeed;
}
////////////////// Claw Control //////////////////////////////////////////////////
void ClawControl(){
	if(vexRT[Btn6UXmtr2] == 1)
		clawMotorSpeed = 100;
	else if(vexRT[Btn6DXmtr2] == 1)
		clawMotorSpeed = -100;
	else
		clawMotorSpeed = 0;
	motor[clawMotor] = clawMotorSpeed;
}
//////////////// Extender Control ////////////////////////////////////////////////
void ExtenderControl(){
	if(vexRT[Btn5U] == 1)
		extenderMotorSpeed = 100;
	else if(vexRT[Btn5D] == 1)
		extenderMotorSpeed = -100;
	else
		extenderMotorSpeed = 0;
	motor[extenderMotor] = extenderMotorSpeed;
}
