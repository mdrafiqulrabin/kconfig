 
 

int
__attribute__((noinline))
test(char *a)
{
  if (__builtin_strstr (a, "DROP CONVERSION") == a)
    return 1;

  return 0;
}

int main(int argc, char **argv)
{
  return test ("x");
}

