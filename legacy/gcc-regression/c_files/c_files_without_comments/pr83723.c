 
 
 
 
 

int foo (void);
float bar (float);
int *v;

void
baz (void)
{
  float a = bar (0.0);
  bar (a);
  if (v)
    bar (1.0);
  if (a < 1.0)
    a = foo () / a;
}

