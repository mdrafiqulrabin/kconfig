 
 

#include <stdio.h>

int proc_keys_show(long expiry, long now)
{
	unsigned long timo;
	char xbuf[4];

	if (now < expiry) {
		timo = expiry - now;
		if (timo < 60)
			sprintf(xbuf, "%lus", timo);
	}

	return 0;
}



