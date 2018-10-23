 

#include <stdbool.h>

bool x;
unsigned char y;

void
fn (void)
{
  x = y & 0x1 ? 1 : 0;
}

