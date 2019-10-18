 
 

 

__extension__ typedef __UINTPTR_TYPE__ uintptr_t;

int main(void)
{
 int var, *p = &var;
 return (double)(uintptr_t)(p);
}

