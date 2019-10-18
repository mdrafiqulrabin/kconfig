 
 
 
 
 
 

int b, f, g;
float e;
unsigned long d;

void
foo (int *a)
{
  for (g = 0; g < 32; g++)
    if (f)
      {
        e = d;
        __builtin_memcpy (&b, &e, sizeof (float));
        b = *a;
      }
}

