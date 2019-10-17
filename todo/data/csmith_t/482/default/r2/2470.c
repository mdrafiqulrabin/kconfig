/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3790757868
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U2 {
   const volatile uint32_t  f0;
   volatile uint8_t  f1;
};

union U4 {
   int64_t  f0;
   int8_t * f1;
   int16_t  f2;
   const uint32_t  f3;
};

/* --- GLOBAL VARIABLES --- */
static int16_t g_6 = 3L;
static int8_t g_8[5][5][2] = {{{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L}},{{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L}},{{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L}},{{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L}},{{4L,4L},{4L,4L},{4L,4L},{4L,4L},{4L,4L}}};
static int32_t g_11 = 1L;
static int32_t g_13 = 9L;
static union U2 g_14 = {0xE3B6F9B6L};/* VOLATILE GLOBAL g_14 */


/* --- FORWARD DECLARATIONS --- */
static union U2  func_1(void);
static int32_t  func_2(union U4  p_3, int8_t  p_4);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_8 g_11 g_13 g_14
 * writes: g_6 g_8 g_11 g_13
 */
static union U2  func_1(void)
{ /* block id: 0 */
    union U4 l_5 = {-1L};
    int8_t *l_7 = &g_8[1][4][0];
    int32_t *l_12 = &g_13;
    (*l_12) &= func_2(l_5, ((*l_7) &= (g_6 &= 0x3EL)));
    return g_14;
}


/* ------------------------------------------ */
/* 
 * reads : g_11 g_6
 * writes: g_11
 */
static int32_t  func_2(union U4  p_3, int8_t  p_4)
{ /* block id: 3 */
    int32_t *l_10 = &g_11;
    (*l_10) ^= (safe_unary_minus_func_uint16_t_u(p_3.f2));
    return g_6;
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
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_8[i][j][k], "g_8[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
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

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 5
   depth: 5, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 3
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 6
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 4
XXX times a non-volatile is write: 7
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 60
XXX percentage an existing variable is used: 40
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

