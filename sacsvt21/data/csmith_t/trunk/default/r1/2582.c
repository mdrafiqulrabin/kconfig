/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1554620114
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_4 = (-1L);
static int16_t g_5 = 0x8BE1L;
static int16_t g_6[3][8] = {{0x8421L,(-4L),0x2132L,0x2132L,(-4L),0x8421L,(-4L),0x2132L},{0x61D5L,(-4L),0x61D5L,0x8421L,0x8421L,0x61D5L,(-4L),0x61D5L},{0xCBEBL,0x8421L,0x2132L,0x8421L,0xCBEBL,0xCBEBL,0x8421L,0x2132L}};
static volatile uint32_t g_7 = 6UL;/* VOLATILE GLOBAL g_7 */


/* --- FORWARD DECLARATIONS --- */
static int64_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7
 * writes: g_7 g_4 g_5 g_6
 */
static int64_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = (void*)0;
    int32_t *l_3[9] = {&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4};
    int32_t l_10 = (-5L);
    int i;
    ++g_7;
    for (g_4 = 0; g_4 < 3; g_4 += 1)
    {
        for (g_5 = 0; g_5 < 8; g_5 += 1)
        {
            g_6[g_4][g_5] = (-9L);
        }
    }
    l_10 ^= 0x4AF12A83L;
    g_4 = 0x2B4B5A9CL;
    return g_7;
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
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
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
   depth: 1, occurrence: 8

XXX total number of pointers: 2

XXX times a variable address is taken: 3
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 41
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1

XXX times a non-volatile is read: 0
XXX times a non-volatile is write: 2
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 50

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 36.4
XXX percentage an existing variable is used: 63.6
********************* end of statistics **********************/

