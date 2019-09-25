 

char d [5];

__extension__ typedef __SIZE_TYPE__ size_t;

void* memcpy (void*, const void*, size_t);
extern char* strcpy (char*, const char*);

void f (int i, int j)
{
  strcpy (d, j ? "12345" : "123456");    
}

void g (void *p)
{
  extern unsigned n;
  if (n < 17 || 32 < n) n = 7;

  memcpy (d, p, n);    
};

