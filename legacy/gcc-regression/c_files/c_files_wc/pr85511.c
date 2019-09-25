 
 
 

unsigned int
foo (void)
{
  return __builtin_ia32_readeflags_u32 ();	 
}

void
bar (unsigned int x)
{
  __builtin_ia32_writeeflags_u32 (x);		 
}

