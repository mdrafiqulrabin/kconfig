 
 
 
#define abs(x) x > 0 ? x : -x
extern double fabs (double);

int a (int x) {
	return (abs(x)) >= 0;
}

int b (int x) {
	return (abs(x)) == 0;
}

int c (int x) {
	return (abs(x)) != 0;
}

int d (int x) {
	return 0 != (abs(x));
}

int e (int x) {
	return 0 == (abs(x));
}

int f (int x) {
	return 0 <= (abs(x));
}

int g (int x) {
	return 0 > (abs(x));
}

int h (float x) {
	return 0.0 > fabs(x);
}

int i (float x) {
	return fabs(x) == -0.0;
}
 

