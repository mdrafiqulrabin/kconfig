 
 

void uw_init_context_1 (void *);
void _Unwind_ForcedUnwind (void)
{
  uw_init_context_1 (__builtin_dwarf_cfa ());
}

