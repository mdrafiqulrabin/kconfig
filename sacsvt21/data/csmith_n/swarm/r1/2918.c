/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   --no-argc --arrays --bitfields --no-comma-operators --no-compound-assignment --no-consts --divs --embedded-assigns --pre-incr-operator --no-pre-decr-operator --post-incr-operator --no-post-decr-operator --no-unary-plus-operator --jumps --longlong --no-int8 --no-uint8 --no-float --no-math64 --no-inline-function --muls --no-safe-math --no-packed-struct --no-paranoid --no-pointers --structs --no-unions --volatiles --volatile-pointers --no-const-pointers --global-variabless --no-builtins
 * Seed:      1866093956
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   unsigned f0 : 16;
   signed f1 : 5;
   volatile unsigned f2 : 19;
};

/* --- GLOBAL VARIABLES --- */
static volatile struct S0 g_2 = {172,1,33};/* VOLATILE GLOBAL g_2 */
static volatile struct S0 g_3[4][1] = {{{58,-1,625}},{{188,-3,588}},{{58,-1,625}},{{188,-3,588}}};
static struct S0 g_4 = {196,-3,288};/* VOLATILE GLOBAL g_4 */


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_4
 * writes: g_3
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    g_3[2][0] = g_2;
    g_3[3][0] = g_3[2][0];
    return g_4;
}




/* ---------------------------------------- */
int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_2.f2, "g_2.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
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
   depth: 0, occurrence: 0
   depth: 1, occurrence: 3
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 3
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 3
breakdown:
   indirect level: 0, occurrence: 3
XXX full-bitfields structs in the program: 3
breakdown:
   indirect level: 0, occurrence: 3
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 2
XXX times a bitfields struct on RHS: 3
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 5

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 20

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

