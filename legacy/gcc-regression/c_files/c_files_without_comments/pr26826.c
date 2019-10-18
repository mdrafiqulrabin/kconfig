 
 
 

int bar (int);

void foo(char* p, char c, int i)
{
    char a[2], *q=a+1;
    if (p && i)
        *p = q-a+bar(i);
    if (c)
        bar(i);
}

