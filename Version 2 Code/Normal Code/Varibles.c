int leftBaseJoystick;
int rightBaseJoystick;
int pneumaticUpButton;
int pneumaticDownButton;
int extenderOutButton;
int extenderInButton;
int armJoystick;
int clawOpenButton;
int clawCloseButton;
//////// Base Varibles //////////
int frontLeftMotorSpeed;
int frontRightMotorSpeed;
int backLeftMotorSpeed;
int backRightMotorSpeed;
//////// Claw Varibles //////////
int clawMotorSpeed;
//////// Pneumatic / Extender Varibles //////
int extenderMotorSpeed;
int pneumaticState;
//////// Arm Varibles ///////////
int leftArmMotorSpeed;
int rightArmMotorSpeed;
float autoHold;
int ArmPostion;
//////// Arm Calculations ////////////////
float strechFactor = -0.000085644;
float a;
float b;
float c;

void Calculation(){
	ArmPostion = -nMotorEncoder[leftArmMotor]-1148;
	if(ArmPostion > -1187 && ArmPostion < -313){
		a = (ArmPostion + 731.5);
		b = a*a;
		c = strechFactor*b;
		autoHold = c+15;
	}
	else if(ArmPostion < 1150 && ArmPostion > 313){
		a = (ArmPostion - 731.5);
		b = a*a;
		c = strechFactor*b;
		autoHold = -(c+15);
	}
	else
		autoHold = 0;
}
///////// Other Varibles ////////////
