 

 
 
 

signed long long sll;

void
foo (void)
{
  __sync_fetch_and_add (&sll, 1);
}

