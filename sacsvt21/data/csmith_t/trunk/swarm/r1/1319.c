/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-argc --arrays --no-bitfields --comma-operators --compound-assignment --consts --divs --embedded-assigns --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --post-decr-operator --no-unary-plus-operator --no-jumps --no-longlong --int8 --no-uint8 --no-float --no-math64 --no-inline-function --no-muls --safe-math --no-packed-struct --paranoid --pointers --structs --unions --no-volatiles --volatile-pointers --no-const-pointers --global-variabless --no-builtins
 * Seed:      907873684
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_5[9] = {(-6),(-6),(-6),(-6),(-6),(-6),(-6),(-6),(-6)};
static int32_t g_7 = (-1);
static int32_t *g_6 = &g_7;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t * func_2(int32_t  p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_7
 * writes: g_5 g_6
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_4 = 0x4DD03248;
    int32_t **l_8[2];
    int i;
    for (i = 0; i < 2; i = i + 1)
        l_8[i] = &g_6;
    g_6 = func_2(l_4);
    return g_7;
}


/* ------------------------------------------ */
/* 
 * reads : g_6
 * writes: g_5
 */
static int32_t * func_2(int32_t  p_3)
{ /* block id: 1 */
    for (p_3 = 0; p_3 < 9; p_3 += 1)
    {
        g_5[p_3] = 0x534B;
    }
    return g_6;
    /* statement id: 3 */
    //assert (func_2_rv == &g_7);
}




/* ---------------------------------------- */
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i = i + 1)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_7, "g_7", print_hash_value);
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
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 3

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 7
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 40
XXX percentage an existing variable is used: 60
********************* end of statistics **********************/

