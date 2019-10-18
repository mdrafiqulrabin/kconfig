 

void sink (void*);

void foo (void)
{
  enum {
    Align = 32,
    Size = 123
  };

  void *p = __builtin_aligned_alloc (Align, Size);
  unsigned n = __builtin_object_size (p, 0);

  if (n != Size)
    __builtin_abort ();

  __builtin___memset_chk (p, 0, Size, n);

  sink (p);
}

 

