 
 
 

void bar (char *);

void
foo (void)
{
  char buf[4096];
  __builtin_memcpy (buf, (void *) 0x8000, 4096);
  bar (buf);
}

