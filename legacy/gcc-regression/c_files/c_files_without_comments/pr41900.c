 
 
 

int main ()
{
  volatile unsigned code = 0xc3;

  ((void (*)(void)) &code) ();
  return 0;
}

 

