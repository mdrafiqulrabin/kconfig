 

void bar (unsigned int);

void
foo (void)
{
  char buf[1] = { 3 };
  const char *p = buf;
  const char **q = &p;
  unsigned int ch;
  switch (**q)
    {
    case 1:  ch = 5; break;
    case 2:  ch = 4; break;
    case 3:  ch = 3; break;
    case 4:  ch = 2; break;
    case 5:  ch = 1; break;
    default: ch = 0; break;
    }
  bar (ch);
}

