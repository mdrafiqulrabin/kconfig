 
 
 

union U
{
  __UINTPTR_TYPE__ m;
  float d;
} u;

int
foo (void)
{
  union U v = {
    (__UINTPTR_TYPE__)&u
  };
  return u.d == v.d;
}

