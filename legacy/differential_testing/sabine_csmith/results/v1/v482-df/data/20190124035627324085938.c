/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1052253752
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U2 {
   volatile uint16_t  f0;
   const uint32_t  f1;
   uint64_t  f2;
   const int64_t  f3;
   const uint32_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 0xE3FF14EBL;
static union U2 g_5[9] = {{0x6DE0L},{0x6DE0L},{0x6DE0L},{0x6DE0L},{0x6DE0L},{0x6DE0L},{0x6DE0L},{0x6DE0L},{0x6DE0L}};


/* --- FORWARD DECLARATIONS --- */
static union U2  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5
 * writes: g_2
 */
static union U2  func_1(void)
{ /* block id: 0 */
    for (g_2 = 0; (g_2 < (-10)); --g_2)
    { /* block id: 3 */
        if (g_2)
            break;
        return g_5[2];
    }
    return g_5[5];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_5[i].f0, "g_5[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
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
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

