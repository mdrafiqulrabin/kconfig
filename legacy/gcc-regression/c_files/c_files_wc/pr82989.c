 
 
 
 
 
 
 
 

typedef unsigned long long uint64_t;

void f_shr_imm (uint64_t *a)
{
  *a += *a >> 32;
}

void f_shr_reg (uint64_t *a, uint64_t b)
{
  *a += *a >> b;
}

void f_shl_imm (uint64_t *a)
{
  *a += *a << 32;
}

void f_shl_reg (uint64_t *a, uint64_t b)
{
  *a += *a << b;
}
 
 
 

