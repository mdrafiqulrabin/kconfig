 

 

#define IGNORE_WHERE_MACRO_IS_LONGER_THAN_31_CHARS  _Pragma("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
__attribute__((deprecated)) void f();
int main() {
    IGNORE_WHERE_MACRO_IS_LONGER_THAN_31_CHARS
    f();
}

