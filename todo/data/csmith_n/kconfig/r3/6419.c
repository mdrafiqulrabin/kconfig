/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --bitfields --comma-operators --compound-assignment --consts --divs --embedded-assigns --pre-incr-operator --pre-decr-operator --no-post-incr-operator --post-decr-operator --unary-plus-operator --jumps --longlong --int8 --uint8 --float --math64 --inline-function --muls --no-safe-math --packed-struct --no-paranoid --pointers --structs --unions --volatiles --volatile-pointers --const-pointers --global-variabless --builtins
 * Seed:      372978427
 */

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
};

/* --- GLOBAL VARIABLES --- */
static const uint32_t g_11[7][5] = {{0x076FDA02L,2UL,0x076FDA02L,4294967294UL,2UL},{0x6C382506L,1UL,4294967294UL,0x6C382506L,4294967294UL},{0x6C382506L,0x6C382506L,0UL,2UL,1UL},{0x076FDA02L,1UL,4294967294UL,4294967294UL,1UL},{1UL,1UL,0x076FDA02L,1UL,4294967294UL},{2UL,1UL,0UL,1UL,2UL},{0x076FDA02L,0x6C382506L,1UL,4294967294UL,0x6C382506L}};
static union U1 g_27[5] = {{{9UL}},{{9UL}},{{9UL}},{{9UL}},{{9UL}}};
static int32_t g_28 = 2L;


/* --- FORWARD DECLARATIONS --- */
static int64_t  func_26(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_28 g_11
 * writes: g_28
 */
static int64_t  func_26(void)
{ /* block id: 36 */
    int64_t l_29 = 1L;
    for (g_28 = 1; (g_28 <= 4); g_28 += 1)
    { /* block id: 39 */
        return g_11[4][3];
    }
    return l_29;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_26();
    for (i = 0; i < 7; i = i + 1)
    {
        for (j = 0; j < 5; j = j + 1)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i = i + 1)
    {
        transparent_crc(g_27[i].f0.f0, "g_27[i].f0.f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_28, "g_28", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 7
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
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 21
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 35
XXX percentage an existing variable is used: 65
********************* end of statistics **********************/

