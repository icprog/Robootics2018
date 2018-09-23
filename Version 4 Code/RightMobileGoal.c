void RightAutoBase(){
	BaseStraight(75,1500);
	delay(750);
	BaseStraight(-75, 1150);
	delay(100);
	BaseTurnLeft(75, 1300);
	delay(100);
	BaseStraight(75, 450);
	delay(100);
	BaseTurnLeft(75, 600);
	delay(100);
	AState = 1;
	BaseStraight(127, 550);
	waitUntil(time1[T1]> 13000);
	BaseStraight(-127,500);
}
void RightAutoArm(){
	ArmMovement(-75, 300);
	waitUntil(time1[T1]  > 4000);
	ArmMovement(-75, 425);
}

void RightAutoClaw(){
	//motor[Claw] = 0;
	motor[Claw] = -100;
	waitUntil(time1[T1]> 4000);
	motor[Claw] = 100;
}
void RightAutoMobileGoal(){
	//	SensorValue[leftSolenoid] = 0;
	//	SensorValue[rightSolenoid] = 0;
	//motor[Extender] = 0;
	SensorValue[leftSolenoid] = 0;
	SensorValue[rightSolenoid] = 0;
	waitUntil(time1[T1]> 3300);
	SensorValue[leftSolenoid] = 1;
	SensorValue[rightSolenoid] = 1;
	waitUntil(AState == 1);
	delay(750);
	motor[Extender] = 127;
	delay(1500);
	motor[Extender] = -127;
	delay(1000);
}
