/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      941323064
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   const volatile uint32_t  f0;
   int32_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

union U4 {
   int32_t  f0;
   volatile uint32_t  f1;
   const int8_t * volatile  f2;
   volatile struct S0  f3;
   struct S0  f4;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_3[10][2][1] = {{{0x8F0D0714L},{(-1L)}},{{(-10L)},{(-3L)}},{{3L},{0xC80FC3A0L}},{{3L},{(-3L)}},{{(-10L)},{(-1L)}},{{0x8F0D0714L},{(-1L)}},{{(-10L)},{(-3L)}},{{3L},{0xC80FC3A0L}},{{3L},{(-3L)}},{{(-10L)},{(-1L)}}};
static int32_t * volatile g_2 = &g_3[7][1][0];/* VOLATILE GLOBAL g_2 */
static union U4 g_5[1] = {{0xAC3D6C1DL}};


/* --- FORWARD DECLARATIONS --- */
static union U4  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_5
 * writes: g_2 g_3
 */
static union U4  func_1(void)
{ /* block id: 0 */
    int32_t * volatile *l_4 = &g_2;
    (*l_4) = g_2;
    (**l_4) = ((**l_4) | g_3[7][1][0]);
    (**l_4) = 0xFCDF11BBL;
    return g_5[0];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_5[i].f0, "g_5[i].f0", print_hash_value);
        transparent_crc(g_5[i].f1, "g_5[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
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
   depth: 1, occurrence: 6
   depth: 2, occurrence: 1

XXX total number of pointers: 4

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 1
   depth: 2, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 4

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
   level: 2, occurrence: 4
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 5
XXX times a volatile is read: 2
XXX    times read thru a pointer: 1
XXX times a volatile is write: 3
XXX    times written thru a pointer: 3
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 64.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 40
XXX percentage an existing variable is used: 60
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

