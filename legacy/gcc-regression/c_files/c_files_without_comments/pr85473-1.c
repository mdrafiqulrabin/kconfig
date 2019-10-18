 
 
 
 

unsigned int w[5] __attribute__((aligned(64)));

void
foo ()
{

   unsigned int array[] = {1, 2, 3, 4, 5};
   __builtin_ia32_movdir64b(w, array);
}


