 
 
 
 

void
foo (unsigned long long *p)
{
  unsigned long long tmp;
  tmp = *p;
  tmp = (tmp >> 32) | (tmp << 32);
  tmp = (((tmp & 0xff00ff00ff00ff00ULL) >> 8)
	 | ((tmp & 71777214294589695ULL) << 8));
  *p = (((tmp & 0xffff0000ffff0000ULL) >> 16)
	| ((tmp & 281470681808895ULL) << 16));
}

 

