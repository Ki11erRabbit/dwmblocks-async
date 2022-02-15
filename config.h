#define CMDLENGTH 60
#define DELIMITER " | "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	/*Command*/             /*Update Interval*/     /*Update Signal*/
	//BLOCK("sb-mail",    1800, 17),
	//BLOCK("sb-music",   0,    18),
	//BLOCK("sb-disk",    1800, 19),
	//BLOCK("sb-memory",  10,   20),
	//BLOCK("sb-loadavg", 5,    21),
	//BLOCK("sb-mic",     0,    26),
	//BLOCK("sb-record",  0,    27),
	BLOCK("~/.dwm/blocks-scripts/weather", 18000, 5),
	BLOCK("~/.dwm/blocks-scripts/volume",  0,    10),
	BLOCK("free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 5, 0),
	BLOCK("~/.dwm/blocks-scripts/clock", 5, 12),
	//BLOCK("sb-battery", 5,    23),
	//BLOCK("sb-date",    1,    24)
};
