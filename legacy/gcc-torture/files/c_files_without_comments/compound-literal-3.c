 

int f(_Complex float *);
int g(_Complex float x)
{
  return f(&(_Complex float){x+1}) + f(&x);
}

