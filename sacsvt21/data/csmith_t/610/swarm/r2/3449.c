/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --no-arrays --no-bitfields --no-comma-operators --compound-assignment --no-consts --no-divs --embedded-assigns --no-pre-incr-operator --no-pre-decr-operator --post-incr-operator --no-post-decr-operator --unary-plus-operator --no-jumps --longlong --no-int8 --no-uint8 --float --no-math64 --inline-function --no-muls --no-safe-math --no-packed-struct --no-paranoid --no-pointers --no-structs --unions --volatiles --no-volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      3606397390
 */

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U2 {
   volatile int32_t  f0;
   int32_t  f1;
   uint16_t  f2;
   volatile int32_t  f3;
   float  f4;
};

/* --- GLOBAL VARIABLES --- */
static volatile uint16_t g_2 = 65535UL;/* VOLATILE GLOBAL g_2 */
static union U2 g_3 = {0L};/* VOLATILE GLOBAL g_3 */


/* --- FORWARD DECLARATIONS --- */
inline static union U2  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_3.f1
 * writes: g_3.f3 g_3.f1
 */
inline static union U2  func_1(void)
{ /* block id: 0 */
    uint32_t l_4 = 0x8FDEB772L;
    if (g_2)
    { /* block id: 1 */
        return g_3;
    }
    else
    { /* block id: 3 */
        g_3.f3 = 1L;
        l_4 = (-0x1.3p+1);
        g_3.f1 |= ((uint16_t)((int16_t)(~0xFEB9E9D6L) << (int16_t)10) << (uint16_t)(0x34172034L == 0UL));
    }
    return g_3;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3.f0, "g_3.f0", print_hash_value);
    transparent_crc(g_3.f1, "g_3.f1", print_hash_value);
    transparent_crc(g_3.f2, "g_3.f2", print_hash_value);
    transparent_crc(g_3.f3, "g_3.f3", print_hash_value);
    transparent_crc_bytes (&g_3.f4, sizeof(g_3.f4), "g_3.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
XXX total union variables: 1

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 8
   depth: 4, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 4

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

