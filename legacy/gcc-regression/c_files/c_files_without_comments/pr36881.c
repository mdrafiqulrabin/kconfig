 
 
 

const char *foo (int i)
{
  const char *p;
  switch (i)
    {
    case 0:
    case 6: p = ""; break;
    case 1:
    case 7: p = "abc"; break;
    case 2:
    case 8: p = "def"; break;
    case 9: p = "ghi"; break;
    case 5: p = "jkl"; break;
    case 3: p = "mno"; break;
    default: p = "prq"; break;
    }
  return p;
}

 
 

