 
 

unsigned array[4];

#ifdef _WIN64
__extension__ typedef unsigned long long TYPE;
#else
#define TYPE unsigned long
#endif

unsigned foo(TYPE x)
{
          return array[(x>>2)&3ul];
}

 
 

