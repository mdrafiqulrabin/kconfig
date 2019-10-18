 
 

#define regparm __attribute__((__regparm__(1)))

extern unsigned short y;

void regparm g0(unsigned char c)
{
        y = (y & 0xFF00) | (unsigned short)c;
}

void regparm g1(unsigned char c)
{
        y = (y & 0x00FF) | ((unsigned short)c << 8);
}

 
 


