 
 

extern void foo (int);
extern void bar (int, char *);

#define F __FILE__  
#define T __TIME__  
#define D __DATE__  
#define L __LINE__  

#define F2 "foo"  
#define T2 "foo"  
#define D2 "foo"  
#define L2 42  

void
f (void)
{
  foo (__FILE__);  
  foo (__BASE_FILE__);  
  foo (__TIME__);  
  foo (__DATE__);  
  foo (__TIMESTAMP__);  
  bar (1, __LINE__);  
  bar (__COUNTER__, __COUNTER__);  

  foo (F);  
  foo (T);  
  foo (D);  
  bar (1, L);  

  foo (F2);  
  foo (T2);  
  foo (D2);  
  bar (1, L2);  
}

