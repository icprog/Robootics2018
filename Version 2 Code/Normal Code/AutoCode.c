#define   DATALOG_SERIES_0    0
#define   DATALOG_SERIES_1    1
#define   DATALOG_SERIES_2    2
#define   DATALOG_SERIES_3    3
#define   DATALOG_SERIES_4    4
#define   DATALOG_SERIES_5    5
#define   DATALOG_SERIES_6    6
#define   DATALOG_SERIES_7    7




void selfwriting(){
	datalogDataGroupStart();
	datalogAddValue( DATALOG_SERIES_0, vexRT[Ch2]); // right base motors
	datalogAddValue( DATALOG_SERIES_1, vexRT[Ch3]); // left base motors
	datalogAddValue( DATALOG_SERIES_2, pneumaticState); // Moblie Goal Lift
	datalogAddValue( DATALOG_SERIES_3, extenderMotorSpeed); // Moblie Goal Extender
	datalogAddValue( DATALOG_SERIES_4, vexRT[Ch2Xmtr2]);
	datalogAddValue( DATALOG_SERIES_5, clawMotorSpeed);
	datalogDataGroupEnd();
	delay(100);
}
void DriveControl(){
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
