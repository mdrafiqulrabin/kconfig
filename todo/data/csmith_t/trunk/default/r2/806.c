/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      40542764
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   volatile int32_t  f1;
   int8_t  f2;
};
#pragma pack(pop)

union U3 {
   struct S0  f0;
   uint16_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static union U3 g_2[5][3] = {{{{0x0566L,0x927213ECL,0x52L}},{{0xBFC3L,0x38DD44ADL,0x74L}},{{0x0566L,0x927213ECL,0x52L}}},{{{0x0566L,0x927213ECL,0x52L}},{{0xBFC3L,0x38DD44ADL,0x74L}},{{0x0566L,0x927213ECL,0x52L}}},{{{0x0566L,0x927213ECL,0x52L}},{{0xBFC3L,0x38DD44ADL,0x74L}},{{0x0566L,0x927213ECL,0x52L}}},{{{0x0566L,0x927213ECL,0x52L}},{{0xBFC3L,0x38DD44ADL,0x74L}},{{0x0566L,0x927213ECL,0x52L}}},{{{0x0566L,0x927213ECL,0x52L}},{{0xBFC3L,0x38DD44ADL,0x74L}},{{0x0566L,0x927213ECL,0x52L}}}};


/* --- FORWARD DECLARATIONS --- */
static union U3  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes:
 */
static union U3  func_1(void)
{ /* block id: 0 */
    return g_2[4][1];
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
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2[i][j].f0.f0, "g_2[i][j].f0.f0", print_hash_value);
            transparent_crc(g_2[i][j].f0.f1, "g_2[i][j].f0.f1", print_hash_value);
            transparent_crc(g_2[i][j].f0.f2, "g_2[i][j].f0.f2", print_hash_value);
            transparent_crc(g_2[i][j].f1, "g_2[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 1
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 1

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
********************* end of statistics **********************/

