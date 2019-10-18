 
 

void
_mm_monitor (void const * __P, unsigned int __E, unsigned int __H)
{
   __builtin_ia32_monitor (__P, __E, __H);
}

