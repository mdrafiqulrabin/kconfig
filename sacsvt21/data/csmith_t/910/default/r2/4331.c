/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1943647028
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   const volatile uint32_t  f0;
   volatile int32_t  f1;
   const volatile int64_t  f2;
};

/* --- GLOBAL VARIABLES --- */
static volatile union U1 g_3[3][6] = {{{0UL},{1UL},{18446744073709551615UL},{18446744073709551615UL},{1UL},{0UL}},{{18446744073709551615UL},{0UL},{18446744073709551615UL},{0UL},{18446744073709551615UL},{18446744073709551615UL}},{{1UL},{0UL},{0UL},{1UL},{1UL},{1UL}}};
static volatile union U1 * volatile g_2 = &g_3[1][3];/* VOLATILE GLOBAL g_2 */
static volatile union U1 * volatile * const  volatile g_4 = &g_2;/* VOLATILE GLOBAL g_4 */


/* --- FORWARD DECLARATIONS --- */
static int64_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_4 g_3.f0
 * writes: g_2
 */
static int64_t  func_1(void)
{ /* block id: 0 */
    (*g_4) = g_2;
    return g_3[1][3].f0;
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
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_3[i][j].f0, "g_3[i][j].f0", print_hash_value);
            transparent_crc(g_3[i][j].f1, "g_3[i][j].f1", print_hash_value);
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
   depth: 1, occurrence: 3

XXX total number of pointers: 2

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 0
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 0
XXX times a non-volatile is write: 0
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 0

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

