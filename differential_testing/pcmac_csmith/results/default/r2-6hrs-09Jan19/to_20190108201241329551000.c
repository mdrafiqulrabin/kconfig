/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      8295218548718754320
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint64_t g_5[3] = {1UL,1UL,1UL};
static volatile int32_t g_8 = 0x9565E08CL;/* VOLATILE GLOBAL g_8 */
static int32_t g_9 = 0xDD1D8F8FL;


/* --- FORWARD DECLARATIONS --- */
static int64_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_9
 * writes: g_5 g_9 g_8
 */
static int64_t  func_1(void)
{ /* block id: 0 */
    int32_t l_2[10] = {0x638ECF54L,0x638ECF54L,0x638ECF54L,0x638ECF54L,0x638ECF54L,0x638ECF54L,0x638ECF54L,0x638ECF54L,0x638ECF54L,0x638ECF54L};
    int32_t *l_3 = &l_2[9];
    int32_t *l_4 = &l_2[0];
    int i;
    (*l_3) = l_2[6];
lbl_12:
    --g_5[2];
    for (g_9 = (-7); (g_9 > (-20)); g_9 = safe_sub_func_uint64_t_u_u(g_9, 9))
    { /* block id: 5 */
        if (g_9)
            goto lbl_12;
        for (g_8 = 0; g_8 < 3; g_8 += 1)
        {
            g_5[g_8] = 0UL;
        }
        if ((*l_3))
            continue;
    }
    return g_5[1];
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
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 1

XXX total number of pointers: 2

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 4

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 3
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 77.8

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

