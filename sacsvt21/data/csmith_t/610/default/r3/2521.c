/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2535766120
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_2[6][3] = {{0x108FL,65535UL,65535UL},{0xF0EAL,65535UL,0xE87DL},{65533UL,0x108FL,0xDD1EL},{0xF0EAL,0xF0EAL,0xDD1EL},{0x108FL,65533UL,0xE87DL},{65535UL,0xF0EAL,65535UL}};
static int32_t g_3 = 0x72D4EA68L;
static volatile int32_t g_4 = 0xC3EEE2FDL;/* VOLATILE GLOBAL g_4 */
static int32_t g_7 = (-1L);


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_7 g_2
 * writes: g_3 g_4 g_2 g_7
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int16_t l_10 = (-4L);
lbl_11:
    for (g_3 = 0; g_3 < 6; g_3 += 1)
    {
        for (g_4 = 0; g_4 < 3; g_4 += 1)
        {
            g_2[g_3][g_4] = 0xBBEFL;
        }
    }
    for (g_3 = 0; (g_3 <= (-1)); g_3 = safe_sub_func_int16_t_s_s(g_3, 5))
    { /* block id: 4 */
        for (g_7 = 0; (g_7 <= (-25)); --g_7)
        { /* block id: 7 */
            return l_10;
        }
        if (g_7)
            goto lbl_11;
    }
    return g_2[0][0];
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
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 5
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 6
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

