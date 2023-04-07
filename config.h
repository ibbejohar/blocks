#define CMDLENGTH 45
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("date +%e/%m'|'%H:%M;",    1,    0),
	BLOCK("mpd-blocks",  1,    0),
	BLOCK("memory",  10,    0),
	BLOCK("volume",  0,    5),
};
