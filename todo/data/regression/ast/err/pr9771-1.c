 
 
 
 

extern void abort(void);
extern void exit(int);

register long *B asm ("ebp");

long x = 10;
long y = 20;

void bar(void)
{
  B = &y;
}

void foo()
{
  long *adr = B;
  long save = *adr;

  *adr = 123;

  bar();

  *adr = save;
}

 
void test(void) __attribute__((noinline));
void test(void)
{
  B = &x;

  foo();

  if (x != 10 || y != 20)
    abort();

   
   
  exit(0);
}

 
#define ASMNAME(cname)  ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define ASMNAME2(prefix, cname) STRING (prefix) cname
#define STRING(x)    #x
int real_main() __asm (ASMNAME ("main"));

int real_main()
{
  test();
  return 0;

}

