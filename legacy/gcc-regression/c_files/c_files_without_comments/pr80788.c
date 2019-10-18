 
 
 

void
foo (signed char x)
{
  signed char a = (x + 1) ^ 128;
  x &= !!a;
  if (x != 0)
    for (;;)
      ;
}

