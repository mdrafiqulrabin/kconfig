 
 
 
 

typedef struct 
{
  char	a;
  char	b;
  char	c;
  char	d;

  short e;
  short f;

  int g;
  int h;
} X;

void
testfunc_00 (X* x)
{
  x->g = x->b | x->c;
  x->h = x->e | x->f;
  x->d = x->g;
  x->f = x->h;
}

int testfunc_01 (X* x)
{
  return x->b | x->e | x->g;
}

