 
 

int a;

int main()
{
  int i;
  for (i = 0; i < 1; ++i)
    __transaction_atomic { ++a; }
  return 0;
}

