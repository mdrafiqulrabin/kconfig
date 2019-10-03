/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      562980192
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 0xB8FAAAEBL;
static int32_t g_4[10][7] = {{(-8L),0x11BC383CL,(-10L),(-8L),1L,1L,1L},{0L,0x11BC383CL,0xD9EDBDA7L,0L,1L,9L,1L},{0L,(-10L),(-10L),0L,1L,1L,1L},{(-8L),0x11BC383CL,(-10L),(-8L),1L,1L,1L},{0L,0x11BC383CL,0xD9EDBDA7L,0L,1L,9L,1L},{0L,(-10L),(-10L),0L,1L,1L,1L},{(-8L),0x11BC383CL,(-10L),(-8L),0x39F3FAA3L,0x0C4307E4L,0xB58E17C1L},{(-10L),1L,0x50707DFEL,(-10L),0x39F3FAA3L,0x8A527335L,0x39F3FAA3L},{(-10L),9L,9L,(-10L),0xB58E17C1L,0x0C4307E4L,0x39F3FAA3L},{0xD9EDBDA7L,1L,9L,0xD9EDBDA7L,0x39F3FAA3L,0x0C4307E4L,0xB58E17C1L}};
static uint16_t g_5 = 65526UL;
static int32_t g_6 = 0x132D7AF2L;


/* --- FORWARD DECLARATIONS --- */
static int64_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_5 g_6
 * writes: g_4 g_5 g_6 g_2
 */
static int64_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_3[6];
    int i;
    for (i = 0; i < 6; i++)
        l_3[i] = &g_4[4][0];
lbl_7:
    g_6 = (g_5 &= (g_4[4][0] = g_2));
    for (g_2 = 0; g_2 < 10; g_2 += 1)
    {
        for (g_6 = 0; g_6 < 7; g_6 += 1)
        {
            g_4[g_2][g_6] = 1L;
        }
    }
    if (g_5)
        goto lbl_7;
    return g_6;
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
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
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

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 4
   depth: 3, occurrence: 1

XXX total number of pointers: 1

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 0
breakdown:
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 14
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

