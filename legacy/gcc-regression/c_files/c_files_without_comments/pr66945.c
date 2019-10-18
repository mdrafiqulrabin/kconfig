 

unsigned b;
void f()
{
  for(;;)
    if(!b?:(b=0))
      ;
    else if(b%0<b?:b)  
      for(;;)
	;
}

