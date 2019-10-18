 
 

extern int dbs[100];
void f (int *);
int nscd_init (void)
{
  f (dbs);
  return 0;
}

