 
 
 

#ifdef __cplusplus
extern "C" {
#endif
extern void *memcpy (void *__restrict, const void *__restrict, __SIZE_TYPE__)
  __attribute__((nonnull (1), nonnull (2), nonnull (1, 2), nonnull));
#ifdef __cplusplus
}
#endif

extern void bar (void *p1, void *p2, void *p3, void *p4, void *p5)
  __attribute__((nonnull (1), nonnull (1, 3), nonnull (3, 5), nonnull (4)));

void
foo (void)
{
  memcpy (0, 0, 0);
   
   

  bar (0, 0, 0, 0, 0);
   
   
   
   
}

