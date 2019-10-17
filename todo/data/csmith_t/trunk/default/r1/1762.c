/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      900077977
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   const unsigned f0 : 11;
   const unsigned f1 : 22;
   const signed f2 : 1;
   volatile unsigned f3 : 8;
   const volatile unsigned f4 : 25;
   signed f5 : 14;
   volatile signed f6 : 21;
   signed f7 : 20;
   signed f8 : 7;
   volatile signed f9 : 27;
};

union U1 {
   int16_t  f0;
   signed f1 : 2;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_9 = 8L;
static const union U1 ** volatile g_12 = (void*)0;/* VOLATILE GLOBAL g_12 */
static union U1 g_15[2] = {{0L},{0L}};
static int32_t *g_20 = &g_9;
static int32_t ** volatile g_19 = &g_20;/* VOLATILE GLOBAL g_19 */
static const int32_t g_26 = 1L;
static const int32_t *g_28 = &g_9;
static const int32_t ** volatile g_27 = &g_28;/* VOLATILE GLOBAL g_27 */
static int32_t * volatile g_29 = &g_9;/* VOLATILE GLOBAL g_29 */
static struct S0 g_32[7] = {{1,1158,0,7,1716,-111,646,335,5,9922},{33,704,-0,8,67,-32,-851,198,5,2211},{33,704,-0,8,67,-32,-851,198,5,2211},{1,1158,0,7,1716,-111,646,335,5,9922},{33,704,-0,8,67,-32,-851,198,5,2211},{33,704,-0,8,67,-32,-851,198,5,2211},{1,1158,0,7,1716,-111,646,335,5,9922}};


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);
static int32_t * func_2(int32_t * p_3, union U1  p_4, int32_t * p_5, int32_t * const  p_6, const union U1  p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_19 g_9 g_27 g_29 g_32
 * writes: g_20 g_9 g_28
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    int32_t *l_8 = &g_9;
    union U1 l_10 = {0x8D96L};
    int32_t **l_17 = (void*)0;
    int32_t **l_18 = &l_8;
    int32_t *l_30 = (void*)0;
    int32_t *l_31 = &g_9;
    (*g_19) = ((*l_18) = func_2(l_8, l_10, l_8, &g_9, l_10));
    for (l_10.f0 = 0; (l_10.f0 <= 1); l_10.f0 += 1)
    { /* block id: 8 */
        int32_t *l_22[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        const int32_t **l_23 = (void*)0;
        const int32_t *l_25 = &g_26;
        const int32_t **l_24 = &l_25;
        int i;
        g_9 &= (safe_unary_minus_func_int8_t_s(0xA7L));
        (*g_27) = ((*l_24) = (void*)0);
    }
    (*g_29) = l_10.f0;
    (*l_31) = 0x791F9E6AL;
    return g_32[4];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * func_2(int32_t * p_3, union U1  p_4, int32_t * p_5, int32_t * const  p_6, const union U1  p_7)
{ /* block id: 1 */
    const union U1 **l_11 = (void*)0;
    const union U1 *l_14 = &g_15[0];
    const union U1 **l_13 = &l_14;
    int32_t *l_16 = (void*)0;
    (*l_13) = &p_7;
    return l_16;
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
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_15[i].f0, "g_15[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_32[i].f0, "g_32[i].f0", print_hash_value);
        transparent_crc(g_32[i].f1, "g_32[i].f1", print_hash_value);
        transparent_crc(g_32[i].f2, "g_32[i].f2", print_hash_value);
        transparent_crc(g_32[i].f3, "g_32[i].f3", print_hash_value);
        transparent_crc(g_32[i].f4, "g_32[i].f4", print_hash_value);
        transparent_crc(g_32[i].f5, "g_32[i].f5", print_hash_value);
        transparent_crc(g_32[i].f6, "g_32[i].f6", print_hash_value);
        transparent_crc(g_32[i].f7, "g_32[i].f7", print_hash_value);
        transparent_crc(g_32[i].f8, "g_32[i].f8", print_hash_value);
        transparent_crc(g_32[i].f9, "g_32[i].f9", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 1
XXX total union variables: 1

XXX non-zero bitfields defined in structs: 11
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 4
XXX volatile bitfields defined in structs: 4
XXX structs with bitfields in the program: 2
breakdown:
   indirect level: 0, occurrence: 2
XXX full-bitfields structs in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX times a bitfields struct's address is taken: 2
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 4
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 7
breakdown:
   depth: 1, occurrence: 12
   depth: 2, occurrence: 2
   depth: 7, occurrence: 1

XXX total number of pointers: 23

XXX times a variable address is taken: 15
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 7
breakdown:
   depth: 1, occurrence: 7
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 47

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 11
   level: 2, occurrence: 8
XXX number of pointers point to pointers: 9
XXX number of pointers point to scalars: 13
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 52.2
XXX average alias set size: 1.13

XXX times a non-volatile is read: 10
XXX times a non-volatile is write: 13
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 3
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 13
XXX percentage of non-volatile access: 88.5

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 9
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 7
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 20
XXX percentage an existing variable is used: 80
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

