 
 

 

__SIZE_TYPE__ cnfs_mapcntl(long pagesize)
{
     return ~(__SIZE_TYPE__)(pagesize - 1);
}

