 

#include "pr79214.h"

typedef __SIZE_TYPE__ size_t;

char d[3];
char s[4];

static size_t range (void)
{
  extern size_t size ();
  size_t n = size ();
  if (n <= sizeof d)
    return sizeof d + 1;

  return n;
}

void test_bzero (void)
{
  bzero (d, range ());    
}

void test_memcpy (void)
{
  memcpy (d, s, range ());    
}

void test_memmove (void)
{
  memmove (d, d + 1, range ());    
}

void test_mempcpy (void)
{
  mempcpy (d, s, range ());    
}

void test_memset (int n)
{
  memset (d, n, range ());    
}

void test_strcat (int i)
{
  const char *s = i < 0 ? "123" : "4567";

  strcat (d, s);    
}

char* test_stpcpy (int i)
{
  const char *s = i < 0 ? "123" : "4567";

  return stpcpy (d, s);    
}

char* test_stpncpy (int i)
{
  const char *s = i < 0 ? "123" : "4567";

  return stpncpy (d, s, range ());    
}

char* test_strcpy (int i)
{
  const char *s = i < 0 ? "123" : "4567";

  return strcpy (d, s);    
}

char* test_strncpy (int i)
{
  const char *s = i < 0 ? "123" : "4567";

  return strncpy (d, s, range ());    
}

char* test_strncat (int i)
{
  const char *s = i < 0 ? "123" : "4567";

  return strncat (d, s, range ());    
}

