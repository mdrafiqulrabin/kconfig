 
 
 
 

struct shared_ptr_struct
{
  unsigned long long phase:48;
  unsigned short thread:16;
  union
    {
      void *addr;
      unsigned long long pad;
    };
};
typedef struct shared_ptr_struct sptr_t;

sptr_t S;

sptr_t
sptr_result (void)
{
  return S;
}
 
 

