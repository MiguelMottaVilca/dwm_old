//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g" ,	30,		0},
	{ "  Miguel | ",    "brightness"                           	 ,	 2,                0 },
	{ "",    "volume"						 ,       2,                0 },
        { "",    "battery"   						 ,      60,                0 },
	{ " ", "date '+%b %d (%a) %I:%M:%S %p'"				 ,	 1,		   0 },
};

static char delim[] = " | ";
static unsigned int delimLen = 5;
