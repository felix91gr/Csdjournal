int sdjournal_anchor() {
	return 0;
}

int csd_journal_print(int priority, const char *message) {
	return sd_journal_print(priority, message);
}