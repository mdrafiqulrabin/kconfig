 
 
 
 

__int128 i;

void test ()
{
  __sync_val_compare_and_swap (&i, i, i);
}

