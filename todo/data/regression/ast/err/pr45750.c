 
 

struct S
{
  int i;
};

int invalid[] = 0;  

void foo (void)
{
  if (((struct S *)undeclared)->i);  
   
}


