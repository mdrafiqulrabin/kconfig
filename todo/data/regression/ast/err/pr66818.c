 
 

struct dummy { int x __attribute__((aligned)); };
int array[__alignof__(struct dummy) == 4 ? 1 : -1];

