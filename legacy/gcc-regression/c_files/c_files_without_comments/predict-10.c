 
 
int
ee(int i)
{
  if (i>2)
    return (ee(i-1)+ee(i-2))/2;
  else
    return i;
}
 

