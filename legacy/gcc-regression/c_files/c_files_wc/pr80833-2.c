 
 
 

__int128 test (__int128 a)
{
  asm ("" : "+x" (a));
  return a;
}

 
 

