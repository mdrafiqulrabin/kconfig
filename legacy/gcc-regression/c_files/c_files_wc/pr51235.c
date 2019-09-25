 
 

void *foo (int count, void **list)
{
  void *minaddr = list[0];
  int i;

  for (i = 1; i < count; i++)
    {
      void *addr = list[i];
      if (addr < minaddr)
	minaddr = addr;
    }

  return minaddr;
}

