 
 
 

typedef union {
  long long l;
  double d;
} db_number;

double test(double x[3]) {
  double th = x[1] + x[2];
  if (x[2] != th - x[1]) {
    db_number thdb;
    thdb.d = th;
    thdb.l++;
    th = thdb.d;
  }
  return x[0] + th;
}

 

