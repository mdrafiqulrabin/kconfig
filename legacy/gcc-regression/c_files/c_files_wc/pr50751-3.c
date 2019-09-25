 
 
 
 

void
testfunc_00 (const char* ap, char* bp)
{
  bp[100] = ap[15];
  bp[200] = ap[50];
  bp[900] = ap[71];
  bp[0] = ap[25];
}

void
testfunc_01 (volatile const char* ap, volatile char* bp)
{
  bp[100] = ap[15];
  bp[200] = ap[50];
  bp[900] = ap[71];
  bp[0] = ap[25];
}


