 
 
 

__attribute__ ((naked))
void __data_abort(void)
{
  long foo;  
  long* bar = &foo;
}

