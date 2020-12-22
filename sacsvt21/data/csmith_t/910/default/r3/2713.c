/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      447690202
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S2 {
   signed f0 : 14;
   volatile unsigned f1 : 13;
   volatile unsigned f2 : 14;
   unsigned f3 : 28;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   signed f0 : 15;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S5 {
   const volatile uint8_t  f0;
   volatile int64_t  f1;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static struct S3 g_4 = {-146};
static struct S2 g_5[4][8] = {{{-73,11,72,4639},{-82,2,60,8398},{-82,2,60,8398},{-73,11,72,4639},{-52,31,85,5720},{45,78,3,9029},{-52,31,85,5720},{-73,11,72,4639}},{{-82,2,60,8398},{-52,31,85,5720},{-82,2,60,8398},{-77,62,108,1738},{-47,8,112,4969},{-47,8,112,4969},{-77,62,108,1738},{-82,2,60,8398}},{{-52,31,85,5720},{-52,31,85,5720},{-47,8,112,4969},{45,78,3,9029},{25,73,32,6450},{45,78,3,9029},{-47,8,112,4969},{-52,31,85,5720}},{{-52,31,85,5720},{-82,2,60,8398},{-77,62,108,1738},{-47,8,112,4969},{-47,8,112,4969},{-77,62,108,1738},{-82,2,60,8398},{-52,31,85,5720}}};
static volatile int32_t g_6 = 8L;/* VOLATILE GLOBAL g_6 */
static volatile int32_t g_7 = (-1L);/* VOLATILE GLOBAL g_7 */


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_6 g_7 g_5
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    struct S3 *l_3 = &g_4;
    struct S3 **l_2 = &l_3;
    int32_t l_8 = 1L;
    (*l_2) = (void*)0;
    for (g_6 = 0; g_6 < 4; g_6 += 1)
    {
        for (g_7 = 0; g_7 < 8; g_7 += 1)
        {
            struct S2 tmp = {-123,77,12,13951};
            g_5[g_6][g_7] = tmp;
        }
    }
    return l_8;
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
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_5[i][j].f0, "g_5[i][j].f0", print_hash_value);
            transparent_crc(g_5[i][j].f1, "g_5[i][j].f1", print_hash_value);
            transparent_crc(g_5[i][j].f2, "g_5[i][j].f2", print_hash_value);
            transparent_crc(g_5[i][j].f3, "g_5[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 5
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 2
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 1
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 4

XXX total number of pointers: 2

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 1
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 0
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1

XXX times a non-volatile is read: 2
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 3

XXX percentage a fresh-made variable is used: 100
XXX percentage an existing variable is used: 0
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
********************* end of statistics **********************/

