 
 
 

 

void foo ()
{
  extern int i;
  __vector int v,w;
    v = w = (vector int) { i };
}

int main (int argc, char *argv[])
{
  return 0;
}
 

