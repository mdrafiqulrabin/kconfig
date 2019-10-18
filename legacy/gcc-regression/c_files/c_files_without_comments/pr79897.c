 
 
 

enum E
{
  A = 0,
  B = ~0U + 1LL
} x = A;

int
main ()
{
  return x != A;
}

