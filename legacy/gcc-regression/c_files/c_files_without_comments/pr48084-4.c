 
 

void
_mm_clflush (void const *__A)
{
  __builtin_ia32_clflush (__A);
}

