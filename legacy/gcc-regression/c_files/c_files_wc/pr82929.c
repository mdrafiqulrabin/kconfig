 
 
 

void
foo (short *p, short *q, short *r)
{
  short a = q[0];
  short b = q[1];
  short c = ~a;
  short d = r[0];
  short e = r[1];
  short f = ~b;
  p[0] = c & d;
  p[1] = e & f;
}

 

