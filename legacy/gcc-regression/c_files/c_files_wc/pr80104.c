 
 
 

float
a (_Complex float b)
{
  return *&b;
}

float
c (_Complex float b)
{
  return (&b)[0];
}

