 
 
typedef __SIZE_TYPE__ size_t;
extern void *malloc (size_t);

void *(*const foo) (size_t) = malloc;

void *test (void)
{
  return (*foo) (3);
}

