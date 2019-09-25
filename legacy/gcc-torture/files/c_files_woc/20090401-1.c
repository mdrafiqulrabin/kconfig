 
 

#define lit_from_int(in) ((in<0)?(((-in)<<1)|1):(in<<1))

void init_clause(int *literals, int size, int *lits)
{
  int i;
  for(i=0; i < size; i++)
    lits[i] = lit_from_int(literals[i]);
}

