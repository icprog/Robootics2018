task Calculations{
	while(true){
		BasePosition = (SensorValue[BaseRightEncoder]+SensorValue[BaseLeftEncoder])/2;
		ArmPostion2 = (nMotorEncoder[ArmL]+nMotorEncoder[ArmR])/2;
		EndTimeSlice();
	}
}

/////////////// Base Control //////////////
task BaseControl{
	while(true){
		// Varibles
		int BaseLeftSpeed;
		int BaseRightSpeed;

		BaseLeftSpeed = vexRT[Ch3];
		BaseRightSpeed = vexRT[Ch2];

		// Execution of Input for Left Side
		if(abs(BaseLeftSpeed) > 10){
			motor[BaseLeft] = BaseLeftSpeed;
		}
		else{
			motor[BaseLeft] = 0;
		}
		// Execution of Input for Right Side
		if(abs(BaseRightSpeed) > 10){
			motor[BaseRight] = BaseRightSpeed;
		}
		else {
			motor[BaseRight] = 0;
		}
		EndTimeSlice();
	}
}
/////////////// Arm Control //////////////
task ArmControl{
	while(true){
		int ArmSpeed,ArmPostion;	// Varibles
		float strechFactor = -0.0000514403;	// Varibles
		float a,b,c,AutoHold;	// Varibles
		ArmSpeed = -vexRT[Ch2Xmtr2];

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
		EndTimeSlice();
	}
}
/////////////// Mobile Goal Control //////////////
task MobileGoalControl{
	while(true){
		if(vexRT[Btn6U] == 1)
			pneumaticState = 1;
		else if(vexRT[Btn6D] == 1)
			pneumaticState = 0;

		if(vexRT[Btn5U] == 1)
			ExtenderSpeed = 127;
		else if(vexRT[Btn5D] == 1)
			ExtenderSpeed = -127;
		else
			ExtenderSpeed = 0;

		SensorValue[leftSolenoid] = pneumaticState;
		SensorValue[rightSolenoid] = pneumaticState;

		motor[Extender] = ExtenderSpeed;	// Execution of Extender
		EndTimeSlice();
	}
}
/////////////// Claw Control //////////////
task ClawControl{
	while(true){
		if(vexRT[Btn6DXmtr2] == 1)
			ClawSpeed = 80;
		else if(vexRT[Btn6UXmtr2] == 1)
			ClawSpeed = -80;
		else
			ClawSpeed = 0;

		motor[Claw] = ClawSpeed;	// Execution of Input
		EndTimeSlice();
	}
}
