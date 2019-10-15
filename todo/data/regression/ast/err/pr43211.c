 

struct T;

struct S {
  void (*bar)(struct S);
};

void bar(struct T t) {}  

void foo(struct S *s)
{
  s->bar = bar;
}


