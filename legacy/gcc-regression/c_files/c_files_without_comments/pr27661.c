 

 
 

extern int memcmp (const void *s1, const void *s2, unsigned long n);
extern int printf (__const char *__restrict __format, ...);

struct test
{
  char tmp[4096];
  char msgtype[2];
};

void test (struct test *testtb)
{
  if (testtb)
    printf ("a");

  if (memcmp(testtb->msgtype, "a", 2))
    printf ("a");

  printf ("b");
}


