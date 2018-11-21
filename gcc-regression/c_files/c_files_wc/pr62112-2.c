 
 

char*g;
char* f(){
  char*p=__builtin_malloc(42);
  __builtin_memset(p,3,33);
  __builtin_memset(p,7,10);
  return p;
}
void h(){
  char*p=__builtin_malloc(42);
  g=__builtin_memset(p,3,10);
}

 

