 
 
 

void b(short*p){
  p=(short*)__builtin_assume_aligned(p,64);
  short*q=p+255;
  for(;p<q;++p,--q){
    short t=*p;*p=*q;*q=t;
  }
}
 

