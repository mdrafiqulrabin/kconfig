 
 
 

enum E e;  
int (*A)[];

void
fn0 (void)
{
  struct
  {
    int x;
    int y[];
  } s;
  1234 && &s.y + 1;  
}

void
fn1 (void)
{
  1234, A += 1;  
}

