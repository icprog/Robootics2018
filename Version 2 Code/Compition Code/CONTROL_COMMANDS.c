///////////////////// Drive Chain Control ////////////////////////////////////////////////////////////////////////////
void DriveChain(){
	if(abs(leftBaseJoystick) > 10){
		frontLeftMotorSpeed = leftBaseJoystick;
		backLeftMotorSpeed = leftBaseJoystick;
	}
	else{
		frontLeftMotorSpeed = 0;
		backLeftMotorSpeed = 0;
	}

	if(abs(rightBaseJoystick) > 10){
		frontRightMotorSpeed = rightBaseJoystick;
		backRightMotorSpeed = rightBaseJoystick;
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
	if(pneumaticUpButton == 1)
		pneumaticState = 1;

	else if(pneumaticDownButton == 1)
		pneumaticState = 0;


	SensorValue[rightPneumatic] = pneumaticState;
	SensorValue[leftPneumatic] = pneumaticState;
}
////////////////// Arm Lift Control ///////////////////////////////////////////////
void ArmLift(){
	 // Proforms autohold calculations
	if(abs(armJoystick) > 15){
		leftArmMotorSpeed = vexRT[Ch2Xmtr2];
		rightArmMotorSpeed = vexRT[Ch2Xmtr2];
	}

	else{
		leftArmMotorSpeed = autoHold;
		rightArmMotorSpeed = autoHold;

	}

	motor[leftArmMotor] = leftArmMotorSpeed;
	motor[rightArmMotor] = rightArmMotorSpeed;
}
////////////////// Claw Control //////////////////////////////////////////////////
void ClawControl(){
	if(clawOpenButton == 1)
		clawMotorSpeed = 100;
	else if(clawCloseButton == 1)
		clawMotorSpeed = -100;
	else
		clawMotorSpeed = 0;
	motor[clawMotor] = clawMotorSpeed;
}
//////////////// Extender Control ////////////////////////////////////////////////
void ExtenderControl(){
	if(extenderOutButton == 1)
		extenderMotorSpeed = 100;
	else if(extenderInButton == 1)
		extenderMotorSpeed = -100;
	else
		extenderMotorSpeed = 0;
	motor[extenderMotor] = extenderMotorSpeed;
}
