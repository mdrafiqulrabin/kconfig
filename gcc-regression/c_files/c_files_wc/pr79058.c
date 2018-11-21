 
 
 
 

enum { NILFS_SEGMENT_USAGE_ACTIVE, NILFS_SEGMENT_USAGE_DIRTY } a;

void fn2 (long long);

void fn1() {
  int b = a & 1 << NILFS_SEGMENT_USAGE_DIRTY;
  fn2 (b ? (long long) -1 : 0);
}

