/////////////// Base Control //////////////
void BaseControl(bool mode){
	// Varibles
	int BaseLeftSpeed;
	int BaseRightSpeed;
	// Mode Dectection
	if(mode == User){
		BaseLeftSpeed = vexRT[Ch3];
		BaseRightSpeed = vexRT[Ch2];
	}
	else if(mode == Auto){
		//Add later
	}
	// Execution of Input for Left Side
	if(abs(BaseLeftSpeed) > 10){
		motor[BaseBL] = BaseLeftSpeed;
		motor[BaseFL] = BaseLeftSpeed;
	}
	else{
		motor[BaseBL] = 0;
		motor[BaseFL] = 0;
	}
	// Execution of Input for Right Side
	if(abs(BaseRightSpeed) > 10){
		motor[BaseBR] = BaseRightSpeed;
		motor[BaseFR] = BaseRightSpeed;
	}
	else {
		motor[BaseBR] = 0;
		motor[BaseFR] = 0;
	}
}
/////////////// Arm Control //////////////
void ArmControl(bool mode){
	// Varibles
	int ArmSpeed,ArmPostion;
	float strechFactor = -0.0000514403;
	float a,b,c,AutoHold;
	// Mode Detection
	if(mode == User){
		ArmSpeed = vexRT[Ch2Xmtr2];
	}
	else if(mode == Auto){
		//Add Later
	}
	// Calculstions for Auto Holding
	ArmPostion = -nMotorEncoder[ArmL]-1200;
	if(ArmPostion > -1200 && ArmPostion < -100){
		a = (ArmPostion + 600);
		b = a*a;
		c = strechFactor*b;
		AutoHold = -(c+15);
	}
	else if(ArmPostion < 1200 && ArmPostion > 100){
		a = (ArmPostion - 600);
		b = a*a;
		c = strechFactor*b;
		AutoHold = (c+15);
	}
	else{
		AutoHold = 0;
	}
	// Execution of Input & Auto Hold
	if(abs(ArmSpeed) > 15){
		motor[ArmL] = ArmSpeed;
		motor[ArmR] = ArmSpeed;
	}
	else{
		motor[ArmL] = AutoHold;
		motor[ArmR] = AutoHold;
	}
}
/////////////// Mobile Goal Control //////////////
void MobileGoalControl(bool mode){
	//Varibles
	int PneumaticUp,PneumaticDown,ExtenderIn,ExtenderOut;
	// Mode Detection
	if(mode == User){
		PneumaticUp = vexRT[Btn6U];
		PneumaticDown = vexRT[Btn6D];
		ExtenderOut = vexRT[Btn5U];
		ExtenderIn = vexRT[Btn5D];
	}
	else if(mode == Auto){
		//Add Later
	}
	// Execution of Pneumatic Lift
	if(PneumaticUp == 1){
		SensorValue[rightSolenoid] = 1;
		SensorValue[leftSolenoid] = 1;
	}
	else if(PneumaticDown == 1){
		SensorValue[rightSolenoid] = 0;
		SensorValue[leftSolenoid] = 0;
	}
	// Execution of Extender
	if(ExtenderOut == 1)
		motor[Extender] = 127;
	else if(ExtenderIn == 1)
		motor[Extender] = -127;
	else
		motor[Extender] = 0;
}
/////////////// Claw Control //////////////
void ClawControl(bool mode){
	//Varibles
	int ClawOpen,ClawClose;
	// Mode Detection
	if(mode == User){
		ClawOpen = vexRT[Btn6UXmtr2];
		ClawClose = vexRT[Btn6DXmtr2];
	}
	else if(mode == Auto){
		//Add Later
	}
	// Execution of Input
	if(ClawOpen == 1)
		motor[Claw] = 100;
	else if(ClawClose == 1)
		motor[Claw] = -100;
	else
		motor[Claw] = 0;
}
