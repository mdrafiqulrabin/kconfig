 
 
 

extern void *memset (void *, int, __SIZE_TYPE__);

register int regvar asm("%ecx");

int foo[10];
int bar[10];

char baz[15];
char quux[15];

void
do_copy ()
{
  memset (foo, 0, sizeof foo);
  memset (baz, 0, sizeof baz);
}

 
 

