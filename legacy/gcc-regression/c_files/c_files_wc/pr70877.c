 
 

int foo(int);

typedef struct {
  double d;
  int a;
} str_t;

void bar(double d, int i, str_t s)
{
  d = ((double (*) (int)) foo) (i);  
}

