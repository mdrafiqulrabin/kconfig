 
 

int foo_add (const unsigned char *tmp, int i, int val)
{
  return (unsigned char)(((tmp[i] + val)>0xFF)?0xFF:(((tmp[i] + val)<0)?0:(tmp[i] + val)));
}

int foo_sub (const unsigned char *tmp, int i, int val)
{
  return (unsigned char)(((tmp[i] - val)>0xFF)?0xFF:(((tmp[i] - val)<0)?0:(tmp[i] - val)));
}

int foo_mul (const unsigned char *tmp, int i, int val)
{
  return (unsigned char)(((tmp[i] * val)>0xFF)?0xFF:(((tmp[i] * val)<0)?0:(tmp[i] * val)));
}

 
 
 
 

