 
 
 

enum e { A };
struct s { int a; };

enum e
fn1 (void)
{
  return 0;  
}

int
fn2 (struct s s)
{
  return s;  
}

void
fn3 (void)
{
  return 3;  
}

int
fn4 (int *a)
{
  return a;  
}

int *
fn5 (int a)
{
  return a;  
}

unsigned int *
fn6 (int *i)
{
  return i;  
}

void *
fn7 (void (*fp) (void))
{
  return fp;  
}

