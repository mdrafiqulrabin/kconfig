 
 

 

void __lock_get_list(void *dp)
{
  if (((__SIZE_TYPE__)dp + 1) & ~1ULL)
    ;
}

