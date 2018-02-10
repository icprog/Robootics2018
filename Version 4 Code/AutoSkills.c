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
	BaseStraight(127, 550);
	waitUntil(time1[T1]> 13000);
	BaseStraight(-127,500);
	delay(100);
	BaseTurnLeft(75, 800);
	delay(100);
	BaseStraight(-75,1190);
	delay(100);
	motor[BaseLeft]=-20;
	motor[BaseRight]=-20;
	delay(250);
	motor[BaseLeft]=0;
	motor[BaseRight]=0;
	delay(1000);
	motor[BaseRight]=127;
	BaseStraight(75, 1000);
	delay(100);
	BaseTurnLeft(75,2200);
	delay(100);
	BaseStraight(75, 1000);
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
	waitUntil(time1[T1]> 10250);
	motor[Extender] = 127;
	waitUntil(time1[T1]> 12000);
	motor[Extender] = -127;
	waitUntil(time1[T1]> 13500);
	motor[Extender] = 0;
	waitUntil(time1[T1] > 15000);
	SensorValue[leftSolenoid] = 0;
	SensorValue[rightSolenoid] = 0;
	waitUntil(time1[T1]>21500);
	SensorValue[leftSolenoid] = 1;
	SensorValue[rightSolenoid] = 1;
}
