 

 

 

# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN	\
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")

#define WARNABLE_CODE *++yyvsp = yylval;  

void test (char yylval)
{
  char *yyvsp;  
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  WARNABLE_CODE
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

