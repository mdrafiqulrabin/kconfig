 
 
 

extern long long a;
extern int b;
void bar (int, long long);

void
foo (void)
{
  bar (a > 0x85, b);
}

