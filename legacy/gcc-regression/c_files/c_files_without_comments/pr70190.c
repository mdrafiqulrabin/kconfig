 
 


int
fn1 ()
{
  static char a[] = "foo";
  static void *b[] = { &&l1, &&l2 };
  goto *(b[1]);
 l1: goto *(a[0]);
 l2: return 0;
}


