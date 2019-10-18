 
 

#include <limits.h>

 

int foo1 (short x) {
  return (double) x != 0;
   
}

int foo2 (short x) {
  return (float) x != 0;
   
}

int foo3 (int x) {
  return (double) x != 0;
   
}

 

void in_range (unsigned short x)
{
  {
    volatile int in_range_1;
    in_range_1 = (float) x > 100.0f;
     
  }

  {
    volatile int in_range_2;
    in_range_2 = (float) x < 100.0f;
     
  }

  {
    volatile int in_range_3;
    in_range_3 = (float) x > 100.5f;
     
  }

  {
    volatile int in_range_4;
    in_range_4 = (float) x < 100.5f;
     
  }

  {
    volatile int in_range_5;
    in_range_5 = (float) x == 100.0f;
     
  }

  {
    volatile int in_range_6;
    in_range_6 = (float) x != 100.0f;
     
  }

  {
    volatile int in_range_7;
    in_range_7 = (float) x == 100.5f;
     
  }

  {
    volatile int in_range_8;
    in_range_8 = (float) x != 100.5f;
     
  }
}

 

void out_range (unsigned short x)
{
  {
    volatile int out_range_1;
    out_range_1 = (float) x > -100.5f;
     
  }

  {
    volatile int out_range_2;
    out_range_2 = (float) x >= -100.5f;
     
  }

  {
    volatile int out_range_3;
    out_range_3 = (float) x < -100.5f;
     
  }

  {
    volatile int out_range_4;
    out_range_4 = (float) x <= -100.5f;
     
  }

  {
    volatile int out_range_5;
    out_range_5 = (float) x == -100.5f;
     
  }

  {
    volatile int out_range_6;
    out_range_6 = (float) x != -100.5f;
     
  }
}

 

void lo_bounds (unsigned short x)
{
  {
    volatile int lo_bounds_1;
    lo_bounds_1 = (float) x > 0x0;
     
  }

  {
    volatile int lo_bounds_2;
    lo_bounds_2 = (float) x >= 0x0;
     
  }

  {
    volatile int lo_bounds_3;
    lo_bounds_3 = (float) x < 0x0;
     
  }

  {
    volatile int lo_bounds_4;
    lo_bounds_4 = (float) x <= 0x0;
     
  }

  {
    volatile int lo_bounds_5;
    lo_bounds_5 = (float) x > 0x0 - 0.5f;
     
  }

  {
    volatile int lo_bounds_6;
    lo_bounds_6 = (float) x >= 0x0 - 0.5f;
     
  }

  {
    volatile int lo_bounds_7;
    lo_bounds_7 = (float) x < 0x0 - 0.5f;
     
  }

  {
    volatile int lo_bounds_8;
    lo_bounds_8 = (float) x <= 0x0 - 0.5f;
     
  }

  {
    volatile int lo_bounds_9;
    lo_bounds_9 = (float) x > 0x0 + 0.5f;
     
  }

  {
    volatile int lo_bounds_10;
    lo_bounds_10 = (float) x >= 0x0 + 0.5f;
     
  }

  {
    volatile int lo_bounds_11;
    lo_bounds_11 = (float) x < 0x0 + 0.5f;
     
  }

  {
    volatile int lo_bounds_12;
    lo_bounds_12 = (float) x <= 0x0 + 0.5f;
     
  }
}

void hi_bounds (unsigned short x)
{
  {
    volatile int hi_bounds_1;
    hi_bounds_1 = (float) x > USHRT_MAX;
     
  }

  {
    volatile int hi_bounds_2;
    hi_bounds_2 = (float) x >= USHRT_MAX;
     
  }

  {
    volatile int hi_bounds_3;
    hi_bounds_3 = (float) x < USHRT_MAX;
     
  }

  {
    volatile int hi_bounds_4;
    hi_bounds_4 = (float) x <= USHRT_MAX;
     
  }

  {
    volatile int hi_bounds_5;
    hi_bounds_5 = (float) x > USHRT_MAX - 0.5f;
     
  }

  {
    volatile int hi_bounds_6;
    hi_bounds_6 = (float) x >= USHRT_MAX - 0.5f;
     
  }

  {
    volatile int hi_bounds_7;
    hi_bounds_7 = (float) x < USHRT_MAX - 0.5f;
     
  }

  {
    volatile int hi_bounds_8;
    hi_bounds_8 = (float) x <= USHRT_MAX - 0.5f;
     
  }

  {
    volatile int hi_bounds_9;
    hi_bounds_9 = (float) x > USHRT_MAX + 0.5f;
     
  }

  {
    volatile int hi_bounds_10;
    hi_bounds_10 = (float) x >= USHRT_MAX + 0.5f;
     
  }

  {
    volatile int hi_bounds_11;
    hi_bounds_11 = (float) x < USHRT_MAX + 0.5f;
     
  }

  {
    volatile int hi_bounds_12;
    hi_bounds_12 = (float) x <= USHRT_MAX + 0.5f;
     
  }
}

 

void nonfinite (unsigned short x)
{
#define INFINITY __builtin_inff ()

  {
    volatile int nonfinite_1;
    nonfinite_1 = (float) x > INFINITY;
     
  }

  {
    volatile int nonfinite_2;
    nonfinite_2 = (float) x >= INFINITY;
     
  }

  {
    volatile int nonfinite_3;
    nonfinite_3 = (float) x < INFINITY;
     
  }

  {
    volatile int nonfinite_4;
    nonfinite_4 = (float) x <= INFINITY;
     
  }

  {
    volatile int nonfinite_5;
    nonfinite_5 = (float) x > -INFINITY;
     
  }

  {
    volatile int nonfinite_6;
    nonfinite_6 = (float) x >= -INFINITY;
     
  }

  {
    volatile int nonfinite_7;
    nonfinite_7 = (float) x < -INFINITY;
     
  }

  {
    volatile int nonfinite_8;
    nonfinite_8 = (float) x <= -INFINITY;
     
  }

#define QNAN __builtin_nanf ("0")

   

  {
    volatile int nonfinite_9;
    nonfinite_9 = (float) x == QNAN;
     
  }

  {
    volatile int nonfinite_10;
    nonfinite_10 = (float) x != QNAN;
     
  }
}

 
 

