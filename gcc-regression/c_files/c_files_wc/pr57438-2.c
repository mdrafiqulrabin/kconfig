 
 
 
   
int foo (int x)
{
  switch (x)
    {
      case 0:
        return 10;
      case 3:
        return -1;
      case 5:
        return 29;
      default:
        __builtin_unreachable();
    }
}

 

