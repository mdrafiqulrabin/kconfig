/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      2356369902
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   const volatile int8_t  f0;
   uint8_t  f1;
   signed f2 : 29;
   const int64_t  f3;
   const uint16_t  f4;
   int8_t  f5;
   volatile int16_t  f6;
   uint32_t  f7;
};
#pragma pack(pop)

union U6 {
   const volatile int32_t  f0;
   const uint64_t  f1;
   volatile uint32_t  f2;
   uint32_t  f3;
   volatile int8_t * f4;
};

/* --- GLOBAL VARIABLES --- */
static uint32_t g_2[10][7][2] = {{{0UL,0x3CFCE294L},{0x3CFCE294L,0UL},{0x3CFCE294L,0x3CFCE294L},{0UL,0x3CFCE294L},{0x3CFCE294L,0UL},{0x3CFCE294L,0x3CFCE294L},{0UL,0x3CFCE294L}},{{0x3CFCE294L,0UL},{0x3CFCE294L,0x3CFCE294L},{0UL,0x3CFCE294L},{0x3CFCE294L,0UL},{0x3CFCE294L,0x3CFCE294L},{0UL,0x3CFCE294L},{0x3CFCE294L,0UL}},{{0x3CFCE294L,0x3CFCE294L},{0UL,0x3CFCE294L},{0x3CFCE294L,0UL},{0x3CFCE294L,0x3CFCE294L},{0UL,0x3CFCE294L},{0x3CFCE294L,0UL},{0x3CFCE294L,0x3CFCE294L}},{{0UL,0x3CFCE294L},{0x3CFCE294L,0UL},{0UL,0UL},{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL},{0UL,0UL},{0x6B6FEB9EL,0UL}},{{0UL,0x6B6FEB9EL},{0UL,0UL},{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL},{0UL,0UL},{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL}},{{0UL,0UL},{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL},{0UL,0UL},{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL},{0UL,0UL}},{{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL},{0UL,0UL},{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL},{0UL,0UL},{0x6B6FEB9EL,0UL}},{{0UL,0x6B6FEB9EL},{0UL,0UL},{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL},{0UL,0UL},{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL}},{{0UL,0UL},{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL},{0UL,0UL},{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL},{0UL,0UL}},{{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL},{0UL,0UL},{0x6B6FEB9EL,0UL},{0UL,0x6B6FEB9EL},{0UL,0UL},{0x6B6FEB9EL,0UL}}};
static volatile int32_t g_3 = 0xEE973417L;/* VOLATILE GLOBAL g_3 */
static int32_t g_4 = 2L;
static int32_t g_5[1] = {0L};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_3 g_4 g_5 g_2
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_6 = 3L;
    for (g_3 = 0; g_3 < 10; g_3 += 1)
    {
        for (g_4 = 0; g_4 < 7; g_4 += 1)
        {
            for (g_5[0] = 0; g_5[0] < 2; g_5[0] += 1)
            {
                g_2[g_3][g_4][g_5[0]] = 0x7A329EF4L;
            }
        }
    }
    return l_6;
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
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 1
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

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

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

