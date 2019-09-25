 
 
 

int a, b;
void foo (int, ...);

void
bar (void)
{
  if (a || 1 == b)
    foo (1);
  else
    0;
  foo (1, 0);
}

