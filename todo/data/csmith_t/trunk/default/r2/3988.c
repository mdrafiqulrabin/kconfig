/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      163876685
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U7 {
   int16_t  f0;
   int16_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_3 = 0x57736D0CL;/* VOLATILE GLOBAL g_3 */
static volatile int32_t g_4[5][3] = {{1L,1L,1L},{(-1L),0L,(-1L)},{1L,1L,1L},{(-1L),0L,(-1L)},{1L,1L,1L}};
static int32_t g_5 = 0xFBC43CC9L;
static volatile int32_t g_6 = 6L;/* VOLATILE GLOBAL g_6 */
static volatile int32_t g_7[6] = {0L,0x8ED7C3B7L,0L,0L,0x8ED7C3B7L,0L};
static int32_t g_8 = 0xD683A7EFL;
static union U7 g_9[8] = {{7L},{-1L},{7L},{7L},{-1L},{7L},{7L},{-1L}};


/* --- FORWARD DECLARATIONS --- */
static union U7  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_8 g_9
 * writes: g_5 g_3 g_6 g_4 g_8
 */
static union U7  func_1(void)
{ /* block id: 0 */
    uint16_t l_2[2];
    union U7 l_10 = {0x51DBL};
    int i;
    for (i = 0; i < 2; i++)
        l_2[i] = 65530UL;
    for (g_5 = 1; (g_5 >= 0); g_5 -= 1)
    { /* block id: 3 */
        for (g_3 = 0; g_3 < 5; g_3 += 1)
        {
            for (g_6 = 0; g_6 < 3; g_6 += 1)
            {
                g_4[g_3][g_6] = 7L;
            }
        }
        for (g_8 = 0; (g_8 <= 1); g_8 += 1)
        { /* block id: 7 */
            return g_9[4];
        }
    }
    return l_10;
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
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_9[i].f0, "g_9[i].f0", print_hash_value);
        transparent_crc(g_9[i].f1, "g_9[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 2

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
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 7
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

