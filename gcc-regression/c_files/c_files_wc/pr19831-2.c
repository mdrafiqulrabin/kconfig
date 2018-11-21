 
 

void test1(void)
{
  int *p = __builtin_malloc (sizeof (int) * 4);
  *p++ = 4;
  __builtin_free (p);
}

 

 
 

