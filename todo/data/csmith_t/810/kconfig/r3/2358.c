/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --bitfields --no-comma-operators --compound-assignment --consts --divs --embedded-assigns --pre-incr-operator --pre-decr-operator --post-incr-operator --post-decr-operator --unary-plus-operator --jumps --no-longlong --int8 --uint8 --float --no-math64 --inline-function --muls --safe-math --packed-struct --paranoid --no-pointers --structs --unions --volatiles --volatile-pointers --const-pointers --global-variabless --builtins
 * Seed:      4056479410
 */


#define NO_LONGLONG

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   unsigned f0 : 2;
   volatile int32_t  f1;
   float  f2;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3[2][9][1] = {{{0},{0x5E1F6F08},{1},{1},{0x5E1F6F08},{0},{7},{0},{0x5E1F6F08}},{{1},{1},{0x5E1F6F08},{0},{7},{0},{0x5E1F6F08},{1},{1}}};
static union U1 g_34 = {4294967295U};/* VOLATILE GLOBAL g_34 */


/* --- FORWARD DECLARATIONS --- */
inline static union U1  func_27(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_34
 * writes: g_3
 */
inline static union U1  func_27(void)
{ /* block id: 36 */
    int32_t l_28 = 0xA445A8CC;
    int32_t l_29 = (-7);
    int32_t l_30[3];
    uint16_t l_31 = 1U;
    int i;
    for (i = 0; i < 3; i++)
        l_30[i] = 1;
    l_31++;
    for (l_29 = 0; l_29 < 2; l_29 += 1)
    {
        for (l_31 = 0; l_31 < 9; l_31 += 1)
        {
            for (l_28 = 0; l_28 < 1; l_28 += 1)
            {
                g_3[l_29][l_31][l_28] = 1;
            }
        }
    }
    return g_34;
    /* statement id: 39 */
    }




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_27();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 12
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 4

XXX total number of pointers: 0

XXX times a non-volatile is read: 19
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
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 36.4
XXX percentage an existing variable is used: 63.6
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

