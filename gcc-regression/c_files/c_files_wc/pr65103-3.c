 
 
 
 

static int *data[100];

void test (long a, long b)
{
  do
    {
      if( a < b )
        {
	  data[a] = data[b];
	  a++;
        }
    }
  while (a <= b);
}

