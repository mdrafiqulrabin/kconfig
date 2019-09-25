/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3708634289
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   signed f0 : 23;
   signed f1 : 18;
   volatile signed f2 : 13;
   signed f3 : 4;
   unsigned f4 : 5;
   signed f5 : 10;
   const unsigned f6 : 1;
   const unsigned f7 : 16;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = 1L;
static volatile uint64_t g_5 = 18446744073709551611UL;/* VOLATILE GLOBAL g_5 */
static struct S0 g_8[5] = {{392,159,22,-2,2,23,0,21},{392,159,22,-2,2,23,0,21},{392,159,22,-2,2,23,0,21},{392,159,22,-2,2,23,0,21},{392,159,22,-2,2,23,0,21}};


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_8
 * writes: g_5
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3;
    int32_t *l_4[1];
    int i;
    for (i = 0; i < 1; i++)
        l_4[i] = &g_3;
    g_5--;
    return g_8[1];
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
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_8[i].f0, "g_8[i].f0", print_hash_value);
        transparent_crc(g_8[i].f1, "g_8[i].f1", print_hash_value);
        transparent_crc(g_8[i].f2, "g_8[i].f2", print_hash_value);
        transparent_crc(g_8[i].f3, "g_8[i].f3", print_hash_value);
        transparent_crc(g_8[i].f4, "g_8[i].f4", print_hash_value);
        transparent_crc(g_8[i].f5, "g_8[i].f5", print_hash_value);
        transparent_crc(g_8[i].f6, "g_8[i].f6", print_hash_value);
        transparent_crc(g_8[i].f7, "g_8[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 8
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 2
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
XXX times a pointer is qualified to be dereferenced: 7
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

XXX percentage a fresh-made variable is used: 40
XXX percentage an existing variable is used: 60
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

