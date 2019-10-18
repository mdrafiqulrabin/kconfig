 
 

#ifndef __cplusplus
# define bool _Bool
# define true 1
# define false 0
#endif

void
nowarn (bool b)
{
  switch (b)
    ;

  switch (b)
    {
    case true:
    case false:
      break;
    }

  switch (b)
    {
    case true:
      break;
    }

  switch (b)
    {
    case true:
    default:
      break;
    }

  switch (b)
    {
    case false:
      break;
    }

  switch (b)
    {
    case false:
    default:
      break;
    }

  switch (b)
    {
    default:
      break;
    }

  switch (b)
    {
    case false ... true:
      break;
    }

  switch (b)
    {
    case 1:
      switch (b)
	{
	case true:
	default:
	  break;
	}
      default:
	break;
    }
}

void
warn (bool b)
{
  switch (b)   
    {
    case true:
    case false:
    default:
      break;
    }

  switch (b)   
    {
    case false ... true:
    default:
      break;
    }
}

void
warn2 (int n)
{
  switch (n == 2)   
    {
    case 0 ... 2:  
    default:
      break;
    }

  switch (n == 2)   
    {
    case 1 ... 10:  
    default:
      break;
    }

  switch (n == 2)  
    {
      case 2:  
	break;
    }

  switch (n == 2)  
    {
      case 0:
      case 1:
      case -1:  
	break;
    }

  switch (n == 2)  
    {
      case -1 ... 1:  
	break;
    }

  switch (n == 2)  
    {
      case -1 ... 0:  
      default:
	break;
    }

  switch (n == 2)  
    {
      case -10 ... -1:  
      default:
	break;
    }
}

