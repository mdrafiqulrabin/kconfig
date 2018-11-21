 
 
 

void * sbrk ()
{
 volatile register unsigned int sp_r1 __asm__ ("ebx");
 return __builtin_strcat ((char*)sp_r1, 0);  
}

