#ifndef SDJournalHelpers_h
#define SDJournalHelpers_h

#include <systemd/sd-journal.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern inline
int csd_journal_print(int priority, const char *file, const char *line, const char *func, const char *message);

#endif /* SDJournalHelpers_h */
