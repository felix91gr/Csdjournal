#import <systemd/sd-journal.h>

int csd_journal_print(int priority, const char *file, const char *line, const char *func, const char *message) {
    return sd_journal_print_with_location(priority, file, line, func, message);
	// return sd_journal_print(priority, message);
}
