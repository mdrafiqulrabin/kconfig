 
 
void *
memcpy (void *a, const void *b, __SIZE_TYPE__ len)
{
  if (a == b)
    __builtin_abort ();
}

