/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      3709534610
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U2 {
   volatile int16_t  f0;
   const int8_t * volatile  f1;
   uint16_t  f2;
};

/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2 = 0x4E677B56L;/* VOLATILE GLOBAL g_2 */
static volatile int32_t g_3 = (-7L);/* VOLATILE GLOBAL g_3 */
static volatile int32_t g_4 = 0xF6F08421L;/* VOLATILE GLOBAL g_4 */
static int32_t g_5 = 0L;
static union U2 g_8[10] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_2
 * writes: g_5 g_3 g_8
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    for (g_5 = 0; (g_5 == 7); g_5 = safe_add_func_uint32_t_u_u(g_5, 2))
    { /* block id: 3 */
        for (g_3 = 0; g_3 < 10; g_3 += 1)
        {
            union U2 tmp = {0L};
            g_8[g_3] = tmp;
        }
        if (g_2)
            break;
    }
    return g_2;
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
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_8[i].f0, "g_8[i].f0", print_hash_value);
        transparent_crc(g_8[i].f2, "g_8[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: -1
breakdown:
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

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX total number of pointers: 1

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
XXX number of pointers point to scalars: 1
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 6
XXX percentage of non-volatile access: 50

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

