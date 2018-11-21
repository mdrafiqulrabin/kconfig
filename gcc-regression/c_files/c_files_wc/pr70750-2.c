 
 

int
f (int (**p) (void))
{
  return -p[1]();
}

 
 

