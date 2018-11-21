 
 

 
__attribute__((always_inline,target("sse4.2")))
__inline int callee ()  
{
  return 0;
}

__attribute__((target("sse")))
static __inline int caller ()
{
  return callee();  
}

int main ()
{
  return caller();
}

