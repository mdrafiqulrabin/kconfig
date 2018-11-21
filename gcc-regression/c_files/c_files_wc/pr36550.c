 
 
void bail(void) __attribute__((noreturn));
unsigned once(void);
int pr(char**argv)
{
	char *bug;
	unsigned check = once();
	if (check) {
		if (*argv)
			bug = *++argv;
	} else {
		bug = *argv++;
		if (!*argv)
			bail();
	}
	 
	if (check) {
		if (!*argv)
			return 0;
	}
	 
	return *bug != 'X';
}


