 
 
 
 

void
write_reverse (unsigned long *addr, unsigned long val)
{
  unsigned long reverse = __builtin_bswap64 (val);
  __atomic_store_n (addr, reverse, __ATOMIC_RELAXED);
}

