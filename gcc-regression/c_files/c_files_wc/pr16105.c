 
 

#define VECTOR_SIZE 512

extern void check(const float * __restrict__ v);

void square(const float * __restrict__ a,
	    float * __restrict__ out)
{
    unsigned int i;
    for (i = 0; i < VECTOR_SIZE; i++) {
	float ai = a[i];
	float a2 = ai * ai;
	out[i] = a2; 
    }
    check(out);
}

 
 

