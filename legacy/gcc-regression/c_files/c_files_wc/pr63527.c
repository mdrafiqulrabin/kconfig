 
 
 

struct cache_file
{
  char magic[sizeof "ld.so-1.7.0" - 1];
  unsigned int nlibs;
};
typedef unsigned int size_t;
size_t cachesize __attribute__ ((visibility ("hidden")));
struct cache_file *cache __attribute__ ((visibility ("hidden")));
extern int __munmap (void *__addr, size_t __len);
void
_dl_unload_cache (void)
{
  if (cache != ((void *)0) && cache != (struct cache_file *) -1)
    {
      __munmap (cache, cachesize);
      cache = ((void *)0) ;
    }
}

 
 

