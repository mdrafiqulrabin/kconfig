 
 
 
 

static inline int
readint0 (int* x)
{
  return *x;
}

int
test0 (int* x)
{
  return readint0 (x);
}

inline int
readint1 (int* x)
{
  return *x;
}

int
test1 (int* x)
{
  return readint1 (x);
}

static int
readint2 (int* x)
{
  return *x;
}

int
test2 (int* x)
{
  return readint2 (x);
}

