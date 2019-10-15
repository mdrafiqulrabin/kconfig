 
 

 

void g(int, char *);
const char * dum = "hello";

void f(int x)
{
       char big[200000];
 start:
       g(x, big);
       g(x, big);
       register void *p asm("r11") = &&start;
       asm("" : : "r"(p));
       asm("" : : :"r28");
       asm("" : : :"r29");
       asm("" : : :"r30");
}

