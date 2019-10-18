 
 
 
 

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

void
copy_sptr (sptr_t *dest, sptr_t src)
{
  *dest = src;
}

 

