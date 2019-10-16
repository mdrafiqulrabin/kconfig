/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      928135022
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   const int64_t  f0;
   const uint8_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_4[4][6][2] = {{{0L,0x5A60D005L},{1L,0L},{1L,0x5A60D005L},{0L,1L},{1L,0xEE28FDEBL},{1L,1L}},{{0L,0x5A60D005L},{1L,0L},{1L,0x5A60D005L},{0L,1L},{1L,0xEE28FDEBL},{1L,1L}},{{0L,0x5A60D005L},{1L,0L},{1L,0x5A60D005L},{0L,1L},{1L,0xEE28FDEBL},{1L,1L}},{{0L,0x5A60D005L},{1L,0L},{1L,0x5A60D005L},{0L,1L},{1L,0xEE28FDEBL},{0L,0L}}};


/* --- FORWARD DECLARATIONS --- */
static union U0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_4
 */
static union U0  func_1(void)
{ /* block id: 0 */
    int16_t l_2[6];
    int32_t *l_3 = &g_4[2][2][1];
    union U0 l_5 = {0xA8FE24307A329EF4LL};
    int i;
    for (i = 0; i < 6; i++)
        l_2[i] = 0xB023L;
    (*l_3) = l_2[3];
    return l_5;
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
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

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

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

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

