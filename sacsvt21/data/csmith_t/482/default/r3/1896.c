/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2343038392
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U6 {
   int32_t  f0;
   int8_t * f1;
   const uint16_t  f2;
   volatile uint16_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static int8_t g_4[2][4][8] = {{{(-9L),(-1L),(-1L),(-9L),0xAAL,0L,0xAAL,(-9L)},{(-1L),0xAAL,(-1L),9L,1L,1L,9L,(-1L)},{0xAAL,0xAAL,1L,0L,0xBEL,0L,1L,0xAAL},{0xAAL,(-1L),9L,1L,1L,9L,(-1L),0xAAL}},{{(-1L),(-9L),0xAAL,0L,0xAAL,(-9L),(-1L),(-1L)},{(-9L),0L,9L,9L,0L,(-9L),0xAAL,(-1L)},{9L,(-1L),0xAAL,(-1L),9L,1L,1L,9L},{(-1L),0L,0L,(-1L),0xBEL,9L,0xBEL,(-1L)}}};
static int32_t g_6 = 0xB64D07DDL;
static int32_t * const  volatile g_5 = &g_6;/* VOLATILE GLOBAL g_5 */
static union U6 g_7 = {1L};/* VOLATILE GLOBAL g_7 */


/* --- FORWARD DECLARATIONS --- */
static union U6  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_7
 * writes: g_6
 */
static union U6  func_1(void)
{ /* block id: 0 */
    int8_t *l_3 = &g_4[0][1][6];
    (*g_5) = (!(0x184DL ^ ((void*)0 == l_3)));
    return g_7;
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
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f2, "g_7.f2", print_hash_value);
    transparent_crc(g_7.f3, "g_7.f3", print_hash_value);
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

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 2
   depth: 3, occurrence: 1

XXX total number of pointers: 4

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 75

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

