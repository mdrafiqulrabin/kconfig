 
 
 
 
 

void DecodeAC(int index,int *matrix)
{
  int *mptr;

  for(mptr=matrix+index;mptr<matrix+64;mptr++) {*mptr = 0;}
}


