 
 
 
 

int a[131072];	 
int b[1024];	 

void
f1 (const char *fmt)
{
  __builtin_printf ("%d\n", 1.2);	 
  __builtin_printf (fmt, 1.2);		 
}

extern void f2 (void);
void
f2 (void)  
{
  __builtin_exit (0);
}

 

