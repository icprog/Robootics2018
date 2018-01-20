//int leftBaseArray [] = {34,35,50,59,64,75,85,90,115,123,127,127,127,127,127,127
//,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,1,1,1,1,1,1,1,1,1,-7,-7
//,-7,-8,1,1,1,6,6,7,14,14,1,1,1,1,1,1,-26,-26,-26,-26,-26,-27,-28,-29,-30,-31,-33,-34,
//-36,-40,-47,-54,-56,-60,-63,-67,-68,-75,-88,-93,-105,-110,-120};

//int rightBaseArray [] = {34,35};

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
