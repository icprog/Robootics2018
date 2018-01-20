//////// Base Varibles //////////
int leftBaseJoystick;
int rightBaseJoystick;
int frontLeftMotorSpeed;
int frontRightMotorSpeed;
int backLeftMotorSpeed;
int backRightMotorSpeed;
//////// Claw Varibles //////////
int clawOpenButton;
int clawCloseButton;
int clawMotorSpeed;
//////// Pneumatic - Extender Varibles //////
int pneumaticUpButton;
int pneumaticDownButton;
int extenderOutButton;
int extenderInButton;
int extenderMotorSpeed;
int pneumaticState;
//////// Arm Varibles ///////////
int armJoystick;
int leftArmMotorSpeed;
int rightArmMotorSpeed;
float autoHold;
int ArmPostion;
//////// Arm Calculations ////////////////
float strechFactor = -0.0000514403;
float a;
float b;
float c;

void Calculation(){
	ArmPostion = -nMotorEncoder[leftArmMotor]-1200;
	if(ArmPostion > -1200 && ArmPostion < -100){
		a = (ArmPostion + 600);
		b = a*a;
		c = strechFactor*b;
		autoHold = -(c+15);
	}
	else if(ArmPostion < 1200 && ArmPostion > 100){
		a = (ArmPostion - 600);
		b = a*a;
		c = strechFactor*b;
		autoHold = (c+15);
	}
	else
		autoHold = 0;
}
///////// Other Varibles ////////////
int LCDInputPosition = SensorValue[LCDInput];
int autotime;
