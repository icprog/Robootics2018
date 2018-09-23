void SkillAutoBase(){
	BaseStraight(75,1500);
	delay(750);
	BaseStraight(-75, 1150);
	delay(100);
	BaseTurnRight(75, 1300);
	delay(100);
	BaseStraight(75, 450);
	delay(100);
	BaseTurnRight(75, 600);
	delay(100);
	AState = 1;
	BaseStraight(200, 600);
	waitUntil(time1[T1]> 13000);
	BaseStraight(-200,500);
	delay(100);
	BaseTurnLeft(75, 700);
	delay(100);
	BaseStraight(-75,1200);
	delay(100);
	motor[BaseLeft]=-40;
	motor[BaseRight]=-40;
	delay(1000);
	motor[BaseLeft]=0;
	motor[BaseRight]=0;
	delay(1000);
	motor[BaseRight]=127;
	BaseStraight(75, 1100);
	delay(100);
	BaseTurnLeft(75,2100);
	delay(100);
	BaseStraight(75, 1000);
	delay(2000);
	BaseTurnRight(75, 20);
	delay(100);
	BaseStraight(-127,2500);
	delay(1000);
	BaseStraight(127, 500);

}
void SkillAutoArm(){
	ArmMovement(-75, 300);
	waitUntil(time1[T1]  > 4000);
	ArmMovement(-75, 425);
}

void SkillAutoClaw(){
	//motor[Claw] = 0;
	motor[Claw] = -100;
	waitUntil(time1[T1]> 4000);
	motor[Claw] = 100;
}
void SkillAutoMobileGoal(){
	//	SensorValue[leftSolenoid] = 0;
	//	SensorValue[rightSolenoid] = 0;
	//motor[Extender] = 0;
	SensorValue[leftSolenoid] = 0;
	SensorValue[rightSolenoid] = 0;
	waitUntil(time1[T1]> 3300);
	SensorValue[leftSolenoid] = 1;
	SensorValue[rightSolenoid] = 1;
	waitUntil(AState == 1);
	delay(650);
	motor[Extender] = 127;
	delay(1500);
	motor[Extender] = -127;
	delay(1000);
	motor[Extender] = 0;
	waitUntil(time1[T1] > 15000);
	SensorValue[leftSolenoid] = 0;
	SensorValue[rightSolenoid] = 0;
	waitUntil(time1[T1]>22000);
	SensorValue[leftSolenoid] = 1;
	SensorValue[rightSolenoid] = 1;
	waitUntil(time1[T1]>27000);
	motor[Extender] = 127;
}
