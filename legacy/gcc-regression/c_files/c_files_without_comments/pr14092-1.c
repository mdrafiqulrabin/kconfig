 
 

 
__extension__ typedef __INTPTR_TYPE__ intptr_t;

typedef struct _PLCI {
  unsigned char x;
  unsigned char buf[1];
} PLCI;

void nl_ind(PLCI * plci)
{
  plci->x = -((intptr_t)(plci->buf)) & 3;
}


