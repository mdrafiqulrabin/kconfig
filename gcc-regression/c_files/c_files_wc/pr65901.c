 
 
 

struct S;
enum E;
union U;

void
foo (__builtin_va_list ap)
{
  __builtin_va_arg (ap, void);   
  __builtin_va_arg (ap, struct S);   
  __builtin_va_arg (ap, enum E);   
  __builtin_va_arg (ap, union U);   
}

