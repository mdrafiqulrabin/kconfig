 
 

 

extern void boo ();

int b2b_uc (unsigned char u, unsigned char w)
{
  if ((u & w) & 0x20)
    boo ();
}

int b2b_us (unsigned short u, unsigned short w)
{
  if ((u & w) & 0x20)
    boo ();
}

int b2b_ui (unsigned int u, unsigned int w)
{
  if ((u & w) & 0x20)
    boo ();
}
int b2b_ul (unsigned long u, unsigned long w)
{
  if ((u & w) & 0x20)
    boo ();
}
int b2b_ull (unsigned long long u, unsigned long long w)
{
  if ((u & w) & 0x20)
    boo ();
}

int b2b_sc (signed char u, signed char w)
{
  if ((u & w) & 0x20)
    boo ();
}

int b2b_ss (signed short u, signed short w)
{
  if ((u & w) & 0x20)
    boo ();
}

int b2b_si (signed int u, signed int w)
{
  if ((u & w) & 0x20)
    boo ();
}
int b2b_sl (signed long u, signed long w)
{
  if ((u & w) & 0x20)
    boo ();
}
int b2b_sll (signed long long u, signed long long w)
{
  if ((u & w) & 0x20)
    boo ();
}

 
 

 
 

 
 

 
 
 


