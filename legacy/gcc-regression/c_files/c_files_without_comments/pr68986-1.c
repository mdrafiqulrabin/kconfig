 
 
 
 

extern __thread int msgdata;
int
foo ()
{
  return msgdata;
}

