 
 

void
foo (void)
{
  #pragma omp target
  #pragma omp teams
  {
    int i;
    for (i = 0; i < 10; i++)
      ;
  }
}

