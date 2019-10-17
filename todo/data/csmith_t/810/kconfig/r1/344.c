/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --no-bitfields --no-comma-operators --no-compound-assignment --no-consts --divs --no-embedded-assigns --pre-incr-operator --pre-decr-operator --no-post-incr-operator --no-post-decr-operator --unary-plus-operator --no-jumps --longlong --int8 --uint8 --float --no-math64 --no-inline-function --muls --safe-math --packed-struct --paranoid --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --no-const-pointers --global-variabless --no-builtins
 * Seed:      3470424624
 */

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 8L;
static uint16_t g_3[8] = {0x4C3CL,0UL,0x4C3CL,0x4C3CL,0UL,0x4C3CL,0x4C3CL,0UL};


/* --- FORWARD DECLARATIONS --- */
static float  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes: g_2
 */
static float  func_1(void)
{ /* block id: 0 */
    g_2 = (-1L);
    for (g_2 = 7; (g_2 >= 2); g_2 -= 1)
    { /* block id: 4 */
        return g_3[3];
    }
    return g_3[2];
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
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 8; i = i + 1)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
********************* end of statistics **********************/

