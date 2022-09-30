//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "sb-thermal",		30,	1},

	{"", "sb-cpu",			30,	2},

	{"", "sb-ram",  		30,	3},

	{"", "sb-swap",			30,	4},

	{"", "sb-disk",			600,	5},

	{"", "sb-volume",		0,	10},

	{"", "sb-bright",	    0,	11},

	{"", "sb-cal",		    0,	6},
	
	{"", "sb-time",		    60,	7},
	
    {"", "sb-battery",	    30,	8},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 5;
