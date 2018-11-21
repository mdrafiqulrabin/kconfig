 
 

__attribute((noinline,noclone))
char to_ascii (unsigned i)
{
    static const char __memx code_tab[] = "0123456789";
    return code_tab[i];
}

int main()
{
  if (to_ascii (2) != '2')
    __builtin_abort();

  return 0;
}

