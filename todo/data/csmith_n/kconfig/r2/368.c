/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --no-bitfields --no-comma-operators --no-compound-assignment --no-consts --divs --no-embedded-assigns --pre-incr-operator --pre-decr-operator --post-incr-operator --no-post-decr-operator --unary-plus-operator --no-jumps --longlong --int8 --uint8 --float --no-math64 --no-inline-function --muls --safe-math --packed-struct --paranoid --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --no-const-pointers --global-variabless --no-builtins
 * Seed:      3379045768
 */

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_2 = 255UL;
static int8_t g_7[4] = {(-3L),(-3L),(-3L),(-3L)};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_7
 * writes: g_2
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_5 = 1UL;
    g_2 = 0x7.CFF0EAp+64;
    for (g_2 = 25; (g_2 >= 58); ++g_2)
    { /* block id: 4 */
        int16_t l_6 = (-4L);
        l_6 = l_5;
        for (l_6 = 0; (l_6 <= 3); l_6 += 1)
        { /* block id: 8 */
            int i;
            return g_7[l_6];
        }
        if (g_7[3])
            break;
        return g_7[2];
    }
    return l_5;
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
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
XXX total union variables: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

