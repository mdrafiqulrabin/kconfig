/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      4178908380
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S1 {
   volatile uint16_t  f0;
   const uint16_t  f1;
   const uint16_t  f2;
   int16_t  f3;
   uint16_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static volatile struct S1 g_3[6] = {{0x69ACL,0x4C97L,65535UL,0x018DL,0UL},{6UL,0xEB98L,65534UL,8L,0x3859L},{0x69ACL,0x4C97L,65535UL,0x018DL,0UL},{0x69ACL,0x4C97L,65535UL,0x018DL,0UL},{6UL,0xEB98L,65534UL,8L,0x3859L},{0x69ACL,0x4C97L,65535UL,0x018DL,0UL}};
static volatile struct S1 *g_2 = &g_3[2];
static volatile struct S1 ** volatile g_4 = &g_2;/* VOLATILE GLOBAL g_4 */


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_4
 * writes: g_2
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    uint64_t l_5 = 0UL;
    (*g_4) = g_2;
    return l_5;
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
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_3[i].f0, "g_3[i].f0", print_hash_value);
        transparent_crc(g_3[i].f1, "g_3[i].f1", print_hash_value);
        transparent_crc(g_3[i].f2, "g_3[i].f2", print_hash_value);
        transparent_crc(g_3[i].f3, "g_3[i].f3", print_hash_value);
        transparent_crc(g_3[i].f4, "g_3[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
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
   depth: 1, occurrence: 3

XXX total number of pointers: 2

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 0
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 75

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 2
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 2

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

