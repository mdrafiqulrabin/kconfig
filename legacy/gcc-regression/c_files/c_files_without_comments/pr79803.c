 
 
 

#include <setjmp.h>

extern void abort (void);

jmp_buf buf;

void raise0(void)
{
  __builtin_longjmp (buf, 1);
}

int execute(int cmd)  
{
  int last = 0;

  if (__builtin_setjmp (buf) == 0)
    while (1)
      {
	last = 1;
	raise0 ();
      }

  if (last == 0)
    return 0;
  else
    return cmd;
}

int execute2(int cmd, int cmd2)
{
  int last = 0;

  if (__builtin_setjmp (buf) == 0)
    while (1)
      {
	last = 1;
	raise0 ();
      }

  if (last == 0)
    return 0;
  else
    return cmd;
}


int main(void)
{
  if (execute (1) == 0)
    abort ();

  if (execute2 (1, 2) == 0)
    abort ();

  return 0;
}

