 
 
 

char a;
short b;
void bar (int);

void
foo (void)
{
  bar ((!!b ? : (a *= a / 0)) >= (a = b));
}

