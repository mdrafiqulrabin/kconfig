 
 
 

__attribute__((__simd__)) float expf (float);

void
foo (float *a, int x)
{
  for (; x; x++)
    a[x] = expf (x);
}

