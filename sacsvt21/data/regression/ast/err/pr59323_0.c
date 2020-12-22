 
 
 

extern void bar(void);

int main(int argc, char **argv)
{
  int i;

  if (argc == 1) {
    enum { X };

    bar();

    {
      enum { X };

      asm goto ("" : : : : lab);
lab:
      ;
    }
  }

  {
    enum { X };

    int foo(void)
    {
      return argv[0][0];
    }

    i = foo();
  }

  return i;
}

