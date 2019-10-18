 
 

 

typedef float XFtype __attribute__ ((mode (XF)));

void bar (XFtype);

void
foo (XFtype a, XFtype c)
{
  XFtype ac = a * c;

  bar (ac);
}

