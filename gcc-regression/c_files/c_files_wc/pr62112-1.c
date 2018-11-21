 
 

void f(){
  char*p=__builtin_malloc(42);
  __builtin_memset(p,3,10);
  __builtin_memset(p,7,33);
}
char*g;
void h(){
  char*p=__builtin_malloc(42);
  g=__builtin_memset(p,3,10);
  __builtin_free(p);
}
char*i(){
  char*p=__builtin_malloc(42);
  __builtin_memset(p,3,10);
  __builtin_memset(p,7,33);
  return p;
}

 

