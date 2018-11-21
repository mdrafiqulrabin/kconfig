 
 
 

_Alignas (char) char cc;
_Alignas (short int) char cs;
_Alignas (int) char ci;
_Alignas (long int) char cl;
_Alignas (long long int) char cll;
_Alignas (float) char cf;
_Alignas (double) char cd;
_Alignas (long double) char cld;

_Alignas (char) short int sc;  
_Alignas (short int) short int ss;
_Alignas (int) short int si;
_Alignas (long int) short int sl;
_Alignas (long long int) short int sll;
_Alignas (float) short int sf;
_Alignas (double) short int sd;
_Alignas (long double) short int sld;

_Alignas (char) int ic;  
_Alignas (short int) int is;  
_Alignas (int) int ii;
_Alignas (long int) int il;
_Alignas (long long int) int ill;
_Alignas (float) int if_;
_Alignas (double) int id;
_Alignas (long double) int ild;

_Alignas (char) long int lic;  
_Alignas (short int) long int lis;  
_Alignas (int) long int lii;  
_Alignas (long int) long int lil;
_Alignas (long long int) long int lill;
_Alignas (float) long int lif;  
_Alignas (double) long int lid;
_Alignas (long double) long int lild;

_Alignas (char) long long int llic;  
_Alignas (short int) long long int llis;  
_Alignas (int) long long int llii;  
_Alignas (long int) long long int llil;  
_Alignas (long long int) long long int llill;
_Alignas (float) long long int llif;  
_Alignas (double) long long int llid;
_Alignas (long double) long long int llild;

_Alignas (char) float fc;  
_Alignas (short int) float fs;  
_Alignas (int) float fi;
_Alignas (long int) float fl;
_Alignas (long long int) float fll;
_Alignas (float) float ff;
_Alignas (double) float fd;
_Alignas (long double) float fld;

_Alignas (char) double dc;  
_Alignas (short int) double ds;  
_Alignas (int) double di;  
_Alignas (long int) double dl;  
_Alignas (long long int) double dll;
_Alignas (float) double df;  
_Alignas (double) double dd;
_Alignas (long double) double dld;

_Alignas (char) long double ldc;  
_Alignas (short int) long double lds;  

#if __SIZEOF_LONG_DOUBLE__ == 12
 
#  define X(T)   short
#else
#  define X(T)   T
#endif

_Alignas (X (int)) long double ldi;  
_Alignas (X (long int)) long double ldl;  
_Alignas (X (long long int)) long double ldll;  
_Alignas (X (float)) long double ldf;  
_Alignas (X (double)) long double ldd;  
_Alignas (long double) long double ldld;

