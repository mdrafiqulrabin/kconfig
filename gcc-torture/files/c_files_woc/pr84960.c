 
 

void
foo (unsigned int a, float b, void *c)
{
lab:
  if ((b - (a %= 0) < 1U) * -1U)
    ;
  else
    {
      unsigned int f = a;
      __builtin_unreachable ();
      c = &&lab;
    }
  goto *c;
}

