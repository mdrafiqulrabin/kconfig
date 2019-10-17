/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      402502937
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   volatile int16_t  f1;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static int32_t g_3[7] = {0x285FAAFEL,0x285FAAFEL,0x285FAAFEL,0x285FAAFEL,0x285FAAFEL,0x285FAAFEL,0x285FAAFEL};
static int32_t g_11[2] = {0L,0L};
static struct S0 g_15 = {0x9F90L,-4L};/* VOLATILE GLOBAL g_15 */


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_11 g_3 g_15
 * writes: g_11
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3[5];
    int32_t *l_4 = &g_3[0];
    int32_t *l_5 = &g_3[5];
    int32_t *l_6 = (void*)0;
    int32_t *l_7[8];
    uint8_t l_8[7];
    int i;
    for (i = 0; i < 8; i++)
        l_7[i] = &g_3[5];
    for (i = 0; i < 7; i++)
        l_8[i] = 0xAAL;
    --l_8[6];
    for (g_11[0] = 0; (g_11[0] < 3); g_11[0]++)
    { /* block id: 4 */
        uint32_t l_14 = 18446744073709551609UL;
        if (g_3[3])
            break;
        if (l_14)
            continue;
        return g_15;
    }
    return g_15;
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
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_15.f1, "g_15.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1
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
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 64
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 20
XXX average alias set size: 1

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 14.3
XXX percentage an existing variable is used: 85.7
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

