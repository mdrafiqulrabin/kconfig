/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3268196916
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   volatile uint32_t  f0;
   int16_t  f1;
   int32_t  f2;
   volatile int32_t  f3;
   uint16_t  f4;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = (-1L);
static uint16_t g_4 = 0UL;
static const struct S0 g_7 = {0x4A754320L,0x32CFL,0x15D7249AL,7L,0xB657L};/* VOLATILE GLOBAL g_7 */
static struct S0 g_8 = {18446744073709551608UL,0x3BD6L,-9L,0x8108531DL,0x4CD4L};/* VOLATILE GLOBAL g_8 */
static volatile uint32_t g_9[5] = {1UL,1UL,1UL,1UL,1UL};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_7 g_9 g_8.f4 g_8.f1
 * writes: g_4 g_8 g_9
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2[6];
    int i;
    for (i = 0; i < 6; i++)
        l_2[i] = &g_3;
    g_4++;
lbl_17:
    g_8 = g_7;
    --g_9[4];
    for (g_8.f4 = (-4); (g_8.f4 != 13); ++g_8.f4)
    { /* block id: 6 */
        int32_t l_16 = (-1L);
        for (g_8.f1 = 0; (g_8.f1 < (-23)); g_8.f1--)
        { /* block id: 9 */
            return l_16;
        }
        if (g_8.f1)
            goto lbl_17;
    }
    return g_8.f1;
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
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_7.f2, "g_7.f2", print_hash_value);
    transparent_crc(g_7.f3, "g_7.f3", print_hash_value);
    transparent_crc(g_7.f4, "g_7.f4", print_hash_value);
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_8.f3, "g_8.f3", print_hash_value);
    transparent_crc(g_8.f4, "g_8.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 2
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
   depth: 1, occurrence: 9
   depth: 2, occurrence: 2

XXX total number of pointers: 1

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 32
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 14
XXX percentage of non-volatile access: 90

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 41.7
XXX percentage an existing variable is used: 58.3
********************* end of statistics **********************/

