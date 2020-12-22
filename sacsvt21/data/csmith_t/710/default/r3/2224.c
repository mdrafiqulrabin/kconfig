/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3893384218
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U2 {
   uint32_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   const int16_t  f3;
   const int64_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static const int8_t g_2 = 0x58L;
static int32_t * volatile g_3 = (void*)0;/* VOLATILE GLOBAL g_3 */
static int32_t g_5 = 5L;
static int32_t * volatile g_4[8] = {&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5};
static int32_t * volatile g_6 = &g_5;/* VOLATILE GLOBAL g_6 */
static int32_t g_9 = 0x83CC47D1L;
static union U2 g_10[4][5][1] = {{{{0UL}},{{1UL}},{{18446744073709551610UL}},{{0x061A6520L}},{{1UL}}},{{{0x061A6520L}},{{18446744073709551610UL}},{{1UL}},{{0UL}},{{0UL}}},{{{1UL}},{{18446744073709551610UL}},{{0x061A6520L}},{{1UL}},{{0x061A6520L}}},{{{18446744073709551610UL}},{{1UL}},{{0UL}},{{0UL}},{{1UL}}}};


/* --- FORWARD DECLARATIONS --- */
static union U2  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_6 g_5 g_9 g_10
 * writes: g_5 g_4 g_9
 */
static union U2  func_1(void)
{ /* block id: 0 */
    int32_t *l_7 = &g_5;
    int32_t *l_8 = &g_9;
    (*g_6) |= g_2;
    (*l_7) ^= 1L;
    for (g_5 = 0; g_5 < 8; g_5 += 1)
    {
        g_4[g_5] = &g_5;
    }
    (*l_8) ^= (*g_6);
    return g_10[2][1][0];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_10[i][j][k].f0, "g_10[i][j][k].f0", print_hash_value);
                transparent_crc(g_10[i][j][k].f1, "g_10[i][j][k].f1", print_hash_value);
                transparent_crc(g_10[i][j][k].f2, "g_10[i][j][k].f2", print_hash_value);
                transparent_crc(g_10[i][j][k].f3, "g_10[i][j][k].f3", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 1

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
   depth: 1, occurrence: 8

XXX total number of pointers: 5

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 6

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 9
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 40
XXX average alias set size: 1.2

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 5
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 80

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

