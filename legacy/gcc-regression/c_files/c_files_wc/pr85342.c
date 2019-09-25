 
 
 

typedef unsigned char U __attribute__((vector_size (64)));
typedef unsigned int V __attribute__((vector_size (64)));
typedef unsigned __int128 W __attribute__((vector_size (64)));
int i;
V g, h, z, k, l, m;
U j;

W
bar (W o, W p)
{
  U q;
  o |= (W){q[0]} >= o;
  o += 1 < o;
  j |= (U){} == j;
  return i + (W)q + (W)g + (W)h + (W)z + o + (W)j + (W)k + (W)l + (W)m + p;
}

W
foo (U u)
{
  U q;
  W r = bar ((W)(U){0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ~0}, (W)q);
  u += (U)bar ((W){~0}, r);
  return (W)u;
}

