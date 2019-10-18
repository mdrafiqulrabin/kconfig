 
 

int
foo (unsigned char c)
{
  switch (c) { case 42: case -1: return -1; };  
  switch (c) { case 42: case 300: return -1; };  
  switch (c) { case 42: case -1 ... 2: return -1; };  
  switch (c) { case 42: case 250 ... 300: return -1; };  
  return 0;
}

