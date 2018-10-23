 
 

extern int x;

unsigned
foo (unsigned int y)
{
  return (y << ((__INTPTR_TYPE__) &x)) | (y >> (32 - ((__INTPTR_TYPE__) &x)));
}

