 
 
 

extern void foo (int p[2][]);  
extern void foo_i (int, int);
extern void foo_u (unsigned int);
extern void foo_f (int, float);
extern void foo_ll (long long);
extern void foo_cd (int, int, __complex__ double);
extern signed char sc;
extern int i;
extern unsigned int u;
extern float f;
extern double d;
extern __complex__ double cd;

void
fn ()
{
  int p[1][1];
  foo (p);  
  foo_i (1, f);  
  foo_i (1, cd);  
  foo_cd (1, 2, f);  
  foo_f (9, i);  
  foo_cd (2, 2, i);  
  foo_f (2, cd);  
  foo_f (2, d);  
  foo_ll (sc);  
  foo_u (i);  
  foo_i (1, u);  
}

