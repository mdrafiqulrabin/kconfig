 
 
 

extern void abort (void);
int a[1024];
volatile short int v;

__attribute__((noinline,noclone,used)) int
foo (int i, int j)
{
  int b = i;		 
  int c = i + 4;	 
  int d = a[i];		 
  int e = a[i + 6];	 
  ++v;
  return ++j;
}

int
main (void)
{
  int l;
  asm ("" : "=r" (l) : "0" (7));
  a[7] = 112;
  a[7 + 6] = 142;
  if (foo (l, 7) != 8)
    abort ();
  return l - 7;
}

