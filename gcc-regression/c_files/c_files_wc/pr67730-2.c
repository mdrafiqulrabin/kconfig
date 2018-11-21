 
 
 

#include "pr67730.h"

extern void bar (int);

int
fn1 (void)
{
  int a = NULL;  
  a = NULL;  
  bar (NULL);  
  return NULL;  
}

int
fn2 (void)
{
  RETURN;  
}

