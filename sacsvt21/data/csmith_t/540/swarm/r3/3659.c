/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-argc --arrays --no-bitfields --comma-operators --compound-assignment --no-consts --divs --no-embedded-assigns --no-pre-incr-operator --no-pre-decr-operator --no-post-incr-operator --post-decr-operator --no-unary-plus-operator --jumps --no-longlong --int8 --no-uint8 --no-float --math64 --no-inline-function --muls --safe-math --packed-struct --no-paranoid --pointers --structs --no-unions --volatiles --volatile-pointers --no-const-pointers --global-variabless --no-builtins
 * Seed:      496195798
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_3[2][2] = {{1,1},{1,1}};
static int32_t * volatile g_2 = &g_3[0][0];/* VOLATILE GLOBAL g_2 */


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes: g_2
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t * volatile *l_4 = &g_2;
    (*l_4) = g_2;
    return (*g_2);
}




/* ---------------------------------------- */
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i = i + 1)
    {
        for (j = 0; j < 2; j = j + 1)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 2

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
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 40

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

