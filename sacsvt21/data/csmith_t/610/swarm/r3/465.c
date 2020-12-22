/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-argc --arrays --bitfields --no-comma-operators --compound-assignment --consts --no-divs --embedded-assigns --no-pre-incr-operator --pre-decr-operator --no-post-incr-operator --post-decr-operator --no-unary-plus-operator --no-jumps --longlong --no-int8 --no-uint8 --no-float --math64 --no-inline-function --no-muls --no-safe-math --packed-struct --paranoid --no-pointers --structs --no-unions --volatiles --no-volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      4273574286
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S1 {
   volatile unsigned f0 : 5;
   volatile signed f1 : 18;
   signed f2 : 3;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static uint32_t g_2 = 1UL;
static volatile struct S1 g_3[3][7] = {{{0,437,1},{1,39,-1},{1,39,-1},{0,437,1},{0,437,1},{1,39,-1},{1,39,-1}},{{4,-232,0},{2,364,1},{4,-232,0},{2,364,1},{4,-232,0},{2,364,1},{4,-232,0}},{{0,437,1},{0,437,1},{1,39,-1},{1,39,-1},{0,437,1},{0,437,1},{1,39,-1}}};
static volatile struct S1 g_4 = {0,498,-0};/* VOLATILE GLOBAL g_4 */


/* --- FORWARD DECLARATIONS --- */
static uint64_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_4.f2
 * writes: g_2 g_4
 */
static uint64_t  func_1(void)
{ /* block id: 0 */
    g_2 &= 0x9FB023EDL;
    g_4 = g_3[1][3];
    return g_4.f2;
}




/* ---------------------------------------- */
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 3; i = i + 1)
    {
        for (j = 0; j < 7; j = j + 1)
        {
            transparent_crc(g_3[i][j].f0, "g_3[i][j].f0", print_hash_value);
            transparent_crc(g_3[i][j].f1, "g_3[i][j].f1", print_hash_value);
            transparent_crc(g_3[i][j].f2, "g_3[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    transparent_crc(g_4.f1, "g_4.f1", print_hash_value);
    transparent_crc(g_4.f2, "g_4.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 2
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 3
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 2
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX full-bitfields structs in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 1
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 1

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 5

XXX total number of pointers: 0

XXX times a non-volatile is read: 0
XXX times a non-volatile is write: 1
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 25

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

