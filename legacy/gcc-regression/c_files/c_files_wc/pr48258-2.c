 
 
 
 
 
 
 
 

#include <stddef.h>

#ifndef SIZE
#define SIZE 1024
#endif

double values[SIZE] __attribute__((__aligned__(32)));

double
vector_sum (void)
{
  size_t i;
  double sum = 0.0;

  for (i = 0; i < SIZE; i++)
    sum += values[i];

  return sum;
}

double
vector_min (void)
{
  size_t i;
  double min = values[0];

  for (i = 0; i < SIZE; i++)
    min = __builtin_fmin (min, values[i]);

  return min;
}

double
vector_max (void)
{
  size_t i;
  double max = values[0];

  for (i = 0; i < SIZE; i++)
    max = __builtin_fmax (max, values[i]);

  return max;
}

