/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      456228350
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int8_t g_4[1][8] = {{0x06L,0x06L,0x06L,0x06L,0x06L,0x06L,0x06L,0x06L}};
static int32_t g_7[2] = {1L,1L};
static int32_t *g_16 = &g_7[0];
static int32_t ** volatile g_15 = &g_16;/* VOLATILE GLOBAL g_15 */


/* --- FORWARD DECLARATIONS --- */
static const int32_t  func_1(void);
static int32_t * func_10(int8_t  p_11, uint16_t  p_12, int32_t  p_13);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_7 g_15 g_16
 * writes: g_4 g_7 g_16
 */
static const int32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_2 = (-10L);
    int32_t *l_3 = (void*)0;
    g_4[0][3] &= l_2;
    for (l_2 = (-25); (l_2 >= 22); l_2 = safe_add_func_uint16_t_u_u(l_2, 8))
    { /* block id: 4 */
        int32_t l_14 = (-1L);
        for (g_7[1] = 0; (g_7[1] < 16); ++g_7[1])
        { /* block id: 7 */
            (*g_15) = func_10(l_14, g_4[0][5], l_14);
        }
        if ((**g_15))
            break;
    }
    return (**g_15);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * func_10(int8_t  p_11, uint16_t  p_12, int32_t  p_13)
{ /* block id: 8 */
    return &g_7[1];
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
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
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
   depth: 1, occurrence: 6
   depth: 2, occurrence: 2
   depth: 4, occurrence: 1

XXX total number of pointers: 4

XXX times a variable address is taken: 3
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 0
   depth: 2, occurrence: 2
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 2

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
   level: 2, occurrence: 3
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 25
XXX average alias set size: 1

XXX times a non-volatile is read: 10
XXX times a non-volatile is write: 4
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 82.4

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 37.5
XXX percentage an existing variable is used: 62.5
********************* end of statistics **********************/

