 
 
 
 

void *bar (void *);

void
foo (int c)
{
  unsigned char bf[65400];
  unsigned char *p2 = bar (bf);
  unsigned char *p3 = bar (bf);
  for (; *p2; p2++, c++)
    {
      if (c)
	{
	  short of = p2 - bf - 6;
	  unsigned ofu = of;
	  __builtin_memcpy (p3, &ofu, sizeof (ofu));
	}
    }
}

