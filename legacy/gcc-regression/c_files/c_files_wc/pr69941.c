 

#if __SIZEOF_INT__ < 4
__extension__ typedef __INT32_TYPE__ int32_t;
#else
typedef int int32_t;
#endif
 
int a = 0;
int b = 0;
int c = 0;
int32_t e = 0;
int f = 0;
int32_t *g = &e;
 
int fn1() { return b ? a : b; }
 
int main() {
  int h = fn1() <= 0x8000000000000000ULL;  
 
  int k = f;  
 
  long i = h ? k : k / h;  
 
  long l = (unsigned short)(i - 0x1800);  
 
  i = l ? l : c;  
 
  *g = i;  
 
  unsigned char result = e >> 9;  

  if ((int)result != 0x74)
    __builtin_abort ();
  return 0;
}

