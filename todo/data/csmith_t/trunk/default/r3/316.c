/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1890650060
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S1 {
   volatile signed f0 : 18;
   signed f1 : 5;
   const signed f2 : 9;
   unsigned f3 : 29;
   volatile unsigned : 0;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_3[6][2] = {{8L,0x13EC752FL},{0x13EC752FL,8L},{0x13EC752FL,0x13EC752FL},{8L,0x13EC752FL},{0x13EC752FL,8L},{0x13EC752FL,0x13EC752FL}};
static int32_t g_9 = (-1L);
static struct S1 g_15 = {160,1,-12,893};/* VOLATILE GLOBAL g_15 */


/* --- FORWARD DECLARATIONS --- */
static struct S1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_15
 * writes: g_3
 */
static struct S1  func_1(void)
{ /* block id: 0 */
    int32_t l_2[6] = {1L,1L,1L,1L,1L,1L};
    int32_t l_4 = (-7L);
    int32_t *l_5 = &l_4;
    int32_t *l_6 = &l_4;
    int32_t *l_7 = &l_4;
    int32_t *l_8[9] = {&l_4,&l_4,&l_4,&l_4,&l_4,&l_4,&l_4,&l_4,&l_4};
    int16_t l_10 = (-2L);
    int8_t l_11 = 0xFFL;
    uint64_t l_12[4][2];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_12[i][j] = 0x433F2F19166C0C08LL;
    }
    for (g_3[1][1] = 0; g_3[1][1] < 6; g_3[1][1] += 1)
    {
        l_2[g_3[1][1]] = 0xD0890515L;
    }
    l_12[2][0]++;
    return g_15;
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
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_15.f1, "g_15.f1", print_hash_value);
    transparent_crc(g_15.f2, "g_15.f2", print_hash_value);
    transparent_crc(g_15.f3, "g_15.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 5
XXX zero bitfields defined in structs: 1
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 2
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 4

XXX total number of pointers: 4

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 327
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 44
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 7.69
XXX percentage an existing variable is used: 92.3
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

