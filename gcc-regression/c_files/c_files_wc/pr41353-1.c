 
 
 

int vari __attribute__((used)) = 17, varj;

__attribute__((noinline)) int
f1 (void)
{
   
  int vari1 = 2 * vari;  
  int vari2 = 3 * vari;  
  int vari3 = 2 * vari;  
  int vari4 = 3 * vari;  
  int vari5 = 4 * vari;  
  int vari6 = 5 * vari;  
  return varj;
}

__attribute__((noinline)) int
f2 (int i, int j)
{
  j += i;
   
   
  int i1 = 2 * i;  
  int i2 = 3 * i;  
  return j;
}

__attribute__((noinline)) int
f3 (int i)
{
  asm volatile ("" : "+r" (i));
   
  int i1 = 2 * i;  
  int i2 = 2 * i;  
  int i3 = 3 * i;  
  return i;
}

int (*volatile fnp1) (void) = f1;
int (*volatile fnp2) (int, int) = f2;
int (*volatile fnp3) (int) = f3;

int
main (int argc, char *argv[])
{
  asm volatile ("" : : "r" (&fnp1) : "memory");
  asm volatile ("" : : "r" (&fnp2) : "memory");
  asm volatile ("" : : "r" (&fnp3) : "memory");
  fnp1 ();
  fnp2 (37, 28);
  fnp3 (12);
  return 0;
}

