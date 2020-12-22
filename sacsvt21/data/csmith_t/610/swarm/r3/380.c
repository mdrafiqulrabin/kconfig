/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --no-bitfields --no-comma-operators --no-compound-assignment --no-consts --divs --embedded-assigns --no-pre-incr-operator --pre-decr-operator --post-incr-operator --no-post-decr-operator --no-unary-plus-operator --jumps --longlong --int8 --no-uint8 --float --math64 --no-inline-function --no-muls --no-safe-math --packed-struct --paranoid --pointers --no-structs --unions --volatiles --volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      2589880106
 */

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static float g_3 = 0x6.2BA394p-14;
static int16_t g_6 = 0x7F75L;
static int32_t g_8 = (-1L);


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static int32_t * func_4(uint16_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_8
 * writes: g_3
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    float *l_2 = &g_3;
    int32_t *l_10 = (void*)0;
    int32_t **l_9 = &l_10;
    (*l_2) = (-0x1.Cp+1);
    (*l_9) = func_4(g_6);
    /* statement id: 4 */
    assert (l_10 == &g_8);
    return (**l_9);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * func_4(uint16_t  p_5)
{ /* block id: 2 */
    int32_t *l_7[2][4][7];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
                l_7[i][j][k] = &g_8;
        }
    }
    return l_7[1][0][2];
    /* statement id: 3 */
    //assert (func_4_rv == &g_8);
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc_bytes (&g_3, sizeof(g_3), "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
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
   depth: 1, occurrence: 5
   depth: 2, occurrence: 1

XXX total number of pointers: 4

XXX times a variable address is taken: 3
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
   level: 2, occurrence: 2
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 25
XXX average alias set size: 1.25

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 4
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

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

