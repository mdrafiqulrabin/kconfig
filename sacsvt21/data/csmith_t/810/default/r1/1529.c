/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      93935504
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2 = (-3L);/* VOLATILE GLOBAL g_2 */
static volatile int32_t g_3[1][2] = {{1L,1L}};
static volatile int32_t g_4 = (-10L);/* VOLATILE GLOBAL g_4 */
static int32_t g_5[2] = {0x638ECF54L,0x638ECF54L};


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_2 g_3
 * writes: g_5 g_4 g_2 g_3
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    for (g_5[0] = 0; (g_5[0] > 8); g_5[0] = safe_add_func_uint32_t_u_u(g_5[0], 1))
    { /* block id: 3 */
        for (g_4 = 0; g_4 < 1; g_4 += 1)
        {
            for (g_2 = 0; g_2 < 2; g_2 += 1)
            {
                g_3[g_4][g_2] = 0L;
            }
        }
        return g_2;
    }
    return g_3[0][1];
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
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: -1
breakdown:
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
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 7
XXX percentage of non-volatile access: 50

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
********************* end of statistics **********************/

