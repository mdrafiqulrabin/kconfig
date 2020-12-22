/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2976250338
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S1 {
   volatile uint32_t  f0;
   const uint16_t  f1;
   int16_t  f2;
   volatile unsigned f3 : 3;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_4 = 9L;
static volatile uint64_t g_6 = 6UL;/* VOLATILE GLOBAL g_6 */
static struct S1 g_9[2][9] = {{{0x3A4D1B40L,0x11A7L,0x6D40L,0},{0xB78ACC4BL,1UL,-1L,1},{0xB78ACC4BL,1UL,-1L,1},{0x3A4D1B40L,0x11A7L,0x6D40L,0},{0x3A4D1B40L,0x11A7L,0x6D40L,0},{0xB78ACC4BL,1UL,-1L,1},{0xB78ACC4BL,1UL,-1L,1},{0x3A4D1B40L,0x11A7L,0x6D40L,0},{0x3A4D1B40L,0x11A7L,0x6D40L,0}},{{0x28787D63L,1UL,0L,0},{0UL,1UL,1L,0},{0x28787D63L,1UL,0L,0},{0UL,1UL,1L,0},{0x28787D63L,1UL,0L,0},{0UL,1UL,1L,0},{0x28787D63L,1UL,0L,0},{0UL,1UL,1L,0},{0x28787D63L,1UL,0L,0}}};


/* --- FORWARD DECLARATIONS --- */
static struct S1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_9
 * writes: g_6
 */
static struct S1  func_1(void)
{ /* block id: 0 */
    int16_t l_2[5];
    int32_t *l_3 = &g_4;
    int32_t *l_5[2][4];
    int i, j;
    for (i = 0; i < 5; i++)
        l_2[i] = 0xD962L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_5[i][j] = &g_4;
    }
    --g_6;
    return g_9[0][7];
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
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_9[i][j].f0, "g_9[i][j].f0", print_hash_value);
            transparent_crc(g_9[i][j].f1, "g_9[i][j].f1", print_hash_value);
            transparent_crc(g_9[i][j].f2, "g_9[i][j].f2", print_hash_value);
            transparent_crc(g_9[i][j].f3, "g_9[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 1
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 1
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 2

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 20
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 50

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

