 
 

int fn1 (void);
int fn2 (void) __attribute__ ((alloc_align (fn1)));  
int fn3 (void) __attribute__ ((alloc_size (fn1)));  
int fn4 (void) __attribute__ ((assume_aligned (fn1)));  
int fn5 (char *, char *) __attribute__((nonnull (fn1)));  
int fn6 (const char *, ...) __attribute__ ((sentinel (fn1)));  

typedef int __attribute__((vector_size (fn1))) v4si;  
typedef int T __attribute__((aligned (fn1)));  

