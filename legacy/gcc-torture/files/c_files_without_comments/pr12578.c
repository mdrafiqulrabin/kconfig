 

void trivial_regexp_p(int *s, int len)
{
    while (--len) {
	switch (*s++) {
	    case '\\':
		switch (*s++) {
		    case '|':
			;
		}
	}
    }
}


