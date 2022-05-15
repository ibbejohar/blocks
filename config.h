#define CMDLENGTH 45
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("memory",  10,    0),
	BLOCK("volume",  0,    5),
	BLOCK("date +%e/%m'|'%H:%M",    1,    0),
};
