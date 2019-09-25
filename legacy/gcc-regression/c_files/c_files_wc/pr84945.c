 
 
 

int
main ()
{
   
  if (!__builtin_cpu_supports ("avx512f")
      && (__builtin_cpu_supports ("avx512vnni")
	  || __builtin_cpu_supports ("avx512bitalg")))
    __builtin_abort ();
  return 0;
}

