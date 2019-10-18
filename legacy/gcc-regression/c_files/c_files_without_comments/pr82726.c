 
 
 

#define N 40
#define M 128
unsigned int in[N+M];
unsigned short out[N];

 

void
foo (){
  int i,j;
  unsigned int diff;

  for (i = 0; i < N; i++) {
    diff = 0;
    for (j = 0; j < M; j+=8) {
      diff += in[j+i];
    }
    out[i]=(unsigned short)diff;
  }

  return;
}

