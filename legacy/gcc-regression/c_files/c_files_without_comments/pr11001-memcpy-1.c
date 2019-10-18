 
 
 

extern void *memcpy (void *, const void *, __SIZE_TYPE__);

register int regvar asm("%esi");

int foo[10];
int bar[10];

char baz[15];
char quux[15];

void
do_copy ()
{
  memcpy (foo, bar, sizeof foo);
  memcpy (baz, quux, sizeof baz);
}

 
 

