 
 
 
 

#ifndef TYPE
#define TYPE _Float128
#endif

TYPE
return_convert_uchar_to_float128_mem (unsigned char *p_uc)
{
  return (TYPE) p_uc[10];
}

TYPE
return_convert_schar_to_float128_mem (signed char *p_sc)
{
  return (TYPE) p_sc[10];
}

TYPE
return_convert_ushort_to_float128_mem (unsigned short *p_us)
{
  return (TYPE) p_us[10];
}

TYPE
return_convert_sshort_to_float128_mem (short *p_ss)
{
  return (TYPE) p_ss[10];
}

 
 
 
 
 


