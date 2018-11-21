 

 
 

void
foo (void const * P, unsigned int E, unsigned int H)
{
  __builtin_ia32_monitor (P, E, H);
}

