 
 

extern void voidf (void);
extern int intf (void);

int
f (void)
{
  if (intf () < 0
      || voidf () < 0)  
    return 1;

  if (voidf () < 0  
      || intf () < 0)
    return 1;

  return 0;
}

