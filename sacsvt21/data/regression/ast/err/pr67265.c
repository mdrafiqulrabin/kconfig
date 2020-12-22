 
 

 
 
 

int a, b, c, d, e;

void foo (void)
{
  __asm__("" : "+r"(c), "+r"(e), "+r"(d), "+r"(a) : ""(b), "mg"(foo), "mm"(c));
}

