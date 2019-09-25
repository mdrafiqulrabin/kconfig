 
 
 

void bar ();

void
foo (int x)
{
  struct S { char a[x]; } v;
  bar (v);
}

