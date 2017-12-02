int X1=0,X2=0, Y1=0, threshold=15;
int LeftMotorEncoder;
int RightMotorEncoder;
int LeftCenterValue = 1870;
int RightCenterValue = 1870;
int Stage1LeftPosition = Stage1LeftEncoder - LeftCenterValue;
int Stage1RightPosition = Stage1RightEncoder - RightCenterValue;
int Stage1AvgPosition;
//int Stage1AutoPos = 0;
//int Stage2Position;

int LeftBaseSpeed = 0;
//signed char BaseLeftArray [175];

int RightBaseSpeed = 0;
//signed char BaseRightArray [175];

int Stage1LeftSpeed = 0;
//signed char Stage1LeftArray [175];

int Stage1RightSpeed = 0;
//signed char Stage1RightArray [175];

int Stage2Speed = 0;
//signed char Stage2Array [175];

int GrabberSpeed = 0;
//signed char GrabberArray [175];

int TorqueLeftSpeed = 0;
//signed char TorqueLeftArray [175];

int TorqueRightSpeed = 0;
//signed char TorqueRightArray [175];
