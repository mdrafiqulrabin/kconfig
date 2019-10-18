 

const char* __attribute__ ((weak, alias ("f0_target")))
f0 (void);           

int f0_target;       


const char* __attribute__ ((weak, alias ("f1_target")))
f1 (void);           

void f1_target (int *p)    
{
  *p = 0;
}


const char* __attribute__ ((alias ("f2_target")))
f2 (void*);    

const char* f2_target (int i)    
{
  (void)&i;
  return 0;
}

int __attribute__ ((ifunc ("f3_resolver")))
f3 (void);           

void* f3_resolver (void)  
{
  return 0;
}


int __attribute__ ((ifunc ("f4_resolver")))
f4 (void);           

typedef void F4 (void);
F4* f4_resolver (void)  
{
  return 0;
}

const char* __attribute__ ((ifunc ("f5_resolver")))
f5 (void);

typedef const char* F5 (void);
F5* f5_resolver (void)
{
  return 0;
}

int __attribute__ ((ifunc ("f6_resolver")))
f6 (void);           

int f6_resolver (void)    
{
  return 0;
}

