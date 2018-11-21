 
 
 

 
 
 
 

 
 

 
 
 


 
static inline int
blk_oversized_queue_0 (int* q)
{
  if (q[2])
    return q[1] == 5; 
  return (q[0] != 5);
}

int __attribute__ ((noinline))
get_request_0 (int* q, int rw)
{
  if (blk_oversized_queue_0 (q))
    {
      if ((rw == 1) || (rw == 0))
	return -33;
      return 0;
    }
  return -100;
}


 
static inline int
blk_oversized_queue_1 (int* q)
{
  if (q[2])
    return q[1] > 5; 
  return (q[0] > 5);
}

int __attribute__ ((noinline))
get_request_1 (int* q, int rw)
{
  if (blk_oversized_queue_1 (q))
    {
      if ((rw == 1) || (rw == 0))
	return -33;
      return 0;
    }
  return -100;
}


 
static inline int
blk_oversized_queue_2 (int* q)
{
  if (q[2])
    return q[1] > 5; 
  return (q[0] < 5);
}

int __attribute__ ((noinline))
get_request_2 (int* q, int rw)
{
  if (blk_oversized_queue_2 (q))
    {
      if ((rw == 1) || (rw == 0))
	return -33;
      return 0;
    }
  return -100;
}


 
static inline int
blk_oversized_queue_5 (int* q)
{
  if (q[2])
    return q[1] != 0; 
  return q[0] == 0;
}

int __attribute__ ((noinline))
get_request_5 (int* q, int rw)
{
  if (blk_oversized_queue_5 (q))
    {
      if ((rw == 1) || (rw == 0))
	return -33;
      return 0;
    }
  return -100;
}

