 
 
 

void
fn (void)
{
  int a[0];
  __builtin_printf("%d\n", &a);  
  __builtin_printf("%i\n", &a);  

  __builtin_printf("%o\n", &a);  
  __builtin_printf("%u\n", &a);  
  __builtin_printf("%x\n", &a);  
  __builtin_printf("%X\n", &a);  
}

