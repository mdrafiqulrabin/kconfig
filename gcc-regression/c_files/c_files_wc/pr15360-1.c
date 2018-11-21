 
 
 
 

static int a;
static int a;
extern int a;
static int a;

static int b;
extern int b = 1;  
static int b;
static int b;

static int c;  
int c;  

static int d;  
int d = 1;  

void foo (void) { extern int e = 1; }  

