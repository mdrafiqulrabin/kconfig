 
 
 

struct s {
  char a;
    int b;
};

__attribute__((naked))
void foo () {
  struct s x = {};  
}

