 
 
 

int i;
unsigned u;
volatile int *e;

#define E (i ? *e : 0)

 

 
int
fn1 (void)
{
  int r = 0;
  r += (short) (E & ~u | i & u);
  r += -(short) (E & ~u | i & u);
  r += (short) -(E & ~u | i & u);
  return r;
}

 
double
fn2 (void)
{
  double r;
  r = __builtin_sqrt (E) < __builtin_inf ();
  return r;
}

 
double
fn3 (void)
{
  double r;
  r = __builtin_sqrt (E) < 1.3;
  return r;
}

 
double
fn4 (double y, double x)
{
  return __builtin_copysign (E, y) * __builtin_copysign (E, y);
}

 
int
fn5 (void)
{
  return E <= __builtin_inf ();
}

 
int
fn6 (void)
{
  return (i & ~E) - (i & E);
}

 
int
fn7 (void)
{
  return (i & E) - (i & ~E);
}

 
int
fn8 (void)
{
  return E + (E & 1);
}

 
int
fn9 (void)
{
  return E <= E | E >= E;
}

 
int
fn10 (void)
{
  return (i & ~E) - (i & E);
}

 
int
fn11 (void)
{
  return __builtin_abs (E) * __builtin_abs (E);
}

 
int
fn12 (void)
{
  return (E | 11) & 12;
}

 
int
fn13 (const char *s)
{
  return s[E] != '\0' && s[E] != '/';
}

 
int
fn14 (void)
{
  return (!!i ? : (u *= E / 0)) >= (u = E);
}

 
_Complex int
fn15 (_Complex volatile int *z)
{
  return *z * ~*z;
}

