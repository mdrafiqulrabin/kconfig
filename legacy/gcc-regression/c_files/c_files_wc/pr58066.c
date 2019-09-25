 
 
 
 

 
static __thread char ccc1;
void* foo()
{
 return &ccc1;
}

__thread char ccc2;
void* goo()
{
 return &ccc2;
}

 
 

