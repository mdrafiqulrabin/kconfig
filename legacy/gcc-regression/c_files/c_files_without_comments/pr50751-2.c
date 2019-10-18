 
 
 
 

void
testfunc_00 (const char* ap, char* bp)
{
  bp[0] = ap[15];
  bp[2] = ap[5];
  bp[9] = ap[7];
  bp[0] = ap[25];
}

void
testfunc_01 (volatile const char* ap, volatile char* bp)
{
  bp[0] = ap[15];
  bp[2] = ap[5];
  bp[9] = ap[7];
  bp[0] = ap[25];
}


