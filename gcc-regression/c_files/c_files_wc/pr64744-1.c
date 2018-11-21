 
 
 

__attribute__((naked))
void foo1 ()
{
  int aa = 0;
  int ab = {0};
}

__attribute__((naked))
void foo2() {
  char aa [ ] = {};  
  char ab [1] = {};
  char ac [2] = {};  
  char ad [3] = {};  
}

__attribute__((naked))
void foo3() {
  char aa [1] = {0};
  char ab [2] = {0};  
  char ac [3] = {0};  
  char ad [4] = {0};  
}

__attribute__((naked))
void foo4() {
  char aa [2] = {0,0};  
}
__attribute__((naked))
void foo5() {
  char aa [3] = {0,0,0};  
}

__attribute__((naked))
void foo6() {
  char aa [4] = {0,0,0,0};  
}

