 
 
 
 

__attribute__((target_clones ("avx", "default")))
int
foo (int x)	 
{		 
  __label__ lab;
  __attribute__((noinline)) void bar () { goto lab; }
  if (x == 5)
    bar ();
  x++;
lab:;
  return x;
}

