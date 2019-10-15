 
 

struct color { int i; };  
static const struct color col;
struct color * f(void)
{
    return (struct color *) &col;
}

struct color { int j; };  

