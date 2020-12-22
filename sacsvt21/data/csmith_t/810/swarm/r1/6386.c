/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --no-bitfields --no-comma-operators --compound-assignment --no-consts --no-divs --embedded-assigns --pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --no-post-decr-operator --no-unary-plus-operator --no-jumps --no-longlong --int8 --no-uint8 --float --math64 --no-inline-function --no-muls --safe-math --packed-struct --no-paranoid --pointers --structs --unions --volatiles --no-volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      2306778028
 */


#define NO_LONGLONG

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_9[4] = {0x2B,0x2B,0x2B,0x2B};
static int32_t g_11 = 6;
static int32_t *g_10 = &g_11;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t * func_2(uint32_t  p_3, int32_t  p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_10 g_11
 * writes: g_9 g_10
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_5 = (-4);
    uint32_t l_6 = 0xFE04822B;
    uint32_t *l_7 = (void*)0;
    uint16_t l_8 = 0xF07B;
    int32_t **l_12 = &g_10;
    (*l_12) = func_2((l_5 = (l_6 = l_5)), l_8);
    return (*g_10);
}


/* ------------------------------------------ */
/* 
 * reads : g_10
 * writes: g_9
 */
static int32_t * func_2(uint32_t  p_3, int32_t  p_4)
{ /* block id: 3 */
    for (p_3 = 0; p_3 < 4; p_3 += 1)
    {
        g_9[p_3] = 0x5C;
    }
    return g_10;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i = i + 1)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_11, "g_11", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
XXX total union variables: 0

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 4
   depth: 5, occurrence: 1

XXX total number of pointers: 4

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 25
XXX average alias set size: 1

XXX times a non-volatile is read: 5
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

XXX percentage a fresh-made variable is used: 57.1
XXX percentage an existing variable is used: 42.9
********************* end of statistics **********************/

