 
 
 

 
 

 
 

 
 

typedef char bool;

int
test_0 (int a, int b, int c, int* d)
{
   
  bool x = a == 0;
  d[2] = !x;
  return x ? b : c;
}

int
test_1 (int a, int b, int c, int* d)
{
   
  bool x = a != 0;
  d[2] = !x;
  return x ? b : c;
}

int
test_2 (int a, int b, int c, char* d)
{
   
  bool x = a == 0;
  d[2] = !x;
  return x ? b : c;
}

int
test_3 (int a, int b, int c, char* d)
{
   
  bool x = a != 0;
  d[2] = !x;
  return x ? b : c;
}

int
test_4 (int a, int b, int c, char* d)
{
   
  bool x = a != 0;
  d[2] = !x;
  return !x ? b : c;
}

int
test_5 (int a, int b, int c, char* d)
{
   
  bool x = a == 0;
  d[2] = !x;
  return !x ? b : c;
}

