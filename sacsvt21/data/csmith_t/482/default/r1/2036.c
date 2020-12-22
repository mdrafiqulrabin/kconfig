/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      52518314
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S1 {
   volatile int32_t  f0;
   const signed f1 : 31;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static volatile int16_t g_2[5][3][1] = {{{0x9CECL},{(-9L)},{(-1L)}},{{(-1L)},{(-9L)},{0x9CECL}},{{0xDA62L},{0x9CECL},{(-9L)}},{{(-1L)},{(-1L)},{(-9L)}},{{0x9CECL},{0xDA62L},{0x9CECL}}};
static volatile int32_t g_3 = 1L;/* VOLATILE GLOBAL g_3 */
static volatile int32_t g_4 = 9L;/* VOLATILE GLOBAL g_4 */
static int32_t g_5 = 0x247ADF1AL;
static int32_t g_13 = 3L;
static int32_t *g_12[4] = {&g_13,&g_13,&g_13,&g_13};
static struct S1 g_14 = {0L,43899};/* VOLATILE GLOBAL g_14 */


/* --- FORWARD DECLARATIONS --- */
static struct S1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5 g_4 g_14
 * writes: g_5 g_4 g_12
 */
static struct S1  func_1(void)
{ /* block id: 0 */
    if (g_2[2][1][0])
    { /* block id: 1 */
        int32_t *l_10 = &g_5;
        for (g_5 = 0; (g_5 > (-11)); g_5 = safe_sub_func_uint16_t_u_u(g_5, 2))
        { /* block id: 4 */
            int32_t *l_8 = (void*)0;
            int32_t *l_9[8] = {(void*)0,(void*)0,&g_5,(void*)0,(void*)0,&g_5,(void*)0,(void*)0};
            int32_t **l_11[9] = {(void*)0,&l_10,(void*)0,(void*)0,&l_10,(void*)0,(void*)0,&l_10,(void*)0};
            int i;
            g_4 &= 1L;
            g_12[1] = l_10;
        }
    }
    else
    { /* block id: 8 */
        for (g_5 = 0; g_5 < 4; g_5 += 1)
        {
            g_12[g_5] = (void*)0;
        }
    }
    return g_14;
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
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 80
XXX average alias set size: 1.8

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 71.4

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 2
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

