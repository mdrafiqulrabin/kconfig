 
 
 

typedef char A __attribute__ ((vector_size (64)));
typedef int B __attribute__ ((vector_size (64)));

void
foo (A a)
{
  ((B) a) ();	 
}

 
 

