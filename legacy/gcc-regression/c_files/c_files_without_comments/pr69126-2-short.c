 

 

#define IGNORE_SHORT_MACRO  _Pragma("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
__attribute__((deprecated)) void f();
int main() {
    IGNORE_SHORT_MACRO
    f();
}

