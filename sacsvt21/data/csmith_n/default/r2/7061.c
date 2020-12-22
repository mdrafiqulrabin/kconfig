/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      80274052
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   uint32_t  f1;
   const volatile unsigned f2 : 19;
   unsigned f3 : 19;
   const int16_t  f4;
};

/* --- GLOBAL VARIABLES --- */
static volatile union U0 g_6[4] = {{2UL},{2UL},{2UL},{2UL}};
static volatile union U0 * const  volatile g_5 = &g_6[1];/* VOLATILE GLOBAL g_5 */
static int8_t g_13 = 0x47L;
static uint16_t g_15 = 9UL;
static int32_t g_19 = 0L;


/* --- FORWARD DECLARATIONS --- */
static union U0  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_6.f3 g_15 g_6
 * writes: g_13 g_15 g_19
 */
static union U0  func_1(void)
{ /* block id: 0 */
    uint16_t l_2 = 0x8BACL;
    volatile union U0 * volatile *l_7 = (void*)0;
    volatile union U0 *l_9 = &g_6[1];
    volatile union U0 * volatile *l_8 = &l_9;
    int8_t *l_12 = &g_13;
    uint16_t *l_14[9] = {&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15};
    int32_t *l_18 = &g_19;
    int i;
    (*l_8) = ((l_2--) , g_5);
    (*l_18) = (safe_lshift_func_uint8_t_u_u(0xF4L, (((*l_12) = l_2) == (g_6[1].f3 | (g_15++)))));
    return (*g_5);
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
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_6[i].f0, "g_6[i].f0", print_hash_value);
        transparent_crc(g_6[i].f1, "g_6[i].f1", print_hash_value);
        transparent_crc(g_6[i].f2, "g_6[i].f2", print_hash_value);
        transparent_crc(g_6[i].f3, "g_6[i].f3", print_hash_value);
        transparent_crc(g_6[i].f4, "g_6[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 2
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 0
   indirect level: 1, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 2
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 1

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 3
   depth: 3, occurrence: 1
   depth: 6, occurrence: 1

XXX total number of pointers: 7

XXX times a variable address is taken: 7
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 2

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 5
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 28.6
XXX average alias set size: 1.29

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 7
XXX times a volatile is read: 4
XXX    times read thru a pointer: 1
XXX times a volatile is write: 1
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 64.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 33.3
XXX percentage an existing variable is used: 66.7
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

