 

 
 

int boo()
{
  struct {
    unsigned char pad[4096];
    unsigned long bar;
  } *foo;
  asm volatile( "" : "=m" (*(unsigned long long*)(foo->bar))
		: "a" (&foo->bar));
}

