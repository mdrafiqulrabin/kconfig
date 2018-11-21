 
 
 
 

 
 
 
 

 
 
 
 
 

 

#define make_func(type,shift)\
  int test_##type##_##_shift_##shift##_0 (type x)\
  {\
    return ((x >> shift) ^ 1) & 1 ? -40 : -10;\
  }\
  int test_##type##_##_shift_##shift##_1 (type x)\
  {\
    return ((x >> shift) ^ 0) & 1 ? -40 : -10;\
  }\
  int test_##type##_##_shift_##shift##_2 (type x)\
  {\
    return ((x >> shift) ^ 1) & 1;\
  }\
  int test_##type##_##_shift_##shift##_3 (type x)\
  {\
    return ((x >> shift) ^ 0) & 1;\
  }\
  int test_##type##_##_shift_##shift##_4 (type x)\
  {\
    return (x & (1 << shift)) == 0;\
  }\
  int test_##type##_##_shift_##shift##_5 (type x)\
  {\
    return (x & (1 << shift)) != 0;\
  }\
\
  int test_##type##_##_shift_##shift##_6 (type* x)\
  {\
    return ((*x >> shift) ^ 1) & 1 ? -40 : -10;\
  }\
  int test_##type##_##_shift_##shift##_7 (type* x)\
  {\
    return ((*x >> shift) ^ 0) & 1 ? -40 : -10;\
  }\
  int test_##type##_##_shift_##shift##_8 (type* x)\
  {\
    return ((*x >> shift) ^ 1) & 1;\
  }\
  int test_##type##_##_shift_##shift##_9 (type* x)\
  {\
    return ((*x >> shift) ^ 0) & 1;\
  }\
  int test_##type##_##_shift_##shift##_10 (type* x)\
  {\
    return (*x & (1 << shift)) == 0;\
  }\
  int test_##type##_##_shift_##shift##_11 (type* x)\
  {\
    return (*x & (1 << shift)) != 0;\
  }

#define make_funcs(type)\
  make_func (type, 0)\
  make_func (type, 1)\
  make_func (type, 2)\
  make_func (type, 3)\
  make_func (type, 4)\
  make_func (type, 5)\
  make_func (type, 6)\
  make_func (type, 7)

typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;

make_funcs (int8_t)
make_funcs (uint8_t)
make_funcs (int16_t)
make_funcs (uint16_t)
make_funcs (int32_t)
make_funcs (uint32_t)
make_funcs (int64_t)
make_funcs (uint64_t)

