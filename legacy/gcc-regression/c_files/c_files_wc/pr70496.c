 
 
 
 

int i;
void
main (void)
{
  __asm__ volatile (".arm");
  i = 0;
  __asm__ volatile ("\n cbz r0, 2f\n2:");
}

