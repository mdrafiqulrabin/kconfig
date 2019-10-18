 

void
f (char *cp)
{
#pragma acc parallel present(cp[7:9])
  ;
}

 

