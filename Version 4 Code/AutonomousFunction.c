//////// Auto Base Control /////////
void BaseSensorReset(){
	SensorValue[BaseLeftEncoder] = 0;
	SensorValue[BaseRightEncoder] = 0;
	SensorValue[Gyro] = 0;
	BasePosition = 0;
}
void BaseStraight(int speed, int encoder){
	BaseSensorReset();
	motor[BaseLeft]=speed;
	motor[BaseRight]= speed;
	waitUntil(abs(BasePosition) > encoder);
	motor[BaseLeft]= 0;
	motor[BaseRight]= 0;
}
void BaseTurnLeft(int speed, int encoder){
	BaseSensorReset();
	motor[BaseLeft]= -speed;
	motor[BaseRight]= speed;
	waitUntil(abs(SensorValue[Gyro]) > encoder);
	motor[BaseLeft]= 0;
	motor[BaseRight]= 0;
}
void BaseTurnRight(int speed, int encoder){
	BaseSensorReset();
	motor[BaseLeft]= speed;
	motor[BaseRight]= -speed;
	waitUntil(abs(SensorValue[Gyro]) > encoder);
	motor[BaseLeft]= 0;
	motor[BaseRight]= 0;
}
/////////// Auto Arm Control /////////////
void ArmMovement(int speed, int encoder){
	motor[ArmL] = speed;
	motor[ArmR] = speed;
	waitUntil(abs(ArmPostion2) > encoder);
	float strechFactor = -0.0000514403;	// Varibles
	float a,b,c,AutoHold;	// Varibles
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
	motor[ArmL] = AutoHold;
	motor[ArmR] = AutoHold;
}
