 
 

extern int N_words;
typedef struct DIS_node_struct DIS_node;
typedef struct CON_list_struct CON_list;

struct DIS_node_struct
{
  CON_list *cl;
};

void
build_DIS_CON_tree (void)
{
  int w;
  DIS_node *dnroot, *dn;
  CON_list *child, *xchild;
  for (w = 0; w < N_words; w++)
    {
      if (dnroot == ((void *) 0))
        {
          dnroot = dn;
          for (child = dn->cl; child != ((void *) 0); child = xchild)
            {
            }
        }
    }
}


