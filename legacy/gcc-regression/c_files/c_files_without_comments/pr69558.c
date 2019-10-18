 
 
 

 

#define A \
  _Pragma ("GCC diagnostic push") \
  _Pragma ("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
#define B \
  _Pragma ("GCC diagnostic pop")
#define C(x) \
  A \
  static inline void bar (void) { x (); }   \
  B

__attribute__((deprecated)) void foo (void);  

C (foo)  

