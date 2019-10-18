 
 

struct U9
{
  unsigned a[9];
};

struct U9 u9;

void
foo ()
{
  u9 = (struct U9) {
    .a = {
      0xFF,
      0xFF,
      0xFF,
      0xFF,
      0xFF,
      0xFF,
      0xFF,
      0xFF,
      0xFF
    }
  };
}

