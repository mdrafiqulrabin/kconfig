/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-argc --arrays --no-bitfields --comma-operators --no-compound-assignment --consts --no-divs --embedded-assigns --pre-incr-operator --pre-decr-operator --post-incr-operator --no-post-decr-operator --no-unary-plus-operator --jumps --longlong --no-int8 --uint8 --float --no-math64 --no-inline-function --no-muls --safe-math --packed-struct --no-paranoid --pointers --structs --no-unions --no-volatiles --no-volatile-pointers --no-const-pointers --global-variabless --no-builtins
 * Seed:      1545373870
 */

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   float  f0;
   const int16_t  f1;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static int32_t g_3[3][2] = {{0L,(-5L)},{(-5L),0L},{(-5L),(-5L)}};
static struct S0 g_9 = {0xE.C5D9B4p-48,0xF934L};
static int32_t **g_10[3] = {(void*)0,(void*)0,(void*)0};


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);
static uint32_t  func_5(struct S0  p_6, int32_t * p_7, int32_t ** p_8);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_9 g_10
 * writes: g_3
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3[1][1];
    int32_t **l_4 = &l_2;
    (*l_4) = l_2;
    (**l_4) = (g_3[0][1] ^ func_5(g_9, &g_3[1][1], g_10[2]));
    return g_9;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static uint32_t  func_5(struct S0  p_6, int32_t * p_7, int32_t ** p_8)
{ /* block id: 2 */
    float *l_11[8];
    int32_t l_12 = 2L;
    int i;
    for (i = 0; i < 8; i++)
        l_11[i] = &g_9.f0;
    l_12 = p_6.f0;
    return l_12;
}




/* ---------------------------------------- */
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc_bytes (&g_9.f0, sizeof(g_9.f0), "g_9.f0", print_hash_value);
    transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 7
   depth: 5, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 1
   depth: 2, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 6

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
   level: 2, occurrence: 1
XXX number of pointers point to pointers: 3
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 44.4
XXX percentage an existing variable is used: 55.6
********************* end of statistics **********************/

