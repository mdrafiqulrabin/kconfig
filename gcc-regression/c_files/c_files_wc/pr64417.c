 
 
 

struct foo { int x; char y[]; };
struct bar { struct foo f; };
struct baz { struct bar b; };

struct foo a1 = { 1, "abc" };
struct foo a2 = { 1, { "abc" } };
struct foo b1[] = { { 1, "abc" } };  
struct foo b2[] = { { 1, { "abc" } } };  
struct bar c1[] = { { { 1, "abc" } } };  
struct bar c2[] = { { { 1, { "abc" } } } };  
struct baz d1[] = { { { { 1, "abc" } } } };  
struct baz d2[] = { { { { 1, { "abc" } } } } };  

