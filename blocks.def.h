//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
/*	{"", "acpi -V | grep -m 1 \"Battery 0\" | awk '{print $3, substr($4, 1, length($4)-1)}'",	30,	0}, */

	{"", "battery.sh",		30,	0},

	{"", "thermal.sh",		30,	0},

	{"", "memory.sh",		30,	0},

	{"", "volume.sh",		0,	10},

	{"", "calendar.sh",		0,	0},
	
	{"", "clock.sh",		60,	0},

	{"", "brightness.sh",		0,	10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
