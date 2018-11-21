 
 
 

int varh;
int vari __attribute__((used)) = 17, varj;

__attribute__((noinline)) int
f1 (void)
{
  int vari1 = 2 * vari;  
  int vari2 = 3 * vari;  
  return varj;
}

int (*volatile fnp1) (void) = f1;

int
main (int argc, char *argv[])
{
  asm volatile ("" : : "r" (&fnp1) : "memory");
  fnp1 ();
  return 0;
}

