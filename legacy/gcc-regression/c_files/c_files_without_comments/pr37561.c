 
 

__extension__ __INTPTR_TYPE__ p;
char q;

void
foo ()
{
  ((char *) p)++;	 

  ((char *) q)++;	 
   

  ((char *) p)--;	 

  ((char *) q)--;	 
   

  ++(char *) p;		 

  ++(char *) q;		 
   

  --(char *) p;		 

  --(char *) q;		 
   
}


