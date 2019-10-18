 
 
 

#ifndef __cplusplus
#define bool _Bool
#endif

enum E { E0, E1, E2 };
enum E e[2];
bool *b;

int
foo (int i)
{
  return e[i];
}

int
bar (int i)
{
  return b[i];
}

