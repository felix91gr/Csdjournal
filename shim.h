#include <systemd/sd-journal.h>
#include <stdio.h>
#include <string.h>

extern inline
int csd_journal_print(int priority, const char *file, const char *line, const char *func, const char *message) {
	char fileStr[60];
	char lineStr[60];
	
	strcpy (fileStr,"CODE_FILE=");
	strncat (fileStr, file, 20);

	strcpy (lineStr,"CODE_LINE=");
	strncat (lineStr, line, 20);

    int res = sd_journal_print_with_location(priority, fileStr, lineStr, func, message);

	return res;
}
