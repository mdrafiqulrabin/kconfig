 
 

void bar (int *);
void foo (char *, int);

void
foo3 ()
{
  const int kIterations = 10;
  int results[kIterations];
  int i;
  bar (results);
  for (i = 0; i < kIterations; i++)
    foo ("%d ", results[i]);
}

 

