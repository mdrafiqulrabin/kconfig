typedef struct {
	int knock_on_wood;		 
	int f1;
} FOO;

typedef struct {
	FOO *b1;
} BAR;

Nase ()
{
	int i, j;
	FOO *foop;
	BAR *barp;

	for (i = 0; i < 2; i++) {
		foop = &barp->b1[i];
		for (j = 0; j < foop->f1; j++) {
			 ;		 
		}
	}
}

