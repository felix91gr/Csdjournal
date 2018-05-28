#ifndef SDJournalHelpers_h
#define SDJournalHelpers_h

#include <systemd/sd-journal.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern inline
int csd_journal_print(int priority, const char *file, const char *line, const char *func, const char *message) {
	int lenFileStr = strlen(file);
	int lenLineStr = strlen(line);

	char prefixFile[] = "CODE_FILE=";
	char prefixLine[] = "CODE_LINE=";

	// Total length: size of both, plus 1 more for the null terminator character.
	char *fileStr = malloc(sizeof(char) * (lenFileStr + strlen(prefixFile) + 1));
	char *lineStr = malloc(sizeof(char) * (lenLineStr + strlen(prefixLine) + 1));

	strcpy (fileStr, prefixFile);
	strcat (fileStr, file);

	strcpy (lineStr, prefixLine);
	strcat (lineStr, line);

	int res = sd_journal_print_with_location(priority, fileStr, lineStr, func, message);

	free (fileStr);
	free (lineStr);

	return res;
}

#endif /* SDJournalHelpers_h */
