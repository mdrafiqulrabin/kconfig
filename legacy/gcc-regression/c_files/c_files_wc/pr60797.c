 
 

extern int foo __attribute__((alias("bar")));  
int main()
{
  return 0;
}

