/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1509980491
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = 0x2A8358BDL;
static int32_t g_7[3][1][2] = {{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}}};
static volatile int32_t g_8 = 0xF609B2B5L;/* VOLATILE GLOBAL g_8 */
static int32_t g_9 = 0L;
static volatile int32_t g_10 = 0x5EA6EDADL;/* VOLATILE GLOBAL g_10 */


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_7 g_8
 * writes: g_3 g_7 g_8 g_9 g_10
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3;
    int32_t *l_6[2];
    uint64_t l_12 = 0x0498D20B50F6B34CLL;
    int i;
    for (i = 0; i < 2; i++)
        l_6[i] = &g_7[0][0][0];
lbl_13:
    (*l_2) ^= 0x795010F7L;
    g_7[0][0][0] ^= ((*l_2) = (safe_add_func_uint16_t_u_u(g_3, 0x3A23L)));
    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
    { /* block id: 6 */
        uint32_t l_11 = 5UL;
        for (g_8 = 0; g_8 < 3; g_8 += 1)
        {
            for (g_9 = 0; g_9 < 1; g_9 += 1)
            {
                for (g_10 = 0; g_10 < 2; g_10 += 1)
                {
                    g_7[g_8][g_9][g_10] = 0xE8FE7528L;
                }
            }
        }
        l_12 &= (g_7[1][0][0] = (l_11 || g_8));
    }
    if (g_3)
        goto lbl_13;
    return (*l_2);
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
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
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

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 1
   depth: 3, occurrence: 2

XXX total number of pointers: 2

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 13

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 8
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 8
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 92.9

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 28.6
XXX percentage an existing variable is used: 71.4
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

