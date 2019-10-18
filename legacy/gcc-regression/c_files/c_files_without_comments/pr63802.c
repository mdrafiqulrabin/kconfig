 
 
 

#define __round_mask(x, y) ((__typeof__(x))((y)-1))
#define round_up(x, y) ((((x)-1) | __round_mask(x, y))+1)

struct test_struct {
  unsigned long a;
  int b;
} __attribute__((__aligned__(64)));

char a[200];

int main ()
{
  volatile int x = ((struct test_struct*)(round_up((unsigned long)a, 64) + 16))->b;
  volatile int y = ((struct test_struct*)(round_up((unsigned long)a, 64) + 15))->b;

  return 0;
}

 

