/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2671452236
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile unsigned f0 : 20;
};

/* --- GLOBAL VARIABLES --- */
static const uint32_t g_2 = 0UL;
static int32_t g_4 = 0x66BC657EL;
static int32_t * const  volatile g_3 = &g_4;/* VOLATILE GLOBAL g_3 */
static int32_t g_6 = 1L;
static struct S0 g_8[4] = {{201},{201},{201},{201}};


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_4 g_6 g_8
 * writes: g_4 g_6
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    int32_t *l_5 = &g_6;
lbl_7:
    (*g_3) |= g_2;
    (*l_5) &= (*g_3);
    if (g_6)
        goto lbl_7;
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
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_8[i].f0, "g_8[i].f0", print_hash_value);
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

XXX non-zero bitfields defined in structs: 1
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 6

XXX total number of pointers: 2

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 2

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 5
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 3
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 75

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

