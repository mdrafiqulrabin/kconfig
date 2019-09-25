 
 
 
 

typedef struct S
{
  int a;
  int sum;
  int delta;
} S;

S gs;
int global_opt (int max)
{
  while (gs.sum < max)
    gs.sum += gs.delta;
  return gs.a;
}

