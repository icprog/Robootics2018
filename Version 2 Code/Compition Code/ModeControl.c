
void JoystickControl(){
	leftBaseJoystick = vexRT[Ch3];
	rightBaseJoystick = vexRT[Ch2];
	pneumaticUpButton = vexRT[Btn6U];
	pneumaticDownButton = vexRT[Btn6D];
	armJoystick = vexRT[Ch2Xmtr2];
	clawOpenButton = vexRT[Btn6UXmtr2];
	clawCloseButton = vexRT[Btn6DXmtr2];
	extenderOutButton = vexRT[Btn5U];
	extenderInButton = vexRT[Btn5D];
}
void AutonomousControl(){


	//leftBaseJoystick = leftBaseArray[autotime];
	//rightBaseJoystick = rightBaseArray[autotime];
	//test1 = leftBaseArray[autotime];
	autotime = autotime+1;
	delay(50);




}
