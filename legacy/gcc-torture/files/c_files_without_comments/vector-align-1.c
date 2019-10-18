 

 
#ifdef __pdp11__
#define alignment 2
#else
#define alignment 128
#endif

char x __attribute__((aligned(alignment),vector_size(2)));


int f[__alignof__(x) == alignment?1:-1];


