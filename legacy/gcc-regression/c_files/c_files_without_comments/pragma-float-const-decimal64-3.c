 
 

 

 

#define ON YES
#define OFF NO
#define DEFAULT NOPE
#define STDC OFFICIAL
#define FLOAT_CONST_DECIMAL64 NEW_PRAGMA

double a;

void
f1a (void)
{
#pragma STDC FLOAT_CONST_DECIMAL64 ON
  a = 1.0dd + 2.0;
}

void
f1b (void)
{
#pragma STDC FLOAT_CONST_DECIMAL64 OFF
  a = 2.0d + 3.0;
}

void
f1c (void)
{
#pragma STDC FLOAT_CONST_DECIMAL64 DEFAULT
  a = 3.0d + 4.0;
}

 

#define PRAGMA(x) _Pragma (#x)
#define DEFAULT_FLOAT_IS_DECIMAL PRAGMA(STDC FLOAT_CONST_DECIMAL64 ON)
#define DEFAULT_FLOAT_IS_BINARY PRAGMA(STDC FLOAT_CONST_DECIMAL64 OFF)

void
f2a (void)
{
  DEFAULT_FLOAT_IS_DECIMAL
  a = 5.0 * 6.0dd;
}

void
f2b (void)
{
  DEFAULT_FLOAT_IS_BINARY
  a = 6.0 * 7.0d;
}

 

#undef ON
#undef OFF
#undef DEFAULT
#undef STDC
#undef FLOAT_CONST_DECIMAL64

#define SWITCH ON
#define FLOAT_CONST_DECIMAL64(x) PRAGMA(STDC FLOAT_CONST_DECIMAL64 x)

void
f3a (void)
{
  FLOAT_CONST_DECIMAL64(SWITCH)
  a = 1.0 * 7.0dd;
}

void
f3b (void)
{
  FLOAT_CONST_DECIMAL64(OFF)
  a = 1.0 + 2.0d;
}

