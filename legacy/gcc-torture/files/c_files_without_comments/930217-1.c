 
#if __INT_MAX__ < 2147483647
int a;
#else
double g ();
typedef union {
  struct {
    unsigned s:1, e:8, f:23;
  } u;
  float f;
} s;

f(x, n)
     float x;
{
  ((s *)&x)->u.e -= n;
  x = g((double)x, -n);
}
#endif

