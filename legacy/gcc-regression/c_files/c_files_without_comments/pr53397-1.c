 
 
 


double data[16384];
void prefetch_when_non_constant_step_is_invariant(int step, int n)
{
     int a;
     int b;
     for (a = 1; a < step; a++) {
        for (b = 0; b < n; b += 2 * step) {

          int i = 2*(b + a);
          int j = 2*(b + a + step);


          data[j]   = data[i];
          data[j+1] = data[i+1];
        }
     }
}

 
 


