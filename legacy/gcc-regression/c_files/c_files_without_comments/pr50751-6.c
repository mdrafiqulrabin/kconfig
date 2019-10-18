 
 
 
 

void
testfunc_00 (const short* ap, short* bp)
{
  bp[100] = ap[15];
  bp[200] = ap[50];
  bp[900] = ap[71];
  bp[0] = ap[25];
}

void
testfunc_01 (volatile const short* ap, volatile short* bp)
{
  bp[100] = ap[15];
  bp[200] = ap[50];
  bp[900] = ap[71];
  bp[0] = ap[25];
}


