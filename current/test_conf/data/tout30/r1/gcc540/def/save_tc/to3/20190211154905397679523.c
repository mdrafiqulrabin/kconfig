/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2162145730
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_3[3][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
static int32_t g_5 = 0x6D058A83L;
static volatile int8_t g_9 = 0x8BL;/* VOLATILE GLOBAL g_9 */
static uint32_t g_10[3] = {0x14A5EA96L,0x14A5EA96L,0x14A5EA96L};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_10 g_5 g_3
 * writes: g_10 g_5
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_2 = (-1L);
    int32_t *l_4 = &g_5;
    int32_t *l_6 = &g_5;
    int32_t *l_7[5] = {&g_5,&g_5,&g_5,&g_5,&g_5};
    int32_t l_8[3];
    int i;
    for (i = 0; i < 3; i++)
        l_8[i] = 0x8D19C921L;
lbl_13:
    g_10[2]--;
    for (g_5 = 0; (g_5 <= 1); g_5 += 1)
    { /* block id: 4 */
        uint8_t l_14 = 7UL;
        for (l_2 = 1; (l_2 <= 4); l_2 += 1)
        { /* block id: 7 */
            if (l_2)
                goto lbl_13;
        }
        l_14--;
        for (l_2 = 1; (l_2 >= 0); l_2 -= 1)
        { /* block id: 13 */
            if (l_2)
                goto lbl_13;
        }
    }
    return g_3[2][1];
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
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 6
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
   depth: 1, occurrence: 7
   depth: 2, occurrence: 3

XXX total number of pointers: 3

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 31
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 7
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 2

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 54.5
XXX percentage an existing variable is used: 45.5
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

