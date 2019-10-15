 
 

int
f (int a, struct { int b[a]; } c)  
{
  return c.b[0];
}

