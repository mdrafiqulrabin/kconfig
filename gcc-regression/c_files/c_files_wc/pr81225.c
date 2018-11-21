 
 
 

long a[24];
float b[4], c[24];
int d;

void
foo ()
{
  for (d = 0; d < 24; d++)
    c[d] = (float) d ? : b[a[d]];
}

