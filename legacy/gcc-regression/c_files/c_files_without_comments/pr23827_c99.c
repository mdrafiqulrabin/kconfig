 
 

#define f (
#define l )
#define str(x) #x
#define xstr(x) str(x)

 
 
const char *s = xstr(0x1p+f 0x1p+l);

void abort (void);
int strcmp (const char *, const char *);

int
main()
{
  if (strcmp (s, "0x1p+( 0x1p+)"))
    return 0;  
  else
    abort ();  
}

