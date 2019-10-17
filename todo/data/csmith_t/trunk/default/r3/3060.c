/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      4292934538
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U2 {
   const uint64_t  f0;
   volatile uint8_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   uint8_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_4 = 0x31551DA6L;
static int32_t g_8[3] = {0x71247ADFL,0x71247ADFL,0x71247ADFL};
static int32_t g_9 = (-1L);
static union U2 g_10 = {0xD2D91509CF13E13ALL};/* VOLATILE GLOBAL g_10 */


/* --- FORWARD DECLARATIONS --- */
static union U2  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_8 g_10
 * writes: g_4 g_9 g_8
 */
static union U2  func_1(void)
{ /* block id: 0 */
    uint8_t l_2 = 0xB8L;
    int32_t *l_3 = &g_4;
lbl_7:
    (*l_3) = l_2;
    for (g_4 = 0; (g_4 > (-25)); --g_4)
    { /* block id: 4 */
        if (g_4)
            break;
        if (g_4)
            goto lbl_7;
        for (l_2 = 0; (l_2 <= 2); l_2 += 1)
        { /* block id: 9 */
            int i;
            for (g_9 = 0; g_9 < 3; g_9 += 1)
            {
                g_8[g_9] = 0xE012D2C8L;
            }
            if (g_8[l_2])
                continue;
        }
    }
    return g_10;
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
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
    transparent_crc(g_10.f2, "g_10.f2", print_hash_value);
    transparent_crc(g_10.f3, "g_10.f3", print_hash_value);
    transparent_crc(g_10.f4, "g_10.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
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
   depth: 1, occurrence: 7
   depth: 2, occurrence: 2

XXX total number of pointers: 1

XXX times a variable address is taken: 1
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
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

