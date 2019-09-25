 
 
 
 
 

 

#ifdef bool
#error "bool is considered defined"
#endif

#ifdef vector
#error "vector is considered defined"
#endif

#ifdef pixel
#error "pixel is condsidered defined"
#endif

#if defined(bool)
#error "bool is considered defined"
#endif

#if defined(vector)
#error "vector is considered defined"
#endif

#if defined(pixel)
#error "pixel is condsidered defined"
#endif

#ifndef bool
#else
#error "bool is considered defined"
#endif

#ifndef vector
#else
#error "vector is considered defined"
#endif

#ifndef pixel
#else
#error "pixel is condsidered defined"
#endif

#define bool long double
bool pixel = 0;

