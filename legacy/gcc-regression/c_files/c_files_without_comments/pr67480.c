 
 

void
foo(const char *in, char *out, unsigned n)
{
  unsigned i;
  for (i = 0; i < n; i++)
    out[i] &= in[i];
}

