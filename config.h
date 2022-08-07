#define CMDLENGTH 45
#define DELIMITER "  "
#define LEADING_DELIMITER " "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	/*Command*/             /*Update Interval*/     /*Update Signal*/
	BLOCK("~/.dwm/blocks-scripts/mailbox", 900, 17),
	BLOCK("~/.dwm/blocks-scripts/music",   0,    18),
	//BLOCK("sb-disk",    1800, 19),
	//BLOCK("sb-memory",  10,   20),
	//BLOCK("sb-loadavg", 5,    21),
	//BLOCK("sb-mic",     0,    26),
	//BLOCK("sb-record",  0,    27),
//	BLOCK("~/.dwm/blocks-scripts/change-keyboard", 0, 19),
	BLOCK("~/.dwm/blocks-scripts/kernel", 0, 21),
	BLOCK("~/.dwm/blocks-scripts/keep-awake", 0, 20),
	BLOCK("~/.dwm/blocks-scripts/keep-awake-control", 0, 19),
	BLOCK("~/.dwm/blocks-scripts/wallpaper-blacklist", 300, 16),
	BLOCK("~/.dwm/blocks-scripts/stocks", 600, 14),
	BLOCK("~/.dwm/blocks-scripts/weather", 1800, 11),
	BLOCK("~/.dwm/blocks-scripts/internet", 5, 4),
	BLOCK("~/.dwm/blocks-scripts/volume",  0,    10),
	//BLOCK("free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 5, 0),
	BLOCK("~/.dwm/blocks-scripts/micstatus",  0,    13),
	BLOCK("~/.dwm/blocks-scripts/recording",  0,    9),
//	BLOCK("~/.dwm/blocks-scripts/battery",  60,   15),
	BLOCK("~/.dwm/blocks-scripts/cpu-temp",  5,    0),
	BLOCK("~/.dwm/blocks-scripts/cpu-util",  5,    0),
	BLOCK("~/.dwm/blocks-scripts/memory",  5,    0),
	BLOCK("~/.dwm/blocks-scripts/clockalt", 5, 12),
	//BLOCK("sb-battery", 5,    23),
	//BLOCK("sb-date",    1,    24)
};
