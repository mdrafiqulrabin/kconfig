/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --argc --arrays --bitfields --no-comma-operators --compound-assignment --consts --divs --embedded-assigns --pre-incr-operator --pre-decr-operator --post-incr-operator --post-decr-operator --unary-plus-operator --jumps --longlong --int8 --uint8 --float --math64 --inline-function --muls --safe-math --packed-struct --paranoid --no-pointers --structs --unions --no-volatiles --no-volatile-pointers --const-pointers --global-variabless --no-builtins
 * Seed:      3305901040
 */

#include <float.h>
#include <math.h>
#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U2 {
   uint8_t  f0;
   uint64_t  f1;
   float  f2;
};

/* --- GLOBAL VARIABLES --- */
static union U2 g_2[4][3] = {{{7UL},{246UL},{7UL}},{{0x1AL},{1UL},{0x1AL}},{{7UL},{246UL},{7UL}},{{0x1AL},{1UL},{0x1AL}}};
static int32_t g_3 = 4L;
static int32_t g_4 = 0xCCDDD1D8L;


/* --- FORWARD DECLARATIONS --- */
inline static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_3 g_4 g_2
 */
inline static uint32_t  func_1(void)
{ /* block id: 0 */
    float l_5[1][6] = {{0x0.9p-1,0x0.9p-1,0x0.9p-1,0x0.9p-1,0x0.9p-1,0x0.9p-1}};
    int32_t l_6 = 0x4981FF29L;
    int32_t l_7 = 0x884CB8F6L;
    int i, j;
    for (g_3 = 0; g_3 < 4; g_3 += 1)
    {
        for (g_4 = 0; g_4 < 3; g_4 += 1)
        {
            union U2 tmp = {0xF5L};
            g_2[g_3][g_4] = tmp;
        }
    }
    l_5[0][4] = 0xE.352F76p+21;
    l_7 &= l_6;
    return l_7;
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
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2[i][j].f0, "g_2[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 6

XXX total number of pointers: 0

XXX times a non-volatile is read: 2
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
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

