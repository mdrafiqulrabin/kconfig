 
 

typedef struct { long p; } pt;

inline pt f (pt _p)
{
  long p = _p.p;

  return (pt) { (p) };
}

static int mmap_mem (void)
{
  pt p;
  p = f (p);

  return 0;
}

