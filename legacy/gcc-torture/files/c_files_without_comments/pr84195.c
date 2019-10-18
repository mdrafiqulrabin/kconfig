 

 
   
#define MSG "foo\n\t\rbar"

int f (int i __attribute__ ((deprecated (MSG))))
{
  return 0 ? i : 0;  
}


