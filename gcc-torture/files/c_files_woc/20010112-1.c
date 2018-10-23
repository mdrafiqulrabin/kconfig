 

#ifdef __i386__
#define REGISTER asm ("eax")
#elif defined (__arm__)
#define REGISTER asm ("r0")
#else
 
#define REGISTER
#endif

void f() {
  register int i REGISTER = 3;
}

