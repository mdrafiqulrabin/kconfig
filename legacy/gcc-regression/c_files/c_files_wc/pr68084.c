 
 

int x;

void foo (void)
{
  char r;

  asm ("" : "=@ccae"(r));

  if (!r)
    x = 0;
}

 

