 
 
 

extern void link_error (void);

int
foo (int x)
{
  if (__builtin_ia32_tzcnt_u16 (16) != 4
      || __builtin_ia32_tzcnt_u16 (0) != 16
      || __builtin_ia32_lzcnt_u16 (0x1ff) != 7
      || __builtin_ia32_lzcnt_u16 (0) != 16
      || __builtin_ia32_tzcnt_u32 (8) != 3
      || __builtin_ia32_tzcnt_u32 (0) != 32
      || __builtin_ia32_lzcnt_u32 (0x3fffffff) != 2
      || __builtin_ia32_lzcnt_u32 (0) != 32
#ifdef __x86_64__
      || __builtin_ia32_tzcnt_u64 (4) != 2
      || __builtin_ia32_tzcnt_u64 (0) != 64
      || __builtin_ia32_lzcnt_u64 (0x1fffffff) != 35
      || __builtin_ia32_lzcnt_u64 (0) != 64
#endif
     )
    link_error ();
  x += 2;
  if (x == 0)
    return 5;
  return __builtin_ia32_tzcnt_u32 (x)
         + __builtin_ia32_lzcnt_u32 (x)
#ifdef __x86_64__
	 + __builtin_ia32_tzcnt_u64 (x)
	 + __builtin_ia32_lzcnt_u64 (x)
#endif
	 ;
}

 
 
 
 
 

