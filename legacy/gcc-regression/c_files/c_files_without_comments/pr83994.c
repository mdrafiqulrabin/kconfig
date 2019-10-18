 
 
 

void f1 (char *);

__attribute__ ((regparm (3)))
int
f2 (int arg1, int arg2, int arg3)
{
  char buf[16384];
  f1 (buf);
  f1 (buf);
  return 0;
}


