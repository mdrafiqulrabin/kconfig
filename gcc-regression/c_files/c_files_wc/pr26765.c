 

 
 

__thread int *a = 0;

NOMIPS16 void foo (void)
{
  extern int *b;
  b = (int *) ((*a));
}

