 
 
 
 

struct initial_sp
{
  void *sp;
  long len;
};
__thread 
struct initial_sp __morestack_initial_sp;
void bar (void *);
void
foo ()
{
  bar (&__morestack_initial_sp.len);
}

