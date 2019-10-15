 
 
 

extern __SIZE_TYPE__ strlen (const char *);
extern void *malloc (__SIZE_TYPE__);

register int regvar asm("%ecx");

char *
do_copy (char *str)
{
  return malloc (strlen (str) + 1);
}

 

