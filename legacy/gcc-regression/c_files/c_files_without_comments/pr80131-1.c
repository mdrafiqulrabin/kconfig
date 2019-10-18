 
 
 

 

__INT64_TYPE__ f1 (__INT64_TYPE__ i)
{
  return (__INT64_TYPE__)1 << (31 - i);
}

__INT64_TYPE__ f2 (__INT64_TYPE__ i)
{
  return (__INT64_TYPE__)1 << (63 - i);
}

__UINT64_TYPE__ f3 (__INT64_TYPE__ i)
{
  return (__UINT64_TYPE__)1 << (63 - i);
}

__INT32_TYPE__ f4 (__INT32_TYPE__ i)
{
  return (__INT32_TYPE__)1 << (31 - i);
}

 
 
 

