/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2232035144
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 0xF72D4EA6L;
static volatile uint16_t g_15 = 0UL;/* VOLATILE GLOBAL g_15 */
static union U0 g_18[7][1] = {{{0xEE76373AL}},{{0x5F07C70AL}},{{0x5F07C70AL}},{{0xEE76373AL}},{{0x5F07C70AL}},{{0x5F07C70AL}},{{0xEE76373AL}}};


/* --- FORWARD DECLARATIONS --- */
static union U0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_15 g_18
 * writes: g_2 g_15
 */
static union U0  func_1(void)
{ /* block id: 0 */
    int32_t l_6 = (-2L);
    int32_t *l_8 = &g_2;
    int32_t l_9 = 0x6EC17E5CL;
    int32_t *l_10 = &l_9;
    int32_t *l_11 = &g_2;
    int32_t *l_12 = &g_2;
    int32_t *l_13 = &l_9;
    int32_t *l_14 = &l_9;
lbl_7:
    for (g_2 = 0; (g_2 <= (-18)); --g_2)
    { /* block id: 3 */
        int32_t l_5 = 7L;
        if (l_5)
            break;
        if (g_2)
            continue;
        if (l_6)
            break;
        if (l_5)
            goto lbl_7;
    }
    ++g_15;
    return g_18[6][0];
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
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_18[i][j].f0, "g_18[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 11
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 6
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 85.7

XXX forward jumps: 1
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 4

XXX percentage a fresh-made variable is used: 71.4
XXX percentage an existing variable is used: 28.6
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

