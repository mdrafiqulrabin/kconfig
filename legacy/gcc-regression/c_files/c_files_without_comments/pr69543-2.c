 

 

void test (char yylval)
{
  char *yyvsp;
  _Pragma ("GCC diagnostic push")
  _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
  _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
  *++yyvsp = yylval;
  _Pragma ("GCC diagnostic pop")
}

