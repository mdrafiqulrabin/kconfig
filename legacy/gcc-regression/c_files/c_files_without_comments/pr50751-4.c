 
 
 
 

void
testfunc_00 (const short* ap, short* bp, short val)
{
  bp[0] = ap[15];
  bp[2] = ap[5];
  bp[9] = ap[7];
  bp[0] = ap[15];
  bp[4] = val;
  bp[14] = val;
}

void
testfunc_01 (volatile const short* ap, volatile short* bp, short val)
{
  bp[0] = ap[15];
  bp[2] = ap[5];
  bp[9] = ap[7];
  bp[0] = ap[15];
  bp[4] = val;
  bp[14] = val;
}


