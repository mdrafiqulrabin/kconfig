 
 

void foo (long long i)
{
   while (i != -1)
     {
	++i;
	 __asm__ ("");
     }
}

