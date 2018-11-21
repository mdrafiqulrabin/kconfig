 

__attribute__((persistent)) int persistent_1_g = 1;
__attribute__((persistent)) int persistent_2_g = 0;
static __attribute__((persistent)) int persistent_3_g = 1;
static __attribute__((persistent)) int persistent_4_g = 0;

int
main (void)
{
  __attribute__((persistent)) int persistent_1 = 1;  
  __attribute__((persistent)) int persistent_2 = 0;  
  static __attribute__((persistent)) int persistent_3 = 1;
  static __attribute__((persistent)) int persistent_4 = 0;
  return 0;
}

