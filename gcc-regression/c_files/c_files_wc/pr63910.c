 
 
 

extern void bar (float *c);

void
foo (void)
{
  float c[1024] = { };
  bar (c);
}

