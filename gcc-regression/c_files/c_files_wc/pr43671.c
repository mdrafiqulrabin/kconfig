 
 
 

extern void abort ();

int main ()
{
  struct {
    char ca[16];
  } s;
  int i;

  for (i = 0; i < 16; i++)
    {
      s.ca[i] = 5;
    }


  for (i = 0; i < 16; i++)
    {
      if (s.ca[i] != 5)
        abort ();
    }

  return 0;
}

