 
 

#define vs(n) __attribute__((vector_size (n)))
int vs (-1) a;			 
int vs (0) b;			 
int vs (1) c;			 
int vs (sizeof (int) / 2) d;	 
int vs (sizeof (int)) e;
int vs (sizeof (int) * 2) f;

