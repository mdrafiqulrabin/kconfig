 
 
 
 

struct request
{
 unsigned long nr_sectors;
};

struct request_list
{
 int count;
};

struct request_queue
{
 struct request_list rq;
 volatile int nr_sectors;
 int max_queue_sectors;
 int can_throttle;
 unsigned long bounce_pfn;
};

typedef struct request_queue request_queue_t;

static inline int
blk_oversized_queue (request_queue_t* q)
{
  if (q->can_throttle)
    return q->nr_sectors > q->max_queue_sectors;
  return q->rq.count == 0;
}

struct request*
get_request (request_queue_t* q, int rw)
{
  struct request* rq = ((void*)0);
  struct request_list *rl = &q->rq;

  if (blk_oversized_queue (q))
    {
      if ((rw == 1) || (rw == 0))
	return ((void*)0);
      if (blk_oversized_queue (q))
	return ((void*)0);
    }

  return (void*)-100;
}

