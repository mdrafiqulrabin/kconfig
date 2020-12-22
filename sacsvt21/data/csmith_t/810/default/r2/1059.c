/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      883273904
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 6;
   volatile signed f1 : 3;
   unsigned f2 : 25;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static uint32_t g_3 = 1UL;
static struct S0 g_4[8][3] = {{{3,0,5606},{2,1,4712},{3,0,5606}},{{4,-1,1467},{4,0,4200},{4,-1,1467}},{{3,0,5606},{2,1,4712},{3,0,5606}},{{4,-1,1467},{4,0,4200},{4,-1,1467}},{{3,0,5606},{2,1,4712},{3,0,5606}},{{4,-1,1467},{4,0,4200},{4,-1,1467}},{{3,0,5606},{2,1,4712},{3,0,5606}},{{4,-1,1467},{4,0,4200},{4,-1,1467}}};


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4
 * writes: g_3
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    int8_t l_2[9] = {0x76L,0x76L,0x76L,0x76L,0x76L,0x76L,0x76L,0x76L,0x76L};
    int i;
    g_3 = (l_2[4] & l_2[4]);
    return g_4[4][1];
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
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_4[i][j].f0, "g_4[i][j].f0", print_hash_value);
            transparent_crc(g_4[i][j].f1, "g_4[i][j].f1", print_hash_value);
            transparent_crc(g_4[i][j].f2, "g_4[i][j].f2", print_hash_value);
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

XXX non-zero bitfields defined in structs: 3
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 1
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

