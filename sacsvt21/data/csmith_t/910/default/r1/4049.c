/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      1153186328
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S1 {
   const uint32_t  f0;
   int8_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int8_t  f0;
   volatile int16_t  f1;
   int32_t  f2;
   int16_t  f3;
   volatile uint16_t  f4;
   int32_t  f5;
   const volatile struct S1  f6;
   volatile unsigned f7 : 13;
   const int64_t  f8;
   volatile signed : 0;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static volatile uint16_t g_2 = 65535UL;/* VOLATILE GLOBAL g_2 */
static volatile int64_t g_3[2][8] = {{0xF4DF7B1466AC3A60LL,0x05300CE3D97867A7LL,0xA08BBD1883800955LL,0xA08BBD1883800955LL,0x05300CE3D97867A7LL,0xF4DF7B1466AC3A60LL,0x05300CE3D97867A7LL,0xA08BBD1883800955LL},{0x7F355C0C8FBFC75DLL,0x05300CE3D97867A7LL,0x7F355C0C8FBFC75DLL,0xF4DF7B1466AC3A60LL,0xF4DF7B1466AC3A60LL,0x7F355C0C8FBFC75DLL,0x05300CE3D97867A7LL,0x7F355C0C8FBFC75DLL}};
static struct S2 g_4 = {0x26L,0x5CFDL,1L,1L,65535UL,0x38299FA9L,{0xF8169C14L,0x7AL},71,0xA9C79EBEF9F3B06DLL};/* VOLATILE GLOBAL g_4 */


/* --- FORWARD DECLARATIONS --- */
static struct S2  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_4
 * writes: g_3
 */
static struct S2  func_1(void)
{ /* block id: 0 */
    g_3[0][0] = g_2;
    return g_4;
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
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    transparent_crc(g_4.f1, "g_4.f1", print_hash_value);
    transparent_crc(g_4.f2, "g_4.f2", print_hash_value);
    transparent_crc(g_4.f3, "g_4.f3", print_hash_value);
    transparent_crc(g_4.f4, "g_4.f4", print_hash_value);
    transparent_crc(g_4.f5, "g_4.f5", print_hash_value);
    transparent_crc(g_4.f6.f0, "g_4.f6.f0", print_hash_value);
    transparent_crc(g_4.f6.f1, "g_4.f6.f1", print_hash_value);
    transparent_crc(g_4.f7, "g_4.f7", print_hash_value);
    transparent_crc(g_4.f8, "g_4.f8", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 2
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 0
   depth: 2, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 2
XXX zero bitfields defined in structs: 1
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 2
XXX structs with bitfields in the program: 1
breakdown:
   indirect level: 0, occurrence: 1
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 1
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 1
breakdown:
   depth: 1, occurrence: 3

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 0
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 33.3

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

