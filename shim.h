#include <systemd/sd-journal.h>
#include <stdio.h>

extern inline
int csd_journal_print(int priority, const char *file, const char *line, const char *func, const char *message) {
	printf("I'm sending %s to the system log, from %s, at %s : %s\n", message, file, func, line);
    	
    int i = 0;
    int res;

    for(i = 0; i < 30; i++) {
    	res = sd_journal_print_with_location(i, file, line, func, message);
    	printf("Got %i out of the system call!\n", res);
    }

	printf("Log has been sent!\n");

	return res;
}
