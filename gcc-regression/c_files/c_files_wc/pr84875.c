 
 
 
 
 

static long *a[100];
static int b[100];
long *c;
int d;
void foo (long *);

void
bar ()
{
  long *g = c;
  g--;
  d = *g;
  if (d)
    if (b[d] < 8)
      {
	*(void **)g = a[d];
	a[d] = g;
	b[d]++;
	return;
      }
  foo (g);
}

