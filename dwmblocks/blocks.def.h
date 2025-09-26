// Modify this file to change what commands output to your statusbar,
// then recompile using the make command.

static const Block blocks[] = {
    /*Icon*/   /*Command*/                                /*Update Interval*/ /*Update Signal*/
    {" ",     "iwgetid -r",                              10,                 0},  // Wi-Fi SSID
    {"🔊 ",     "pamixer --get-volume-human",              5,                  0},  // Volume (needs pamixer)
    {"🔋 ",     "acpi -b | cut -d, -f2 | sed 's/^ //'",    30,                 0},  // Battery percentage
    {"🧠 ",     "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 30, 0},  // Memory usage
    {"🕒 ",     "date '+%b %d (%a) %I:%M%p'",              5,                  0},  // Date and time
};

// Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
