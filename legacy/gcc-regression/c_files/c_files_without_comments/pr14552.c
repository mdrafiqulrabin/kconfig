 
 

typedef short mmxw  __attribute__ ((vector_size (8)));
typedef int   mmxdw __attribute__ ((vector_size (8)));

mmxdw dw;
mmxw w;

void test()
{
  w+=w;
  dw= (mmxdw)w;
}

 

