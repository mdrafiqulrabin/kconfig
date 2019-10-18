 
 

extern void bar (void);

 
void
foo1 (char *buf)
{
  int x = *buf;
  switch (x)
    {
    case -76:
    case 65:
    case 181:
      bar();
    }
}

 
void
foo2 (char *buf)
{
  int x = *buf;
  switch (x)
    {
    case -150:
    case -140:
    case -130:
      bar();
    }
}

 
void
foo3 (char *buf)
{
  int x = *buf;
  switch (x)
    {
    case 130:
    case 140:
    case 150:  
      bar();
    }
}

 
void
foo4 (char *buf)
{
  int x = *buf;
  switch (x)
    {
    case -130 ... -120:
    case 100:
    case 120 ... 130:
      bar();
    }
}


