 
 

typedef int __m256i __attribute__ ((__vector_size__ (32)));

__m256i bar (void);
void foo (void)
{
  unsigned int i = 0;
  bar ();
  __builtin_ia32_vzeroupper ();
  while (++i);
}

 

