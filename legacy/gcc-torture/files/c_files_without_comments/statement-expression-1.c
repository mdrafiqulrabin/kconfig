 

#define f(x) ({ unsigned tmp=x; tmp; })

unsigned foo(unsigned x) {
  return __builtin_constant_p(x) ? 0 : f(x);
}


