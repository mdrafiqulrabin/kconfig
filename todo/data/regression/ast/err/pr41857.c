 

 

__ea char *strchr_ea (__ea const char *s, int c);
__ea char *foo (__ea char *s)
{
  __ea char *ret = s;
  int i;

  for (i = 0; i < 3; i++)
    ret = strchr_ea (ret, s[i]);
 
  return ret;
}

