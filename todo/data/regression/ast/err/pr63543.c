 
 

struct S;
union U;

int
f1 (struct S *s)
{
  return s->a  
	 + s->b
	 + s->c;
}

int
f2 (union U *u)
{
  return u->a  
	 + u->a
	 + u->a;
}

