/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-argc --arrays --bitfields --no-comma-operators --no-compound-assignment --no-consts --no-divs --no-embedded-assigns --pre-incr-operator --pre-decr-operator --no-post-incr-operator --post-decr-operator --no-unary-plus-operator --no-jumps --no-longlong --no-int8 --uint8 --float --math64 --inline-function --muls --safe-math --no-packed-struct --paranoid --pointers --structs --unions --volatiles --no-volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      3996352456
 */


#define NO_LONGLONG

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_5[3] = {(-10),(-10),(-10)};
static int32_t *g_4 = &g_5[2];
static float g_9 = 0x1.7D6512p-3;


/* --- FORWARD DECLARATIONS --- */
inline static uint16_t  func_1(void);
inline static int32_t * func_2(int32_t * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_5
 * writes: g_5 g_4 g_9
 */
inline static uint16_t  func_1(void)
{ /* block id: 0 */
    int32_t **l_7 = &g_4;
    float *l_8 = &g_9;
    (*l_7) = func_2(g_4);
    (*l_8) = (**l_7);
    (**l_7) = g_5[1];
    return g_5[0];
}


/* ------------------------------------------ */
/* 
 * reads : g_4
 * writes: g_5
 */
inline static int32_t * func_2(int32_t * p_3)
{ /* block id: 1 */
    uint8_t l_6 = 0x2D;
    (*g_4) = l_6;
    return &g_5[2];
    /* statement id: 3 */
    //assert ((func_2_rv >= &g_5[0] && func_2_rv <= &g_5[2]));
}




/* ---------------------------------------- */
int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i = i + 1)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc_bytes (&g_9, sizeof(g_9), "g_9", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 9
   depth: 2, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 3

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
   level: 2, occurrence: 2
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 9
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 6

XXX percentage a fresh-made variable is used: 28.6
XXX percentage an existing variable is used: 71.4
********************* end of statistics **********************/

