 
 
 

#define test_type unsigned short

typedef struct s{
 unsigned char Prefix[1];
 volatile test_type Type;
}__attribute((__packed__,__aligned__(4))) ss;

extern volatile ss v;

void
foo (test_type u)
{
  v.Type = u;
}

 
 

