 
 
 

#define FOO(type, cmp, suffix, no)  \
int f_##no(type x, type y) \
{ \
  type gen_##no(); \
  type xs = __builtin_sqrt##suffix((gen_##no())); \
  type xy = __builtin_sqrt##suffix((gen_##no())); \
  return (xs cmp xy); \
}

#define GEN_FOO(type, suffix) \
FOO(type, <, suffix, suffix##1) \
FOO(type, <=, suffix, suffix##2) \
FOO(type, >, suffix, suffix##3) \
FOO(type, >=, suffix, suffix##4) \
FOO(type, ==, suffix, suffix##5) \
FOO(type, !=, suffix, suffix##6)

GEN_FOO(float, f)
GEN_FOO(double, )
GEN_FOO(long double, l)

 
 
 

