#include <systemd/sd-journal.h>
#include <stdio.h>

extern inline
int csd_journal_print(int priority, const char *file, const char *line, const char *func, const char *message) {
    // return sd_journal_print_with_location(priority, file, line, func, message);
	printf("I'm sending %s to the system log!\n", message);
	return sd_journal_print(priority, message);
	printf("Log has been sent!\n");
}
