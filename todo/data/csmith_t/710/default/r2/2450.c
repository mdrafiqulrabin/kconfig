/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1602738386
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 23;
   volatile signed f1 : 16;
};
#pragma pack(pop)

struct S1 {
   const uint8_t  f0;
   uint64_t  f1;
   struct S0  f2;
   int64_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static struct S1 g_2[1] = {{8UL,0x59951EA66E58D020LL,{2315,-29},0xB60E704F3D4E677BLL}};


/* --- FORWARD DECLARATIONS --- */
static struct S1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes:
 */
static struct S1  func_1(void)
{ /* block id: 0 */
    return g_2[0];
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
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2[i].f0, "g_2[i].f0", print_hash_value);
        transparent_crc(g_2[i].f1, "g_2[i].f1", print_hash_value);
        transparent_crc(g_2[i].f2.f0, "g_2[i].f2.f0", print_hash_value);
        transparent_crc(g_2[i].f2.f1, "g_2[i].f2.f1", print_hash_value);
        transparent_crc(g_2[i].f3, "g_2[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 2
breakdown:
   depth: 0, occurrence: 0
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
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
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

