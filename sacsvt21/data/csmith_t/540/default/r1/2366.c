/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3412687224
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_4 = 0xED9A924CL;
static int32_t * volatile g_3 = &g_4;/* VOLATILE GLOBAL g_3 */
static int32_t g_10[1] = {1L};
static int32_t * volatile g_9 = &g_10[0];/* VOLATILE GLOBAL g_9 */
static int32_t g_12 = 0xB4F5AC3DL;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_4 g_9 g_10 g_12
 * writes: g_4 g_10 g_12
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint64_t l_2 = 1UL;
    const int32_t *l_7 = &g_4;
    (*g_3) ^= l_2;
    for (g_4 = 0; (g_4 != (-9)); g_4 = safe_sub_func_int64_t_s_s(g_4, 1))
    { /* block id: 4 */
        int32_t *l_8 = &g_4;
        (*g_9) ^= ((l_7 == l_8) && g_4);
        if ((*g_9))
            break;
        for (l_2 = 0; (l_2 <= 0); l_2 += 1)
        { /* block id: 9 */
            int32_t **l_11[1];
            int i;
            for (i = 0; i < 1; i++)
                l_11[i] = &l_8;
            l_7 = &g_10[l_2];
            for (g_12 = 0; (g_12 <= 0); g_12 += 1)
            { /* block id: 13 */
                return (*g_9);
            }
            g_10[l_2] = (*g_3);
        }
    }
    return (*g_3);
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_12, "g_12", print_hash_value);
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
   depth: 1, occurrence: 10
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1

XXX total number of pointers: 5

XXX times a variable address is taken: 6
XXX times a pointer is dereferenced on RHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 1
XXX times a pointer is qualified to be dereferenced: 27

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 15
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1.2

XXX times a non-volatile is read: 11
XXX times a non-volatile is write: 7
XXX times a volatile is read: 4
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 6
XXX percentage of non-volatile access: 75

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 10
XXX max block depth: 3
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 3
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1

XXX percentage a fresh-made variable is used: 30
XXX percentage an existing variable is used: 70
********************* end of statistics **********************/

