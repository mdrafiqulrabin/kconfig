 
 
 

extern int x;

 __attribute__ ((visibility ("hidden")))
void
test (int i)
{
  x = i;
}

void
bar (int i)
{
  test (i);
}

