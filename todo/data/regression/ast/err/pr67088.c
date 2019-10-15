 
 
 

enum E { A = 2 };
int j;
float f;
struct S1 {
  double b1:1;  
  int b2:j;  
  int b3:f;  
  int b4:(int) __builtin_log (100);  
  int b5:-2;  
  int b6:0;  
  long int b7:32;  
  int b8:sizeof (int) * __CHAR_BIT__ * 2;  
  __extension__ enum E b9:1;  
};

