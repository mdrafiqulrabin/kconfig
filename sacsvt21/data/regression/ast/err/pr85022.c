 

extern struct B b;

void
foo ()
{
  __asm ("" : "+m" (b));
}

