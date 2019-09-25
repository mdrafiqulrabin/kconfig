 
 

 

int __attribute__ ((weak))
frob (int i)
{
  switch (i)
    {
    case -5:
      return -2;
    case -3:
      return -1;
    case 0:
      return 0;
    case 3:
      return 1;
    case 5:
      break;
    default:
      __builtin_unreachable ();
    }
  return i;
}

 

 

