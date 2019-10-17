/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3916389532
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   volatile int64_t  f1;
   const int8_t  f2;
   const uint32_t  f3;
   volatile int64_t  f4;
};
#pragma pack(pop)

union U3 {
   volatile int16_t  f0;
   int8_t * f1;
   int32_t  f2;
   const volatile int8_t * const  f3;
   const struct S0  f4;
};

/* --- GLOBAL VARIABLES --- */
static union U3 g_2[3][9][2] = {{{{1L},{0L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{0L}},{{1L},{0L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}}},{{{1L},{0L}},{{1L},{0L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{0L}},{{1L},{0L}},{{1L},{1L}},{{1L},{1L}}},{{{1L},{1L}},{{1L},{0L}},{{1L},{0L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{0x5CC2L},{1L}},{{1L},{1L}},{{0x5CC2L},{1L}}}};


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
    return g_2[1][5][1];
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
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2[i][j][k].f0, "g_2[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
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

XXX total number of pointers: 4

XXX times a variable address is taken: 0
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

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

