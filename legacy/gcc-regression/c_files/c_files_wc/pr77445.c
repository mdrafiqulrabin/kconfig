 
 

static int a;
static int b;
void test2 ();
void
test ()
{
  b = 7;
}

void
main (int argc)
{
  if (argc)
    {
      a = 7;
      test ();
    }
  else
    a = 0;
  if (a)
    test2 ();
  if (b)
    test2 ();
}
 
 

