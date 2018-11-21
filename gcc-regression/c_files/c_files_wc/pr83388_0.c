 
 
 

enum { a } e(void);
struct C {
    int d;
} c;
long f;
void g(long);
static void i(_Bool h) {
    struct C *a = ({ ({ &c; }); });
    if (e()) {
	int b = a->d;
	g(f);
    }
}
void j(void) { i(a); }

