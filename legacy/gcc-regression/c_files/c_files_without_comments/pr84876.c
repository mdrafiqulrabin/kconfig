 
 

__int128 test (__int128 a)
{
  asm ("" : "+v" (a) : : "xmm0", "xmm1", "xmm2", "xmm3",  
			 "xmm4", "xmm5", "xmm6", "xmm7",
			 "xmm8", "xmm9", "xmm10", "xmm11",
			 "xmm12", "xmm13", "xmm14", "xmm15");
  return a;
}

