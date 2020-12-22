/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --no-bitfields --no-comma-operators --compound-assignment --consts --no-divs --no-embedded-assigns --pre-incr-operator --no-pre-decr-operator --post-incr-operator --post-decr-operator --no-unary-plus-operator --jumps --no-longlong --no-int8 --no-uint8 --float --math64 --no-inline-function --no-muls --safe-math --no-packed-struct --paranoid --no-pointers --structs --no-unions --volatiles --no-volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      1808083912
 */


#define NO_LONGLONG

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[6][2] = {{0x281D21F1,0},{0x831D26EC,0x281D21F1},{0,0},{0,0x281D21F1},{0x831D26EC,0},{0x281D21F1,0}};
static volatile int32_t g_3 = 0x3C407858;/* VOLATILE GLOBAL g_3 */
static int32_t g_4 = 0x25B054DB;


/* --- FORWARD DECLARATIONS --- */
static float  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_3 g_4 g_2
 */
static float  func_1(void)
{ /* block id: 0 */
    for (g_3 = 0; g_3 < 6; g_3 += 1)
    {
        for (g_4 = 0; g_4 < 2; g_4 += 1)
        {
            g_2[g_3][g_4] = 1;
        }
    }
    return g_2[4][0];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: -1
breakdown:
XXX total union variables: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
********************* end of statistics **********************/

