 
 
 

#define M (sizeof (int) * __CHAR_BIT__)

int
fn1 (int i)
{
  return i == (-1 << 8);  
}

int
fn2 (int i)
{
  return i == (1 << M);  
}

int
fn3 (int i)
{
  return i == 10 << (M - 1);  
}

int
fn4 (int i)
{
  return i == 1 << -1;  
}

int
fn5 (int i)
{
  return i == 1 >> M;  
}

int
fn6 (int i)
{
  return i == 1 >> -1;  
}

