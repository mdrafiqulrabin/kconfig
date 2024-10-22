 
 
 

#ifndef __cplusplus
# define bool _Bool
#endif

extern bool foo (void);

void
f1 (bool b)
{
  switch (b)  
    {
    case 3:
      break;
    }
}

void
f2 (int a, int b)
{
  switch (a && b)  
    {
    case 3:
      break;
    }
  switch ((bool) (a && b))  
    {
    case 3:
      break;
    }
  switch ((a && b) || a)  
    {
    case 3:
      break;
    }
   
  switch ((int) (a && b))
    break;
  switch ((unsigned int) (a && b))
    break;
  switch ((unsigned short int) (a && b))
    break;
  switch ((char) (a && b))
    break;
}

void
f3 (int a)
{
  switch (!!a)  
    {
    case 3:
      break;
    }
  switch (!a)  
    {
    case 3:
      break;
    }
}

void
f4 (void)
{
  switch (foo ())  
    {
    case 3:
      break;
    }
}

void
f5 (int a)
{
  switch (a == 3)  
    {
    case 3:
      break;
    }
  switch (a != 3)  
    {
    case 3:
      break;
    }
  switch (a > 3)  
    {
    case 3:
      break;
    }
  switch (a < 3)  
    {
    case 3:
      break;
    }
  switch (a <= 3)  
    {
    case 3:
      break;
    }
  switch (a >= 3)  
    {
    case 3:
      break;
    }
  switch (foo (), foo (), a >= 42)  
    {
    case 3:
      break;
    }
  switch (a == 3, a & 4, a ^ 5, a)
    break;
  switch ((int) (a == 3))
    break;
  switch ((int) (a != 3))
    break;
}

void
f6 (bool b)
{
  switch (b)  
    {
    case 3:
      break;
    }
  switch (!b)  
    {
    case 3:
      break;
    }
}

void
f7 (void)
{
  bool b;
  switch (b = 1)  
    {
    case 3:
      break;
    }
}

void
f8 (int i)
{
  switch (i)
    break;
  switch ((int) i)
    break;
  switch ((unsigned int) i)
    break;
  switch ((bool) i)  
    {
    case 11:
      break;
    }
}

