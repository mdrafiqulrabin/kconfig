/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      4281360958
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_5[5][5] = {{(-4L),0x72L,1L,(-1L),1L},{0L,0L,0x72L,(-7L),1L},{(-4L),1L,0xA0L,(-7L),(-7L)},{(-7L),0xF7L,(-7L),(-1L),0L},{0xA0L,1L,(-4L),1L,0L}};
static uint8_t g_7 = 0x3AL;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_7
 * writes: g_7
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int8_t l_2 = (-1L);
    uint8_t *l_6 = &g_7;
    if ((l_2 != ((*l_6) &= (safe_lshift_func_uint8_t_u_s(g_5[4][3], 2)))))
    { /* block id: 2 */
        return g_7;
    }
    else
    { /* block id: 4 */
        uint8_t l_8[8] = {0x83L,0x83L,0x83L,0x83L,0x83L,0x83L,0x83L,0x83L};
        int i;
        for (l_2 = 3; (l_2 >= 1); l_2 -= 1)
        { /* block id: 7 */
            return l_8[2];
        }
        return l_8[2];
    }
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
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

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1
   depth: 4, occurrence: 1

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
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 6
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 1
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

