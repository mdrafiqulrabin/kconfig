/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2403127820
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S3 {
   const unsigned f0 : 30;
   signed f1 : 30;
   volatile unsigned f2 : 8;
   uint32_t  f3;
   unsigned f4 : 5;
};

struct S0 {
   unsigned f0 : 20;
   volatile signed f1 : 25;
   int16_t  f2;
   unsigned f3 : 15;
   volatile signed f4 : 24;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   uint64_t  f0;
   volatile int32_t  f1;
   const struct S0  f2;
   int32_t  f3;
   const volatile struct S3  f4;
   signed f5 : 18;
   volatile uint32_t  f6;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static struct S3 g_5 = {11090,-29039,10,0x60DF3928L,4};/* VOLATILE GLOBAL g_5 */
static volatile struct S3 * volatile g_6 = (void*)0;/* VOLATILE GLOBAL g_6 */
static struct S3 *g_13 = &g_5;
static struct S3 **g_12 = &g_13;
static int32_t g_30 = 0L;
static struct S4 g_33 = {0UL,0x28C51F7EL,{526,-928,0x6BBBL,93,2848},-7L,{14970,-2603,11,0x68E480B0L,2},494,0x624E194EL};/* VOLATILE GLOBAL g_33 */


/* --- FORWARD DECLARATIONS --- */
static struct S4  func_1(void);
static struct S3 * func_7(struct S3 ** p_8, int32_t  p_9, int32_t  p_10, struct S3 ** p_11);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_12 g_5.f1 g_13 g_5.f4 g_5.f3 g_6 g_30 g_33
 * writes: g_6 g_5.f1 g_13 g_30
 */
static struct S4  func_1(void)
{ /* block id: 0 */
    struct S3 **l_2 = (void*)0;
    struct S3 *l_4 = &g_5;
    struct S3 **l_3[6] = {&l_4,&l_4,&l_4,&l_4,&l_4,&l_4};
    int32_t l_18 = 1L;
    int32_t l_21 = 0xFE6B87C2L;
    int32_t *l_31 = (void*)0;
    int32_t *l_32 = &g_30;
    int i;
    g_6 = (void*)0;
    (*l_32) ^= ((((*g_12) = func_7(g_12, (safe_sub_func_int8_t_s_s(0xECL, g_5.f1)), (((safe_lshift_func_int16_t_s_u((l_18 = l_18), ((void*)0 != (*g_12)))) >= (1UL || (l_21 == (safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(g_5.f4, l_21)), l_21)), l_21))))) != g_5.f3), &g_13)) == g_6) , l_21);
    (*l_32) = (*l_32);
    return g_33;
}


/* ------------------------------------------ */
/* 
 * reads : g_5.f1 g_12 g_13
 * writes: g_5.f1
 */
static struct S3 * func_7(struct S3 ** p_8, int32_t  p_9, int32_t  p_10, struct S3 ** p_11)
{ /* block id: 3 */
    int32_t *l_28 = (void*)0;
    int32_t *l_29[2];
    int i;
    for (i = 0; i < 2; i++)
        l_29[i] = &g_30;
    g_5.f1 |= (-1L);
    return (*g_12);
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
    transparent_crc(g_5.f2, "g_5.f2", print_hash_value);
    transparent_crc(g_5.f3, "g_5.f3", print_hash_value);
    transparent_crc(g_5.f4, "g_5.f4", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f1, "g_33.f1", print_hash_value);
    transparent_crc(g_33.f2.f0, "g_33.f2.f0", print_hash_value);
    transparent_crc(g_33.f2.f1, "g_33.f2.f1", print_hash_value);
    transparent_crc(g_33.f2.f2, "g_33.f2.f2", print_hash_value);
    transparent_crc(g_33.f2.f3, "g_33.f2.f3", print_hash_value);
    transparent_crc(g_33.f2.f4, "g_33.f2.f4", print_hash_value);
    transparent_crc(g_33.f3, "g_33.f3", print_hash_value);
    transparent_crc(g_33.f4.f0, "g_33.f4.f0", print_hash_value);
    transparent_crc(g_33.f4.f1, "g_33.f4.f1", print_hash_value);
    transparent_crc(g_33.f4.f2, "g_33.f4.f2", print_hash_value);
    transparent_crc(g_33.f4.f3, "g_33.f4.f3", print_hash_value);
    transparent_crc(g_33.f4.f4, "g_33.f4.f4", print_hash_value);
    transparent_crc(g_33.f5, "g_33.f5", print_hash_value);
    transparent_crc(g_33.f6, "g_33.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 2
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 5
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 1
XXX volatile bitfields defined in structs: 1
XXX structs with bitfields in the program: 3
breakdown:
   indirect level: 0, occurrence: 1
   indirect level: 1, occurrence: 1
   indirect level: 2, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 2
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 1
XXX times a single bitfield on RHS: 2

XXX max expression depth: 19
breakdown:
   depth: 1, occurrence: 9
   depth: 19, occurrence: 1

XXX total number of pointers: 13

XXX times a variable address is taken: 9
XXX times a pointer is dereferenced on RHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 27

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 8
XXX number of pointers point to pointers: 5
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 4
XXX percent of pointers has null in alias set: 30.8
XXX average alias set size: 1

XXX times a non-volatile is read: 18
XXX times a non-volatile is write: 8
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 31
XXX percentage of non-volatile access: 92.9

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 6

XXX percentage a fresh-made variable is used: 21.7
XXX percentage an existing variable is used: 78.3
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

