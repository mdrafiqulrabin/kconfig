 
#define FORCE   1
#define FLAG    1
int func (int resp, int flags)
{
  return (resp && (FORCE || (FLAG & flags)));
}

