 
 
 

extern void xfer (int, int, unsigned char *);
struct T { int a; } t;

void
call (int x, int y, void *arg)
{
  unsigned char *uc = arg;  
  xfer (x, y, arg);  
  xfer (x, y, t);  
}

