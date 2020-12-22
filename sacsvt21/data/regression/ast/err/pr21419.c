 
const int i = 0;

void f(void)
{
  __asm__ __volatile__ ("" : "=m" (i));  

}

void g(const int set)
{
  __asm__ __volatile__ ("" : "=r" (set));  
}



