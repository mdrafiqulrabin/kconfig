 
 
 
 

 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 

typedef struct
{
  unsigned int b31 : 1;
  unsigned int b30 : 1;
  unsigned int b29 : 1;
  unsigned int b28 : 1;
  unsigned int b27 : 1;
  unsigned int b26 : 1;
  unsigned int b25 : 1;
  unsigned int b24 : 1;
  unsigned int b23 : 1;
  unsigned int b22 : 1;
  unsigned int b21 : 1;
  unsigned int b20 : 1;
  unsigned int b19 : 1;
  unsigned int b18 : 1;
  unsigned int b17 : 1;
  unsigned int b16 : 1;
  unsigned int b15 : 1;
  unsigned int b14 : 1;
  unsigned int b13 : 1;
  unsigned int b12 : 1;
  unsigned int b11 : 1;
  unsigned int b10 : 1;
  unsigned int b9 : 1;
  unsigned int b8 : 1;
  unsigned int b7 : 1;
  unsigned int b6 : 1;
  unsigned int b5 : 1;
  unsigned int b4 : 1;
  unsigned int b3 : 1;
  unsigned int b2 : 1;
  unsigned int b1 : 1;
  unsigned int b0 : 1;
} S;

#define make_funcs(bitpos)\
  unsigned int test_b##bitpos##_0 (S s)\
  {\
    return s.b##bitpos;\
  }\
  unsigned int test_b##bitpos##_1 (S s)\
  {\
    return !s.b##bitpos;\
  }\

make_funcs (0)
make_funcs (1)
make_funcs (2)
make_funcs (3)
make_funcs (4)
make_funcs (5)
make_funcs (6)
make_funcs (7)
make_funcs (8)
make_funcs (9)
make_funcs (10)
make_funcs (11)
make_funcs (12)
make_funcs (13)
make_funcs (14)
make_funcs (15)
make_funcs (16)
make_funcs (17)
make_funcs (18)
make_funcs (19)
make_funcs (20)
make_funcs (21)
make_funcs (22)
make_funcs (23)
make_funcs (24)
make_funcs (25)
make_funcs (26)
make_funcs (27)
make_funcs (28)
make_funcs (29)
make_funcs (30)
make_funcs (31)

