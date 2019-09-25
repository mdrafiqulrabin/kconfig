 
 
 
 

struct s0 { };  
struct s0;
struct s0 { };  

struct s1 { };  
struct s1 { };  

struct s2 { int a : 1; };  
struct s2 { int a : 1; };  

struct s3 { };  
struct s3 { int a : 1; };  

struct s4 { int a : 1; };  
struct s4 { };  

struct s5 { int a : 1; };
struct s5;

struct s6;
struct s6 { int a : 1; };

struct s7;
struct s7 { };

