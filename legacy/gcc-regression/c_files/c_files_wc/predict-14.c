 
 

void test(void) __attribute__ ((noreturn));

int main(int argc, char **argv)
{
  switch (argc)
    {
    case 1:
      test();
    case 4:
      test();
    default:
      test();
    }

  return 10;
}

 

