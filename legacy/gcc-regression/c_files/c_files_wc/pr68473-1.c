 
 

extern long double fminl (long double __x, long double __y);

#define TEST_EQ(FUNC) do { \
  if ((long)FUNC##l(xl,xl) != (long)xl) \
    return; \
  } while (0)

void
foo (long double xl)
{
  TEST_EQ (fmin);  
}

 

 

