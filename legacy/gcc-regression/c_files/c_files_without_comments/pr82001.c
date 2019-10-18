 
 

int
mullo (int a, int b)
{
  asm("mul %%edx   # %%1 was %1"
      : "+"
	"a"(a),
	"+d"(b));
  return a;
}

int
mulhi (int a, int b)
{
  asm("mul %%edx   # %%1 was %1" : "+d"(a), "+a"(b));
  return a;
}

 

