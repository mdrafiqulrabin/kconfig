 
 
 
 

 

struct big {
  char a[32764];
  double d __attribute__ ((aligned (4)));
} __attribute__ ((packed));

extern struct big x;
double y;

void r (void)
{
  double tmp = x.d;
#if 1
  asm ("#": "+r" (tmp)
       : : "fr0", "fr1", "fr2", "fr3", "fr4", "fr5", "fr6", "fr7",
           "fr8", "fr9", "fr10", "fr11", "fr12", "fr13", "fr14", "fr15",
           "fr16", "fr17", "fr18", "fr19", "fr20", "fr21", "fr22", "fr23",
           "fr24", "fr25", "fr26", "fr27", "fr28", "fr29", "fr30", "fr31");
#endif
  y = tmp;
}

void w (void)
{
  double tmp = y;
#if 1
  asm ("#": "+r" (tmp)
       : : "fr0", "fr1", "fr2", "fr3", "fr4", "fr5", "fr6", "fr7",
           "fr8", "fr9", "fr10", "fr11", "fr12", "fr13", "fr14", "fr15",
           "fr16", "fr17", "fr18", "fr19", "fr20", "fr21", "fr22", "fr23",
           "fr24", "fr25", "fr26", "fr27", "fr28", "fr29", "fr30", "fr31");
#endif
  x.d = tmp;
}

