 
 
 

int __setjmp (void **);
void *buf[64];

void
foo (void)
{
  __setjmp (buf);
  for (;;)
    ;
}

