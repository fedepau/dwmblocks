//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "sb-thermal",		30,	0},

	{"", "sb-cpu",			30,	0},

	{"", "sb-ram",  		30,	0},

	{"", "sb-swap",			30,	0},

	{"", "sb-disk",			600,	0},

	{"", "sb-volume",		0,	10},

	{"", "sb-bright",	    0,	11},

	{"", "sb-cal",		    0,	0},
	
	{"", "sb-time",		    60,	0},
	
    {"", "sb-battery",	    30,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 5;
