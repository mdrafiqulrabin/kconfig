 
 
 

struct S
{
  unsigned char a : 1;
  unsigned char b : 1;
  unsigned char c : 1;
} s;

int
foo (struct S x)
{
  return x.a && x.b && x.c;
}

 
 

