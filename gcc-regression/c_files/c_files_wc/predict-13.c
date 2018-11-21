 
 

int main(int argc, char **argv)
{
  switch (argc)
    {
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      __builtin_abort();
    case 4:
      __builtin_abort();
    default:
      return 5;
    }

  return 10;
}

 
 

