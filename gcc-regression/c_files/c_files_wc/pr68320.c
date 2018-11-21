 
 
 

void
fn1 (void)
{
  for (typedef int T;;)  
    if (1)
      ;
  T x;  
}

void
fn2 (int i)
{
  for (typedef int T;;)  
    if (1)
      i = 5;
  T x;  
}

void
fn3 (void)
{
  for (typedef int T;;)  
    if (1)
      {
      }
  T *x;  
}

void
fn4 (void)
{
  for (typedef int T;;)  
    if (1)
      ;
  T, T;  
}

void
fn5 (void)
{
  for (typedef int T;;)  
    if (1)
      ;
  T = 10;  
}

void
fn6 (void)
{
  for (typedef int T;;)  
    if (1)
      ;
  T[0];  
}

void
fn7 (void)
{
  for (typedef int T;;)  
    if (1)
      ;
  T ();  
}

