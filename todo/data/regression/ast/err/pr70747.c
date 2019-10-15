 
 

int *a, b;

void fn1 ()
{
  a = __builtin_malloc (sizeof(int)*2); 
  b = &a[1] == (0, 0);  
}

