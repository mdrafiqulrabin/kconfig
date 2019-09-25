 
 
 

struct S
{
  unsigned char a : 1;
  unsigned char b : 1;
  unsigned char c : 1;
  unsigned int d : 6;
  unsigned int e : 14;
  unsigned int f : 6;
  unsigned char g : 1;
  unsigned char h : 1;
  unsigned char i : 1;
} s;

int
foo (struct S x)
{
  return x.a && x.i && x.b && x.h && x.c && x.g && x.e == 131;
}

 
 

