/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --no-bitfields --comma-operators --compound-assignment --no-consts --no-divs --no-embedded-assigns --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --post-decr-operator --unary-plus-operator --jumps --longlong --int8 --uint8 --no-float --no-math64 --no-inline-function --muls --no-safe-math --packed-struct --paranoid --pointers --no-structs --no-unions --volatiles --no-volatile-pointers --no-const-pointers --global-variabless --builtins
 * Seed:      2868591968
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_8[8] = {(-8L),(-10L),(-8L),(-8L),(-10L),(-8L),(-8L),(-10L)};
static int32_t g_27 = 0L;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_26(void);
static int32_t * func_30(int32_t  p_31);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_27 g_8
 * writes: g_27
 */
static int32_t  func_26(void)
{ /* block id: 36 */
    for (g_27 = 0; (g_27 >= (-8)); g_27 -= 4)
    { /* block id: 39 */
        int32_t l_32 = (-1L);
        int32_t *l_35 = &g_27;
        int32_t **l_34 = &l_35;
        (*l_34) = func_30(l_32);
        /* statement id: 42 */
        assert (l_35 == &g_27 || l_35 == 0);
        for (l_32 = 6; (l_32 >= 2); l_32 -= 1)
        { /* block id: 45 */
            int i;
            return g_8[(l_32 + 1)];
        }
    }
    return g_27;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * func_30(int32_t  p_31)
{ /* block id: 40 */
    int32_t *l_33[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    return l_33[0][7];
    /* statement id: 41 */
    //assert (func_30_rv == &g_27 || func_30_rv == 0);
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_26();
    for (i = 0; i < 8; i = i + 1)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_27, "g_27", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 8
XXX total union variables: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 3

XXX total number of pointers: 3

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 66.7
XXX average alias set size: 1.67

XXX times a non-volatile is read: 25
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 38.1
XXX percentage an existing variable is used: 61.9
********************* end of statistics **********************/

