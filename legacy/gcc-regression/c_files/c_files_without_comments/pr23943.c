 
 
 
 

__extension__ typedef __SIZE_TYPE__ size_t;

extern size_t strlen (__const char *__s)
    __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

static char savecallsin[256] = "";

int read_agent_config(void)
{
  savecallsin[0] = '\0';

  if (savecallsin[strlen(savecallsin) - 1] != '/')
    __builtin___strncat_chk (savecallsin, "/", sizeof(savecallsin) - strlen(savecallsin) - 1, __builtin_object_size (savecallsin, 2 > 1)) ;
  return 0;
}

