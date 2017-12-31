int X1=0,X2=0, Y1=0, threshold=15;
int LeftMotorEncoder;
int RightMotorEncoder;
int LeftCenterValue = 1870;
int RightCenterValue = 1870;
int Stage1LeftPosition = Stage1LeftEncoder - LeftCenterValue;
int Stage1RightPosition = Stage1RightEncoder - RightCenterValue;
int Stage1AvgPosition;
int Stage2Position;

int LeftBaseSpeed = 0;
int RightBaseSpeed = 0;
int Stage1LeftSpeed = 0;
int Stage1RightSpeed = 0;
int Stage2Speed = 0;
int GrabberSpeed = 0;
int TorqueLeftSpeed = 0;
int TorqueRightSpeed = 0;
int TorqueExtendSpeed = 0;
