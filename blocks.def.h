//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "acpi -V | grep -m 1 \"Battery 0\" | awk '{print $3, substr($4, 1, length($4)-1)}'",	30,	0},

	{"", "echo $(acpi -V | grep -m 1 \"Thermal 0\" | awk '{print $4}')°",				30,	0},

	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",				30,	0},

	{"", "volume.sh",										0,	10},

	{" ", "date '+%d %b %Y (%a)'",									0,	0},
	
	{" ", "date '+%H:%M'",										60,	0},

	{" ", "echo $(xbacklight -get | awk -F. '{print $1}')%",					0,	10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
