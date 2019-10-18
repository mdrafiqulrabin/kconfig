 
 

void test1(short * __restrict__ x, short * __restrict__ y, short * __restrict__ z)
{
    int i;
    for (i=127; i>=0; i--) {
	x[i] = y[127-i] + z[127-i];
    }
}

 

