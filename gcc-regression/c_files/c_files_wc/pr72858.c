 

#include "format.h"

 

 

void
test_x (char *d,
	int iexpr, unsigned int uiexpr,
	long lexpr, unsigned long ulexpr,
	long long llexpr, unsigned long long ullexpr,
	float fexpr, double dexpr, long double ldexpr,
	void *ptr)
{
   

  sprintf (d, " %-8x ", iexpr);
  sprintf (d, " %-8x ", uiexpr);

  sprintf (d, " %-8x ", lexpr);  
 
  sprintf (d, " %-8x ", ulexpr);  
 

  sprintf (d, " %-8x ", llexpr);  
 
  sprintf (d, " %-8x ", ullexpr);  
 

   

  sprintf (d, " %-8x ", fexpr);  
 
  sprintf (d, " %-8x ", dexpr);  
 
  sprintf (d, " %-8x ", ldexpr);  
 

   
  sprintf (d, " %-8x ", ptr);  
 

   
  struct s { int i; };
  struct s s;
  sprintf (d, " %-8x ", s);  
 
}

 

void
test_lx (char *d,
	 int iexpr, unsigned int uiexpr,
	 long lexpr, unsigned long ulexpr,
	 long long llexpr, unsigned long long ullexpr,
	 float fexpr, double dexpr, long double ldexpr)
{
   

  sprintf (d, " %-8lx ", iexpr);  
 
  sprintf (d, " %-8lx ", uiexpr);  
 

  sprintf (d, " %-8lx ", lexpr);
  sprintf (d, " %-8lx ", ulexpr);

  sprintf (d, " %-8lx ", llexpr);  
 
  sprintf (d, " %-8lx ", ullexpr);  
 

   

  sprintf (d, " %-8lx ", fexpr);  
 
  sprintf (d, " %-8lx ", dexpr);  
 
  sprintf (d, " %-8lx ", ldexpr);  
 
}

 

void
test_o (char *d,
	int iexpr, unsigned int uiexpr,
	long lexpr, unsigned long ulexpr,
	long long llexpr, unsigned long long ullexpr)
{
   

  sprintf (d, " %-8o ", iexpr);
  sprintf (d, " %-8o ", uiexpr);

  sprintf (d, " %-8o ", lexpr);  
 
  sprintf (d, " %-8o ", ulexpr);  
 

  sprintf (d, " %-8o ", llexpr);  
 
  sprintf (d, " %-8o ", ullexpr);  
 
}

 

void
test_lo (char *d,
	int iexpr, unsigned int uiexpr,
	long lexpr, unsigned long ulexpr,
	long long llexpr, unsigned long long ullexpr)
{
   

  sprintf (d, " %-8lo ", iexpr);  
 
  sprintf (d, " %-8lo ", uiexpr);  
 

  sprintf (d, " %-8lo ", lexpr);
  sprintf (d, " %-8lo ", ulexpr);

  sprintf (d, " %-8lo ", llexpr);  
 
  sprintf (d, " %-8lo ", ullexpr);  
 
}

 

void
test_e (char *d, int iexpr, float fexpr, double dexpr, long double ldexpr)
{
   

  sprintf (d, " %-8e ", iexpr);  
 

   

  sprintf (d, " %-8e ", fexpr);
  sprintf (d, " %-8e ", dexpr);
  sprintf (d, " %-8e ", ldexpr);  
 
}

 

void
test_Le (char *d, int iexpr, float fexpr, double dexpr, long double ldexpr)
{
   

  sprintf (d, " %-8Le ", iexpr);  
 

   

  sprintf (d, " %-8Le ", fexpr);  
 

  sprintf (d, " %-8Le ", dexpr);  
 

  sprintf (d, " %-8Le ", ldexpr);
}

 

void
test_E (char *d, int iexpr, float fexpr, double dexpr, long double ldexpr)
{
   

  sprintf (d, " %-8E ", iexpr);  
 

   

  sprintf (d, " %-8E ", fexpr);
  sprintf (d, " %-8E ", dexpr);
  sprintf (d, " %-8E ", ldexpr);  
 
}

 

void
test_LE (char *d, int iexpr, float fexpr, double dexpr, long double ldexpr)
{
   

  sprintf (d, " %-8LE ", iexpr);  
 

  sprintf (d, " %-8LE ", fexpr);  
 

  sprintf (d, " %-8LE ", dexpr);  
 

  sprintf (d, " %-8LE ", ldexpr);
}

 

void
test_everything (char *d, long lexpr)
{
  sprintf (d, "before %-+*.*lld after", lexpr, lexpr, lexpr);  

   
   

   
   

   
   
}

