 
 

 

typedef void (*test_fptr_t) (void);
void
test_f (void)
{
}
test_fptr_t test_fptr = test_f;

struct test2_s
{
  int f;
};

register struct test2_s *g __asm__("x28");

void
do_something ()
{
  test_fptr ();
  struct test2_s *p1 = 0;
  *p1 = *g;
}

