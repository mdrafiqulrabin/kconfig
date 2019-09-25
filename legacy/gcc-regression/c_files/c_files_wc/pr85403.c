 
 
 

__attribute__((target_clones("avx","arch=slm","arch=core-avx2","default")))
int
foo ()
{
  return -2;
}

