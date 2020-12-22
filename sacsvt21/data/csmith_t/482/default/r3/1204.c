/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2834045274
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   volatile int32_t  f0;
   const int64_t  f1;
   volatile uint16_t  f2;
   uint64_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static const int8_t g_3 = (-8L);
static int32_t g_5 = (-8L);
static int32_t g_7[3][3][6] = {{{(-1L),0x520EA0C8L,1L,(-1L),0x7182ABBFL,0x29ED890FL},{0x29ED890FL,(-7L),0x81479B69L,(-1L),0x5ED06576L,0x865B49D5L},{(-1L),0x5ED06576L,0x865B49D5L,0x865B49D5L,0x5ED06576L,(-1L)}},{{1L,(-7L),0xCC47D1AFL,0x29ED890FL,0x7182ABBFL,(-1L)},{0xCC47D1AFL,0x520EA0C8L,0x865B49D5L,0x81479B69L,0x061A6520L,0x865B49D5L},{0xCC47D1AFL,0x7182ABBFL,0x81479B69L,0x29ED890FL,(-1L),0x29ED890FL}},{{1L,0x7182ABBFL,1L,0x865B49D5L,0x061A6520L,0x81479B69L},{(-1L),0x520EA0C8L,1L,(-1L),0x58E356ECL,(-1L)},{(-1L),1L,0xDAD5A519L,0L,0x865B49D5L,0x79253A34L}}};
static union U1 g_8[1] = {{0L}};
static union U1 g_9 = {1L};/* VOLATILE GLOBAL g_9 */


/* --- FORWARD DECLARATIONS --- */
static union U1  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_8 g_9
 * writes: g_5
 */
static union U1  func_1(void)
{ /* block id: 0 */
    const int8_t * const l_2 = &g_3;
    int32_t *l_4 = &g_5;
    int32_t **l_6 = &l_4;
    (*l_4) = ((void*)0 == l_2);
    (*l_6) = l_4;
    for (g_5 = 0; (g_5 <= 2); g_5 += 1)
    { /* block id: 5 */
        (*l_6) = (void*)0;
        return g_8[0];
    }
    return g_9;
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
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_7[i][j][k], "g_7[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_8[i].f0, "g_8[i].f0", print_hash_value);
        transparent_crc(g_8[i].f2, "g_8[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9.f0, "g_9.f0", print_hash_value);
    transparent_crc(g_9.f2, "g_9.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
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
   depth: 1, occurrence: 7
   depth: 2, occurrence: 2

XXX total number of pointers: 3

XXX times a variable address is taken: 3
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1.33

XXX times a non-volatile is read: 5
XXX times a non-volatile is write: 7
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 75
XXX percentage an existing variable is used: 25
********************* end of statistics **********************/

