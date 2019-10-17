/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-argc --arrays --no-bitfields --no-comma-operators --no-compound-assignment --consts --divs --no-embedded-assigns --pre-incr-operator --pre-decr-operator --post-incr-operator --post-decr-operator --unary-plus-operator --jumps --longlong --int8 --uint8 --float --no-math64 --no-inline-function --no-muls --safe-math --no-packed-struct --paranoid --pointers --no-structs --no-unions --no-volatiles --volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      15803864
 */

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_5[5] = {0x7A7C2039L,0x7A7C2039L,0x7A7C2039L,0x7A7C2039L,0x7A7C2039L};
static int32_t g_11 = 0L;


/* --- FORWARD DECLARATIONS --- */
static const uint32_t  func_1(void);
static const int32_t * func_2(int32_t * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_11 g_5
 * writes: g_11
 */
static const uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_4 = &g_5[0];
    const int32_t *l_10 = &g_5[0];
    const int32_t **l_9 = &l_10;
    (*l_9) = func_2(l_4);
    for (g_11 = 0; (g_11 < 13); ++g_11)
    { /* block id: 7 */
        uint8_t l_14 = 246UL;
        (*l_9) = &g_11;
        /* statement id: 8 */
        assert (l_10 == &g_11);
        (*l_9) = func_2(&g_5[4]);
        /* statement id: 9 */
        assert ((l_10 >= &g_5[0] && l_10 <= &g_5[4]));
        if (l_14)
            continue;
    }
    return g_5[4];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static const int32_t * func_2(int32_t * p_3)
{ /* block id: 1 */
    int32_t **l_6 = (void*)0;
    int32_t *l_8 = &g_5[1];
    int32_t **l_7 = &l_8;
    (*l_7) = &g_5[0];
    return &g_5[3];
    /* statement id: 3 */
    //assert ((func_2_rv >= &g_5[0] && func_2_rv <= &g_5[4]));
}




/* ---------------------------------------- */
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_11, "g_11", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 9
   depth: 2, occurrence: 3

XXX total number of pointers: 8

XXX times a variable address is taken: 9
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 3

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 3
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 12.5
XXX average alias set size: 1.12

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 9
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 28.6
XXX percentage an existing variable is used: 71.4
********************* end of statistics **********************/

