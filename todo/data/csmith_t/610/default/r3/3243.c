/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 30dccd7
 * Options:   (none)
 * Seed:      739496948
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile unsigned f0 : 8;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   volatile int32_t  f0;
   volatile uint32_t  f1;
   uint32_t  f2;
   volatile struct S0  f3;
   volatile struct S0  f4;
   unsigned f5 : 4;
   uint8_t  f6;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   int8_t  f0;
   unsigned f1 : 1;
   struct S0  f2;
   const uint64_t  f3;
   volatile struct S2  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S4 {
   volatile unsigned f0 : 11;
   uint8_t  f1;
   const signed : 0;
   volatile signed f2 : 15;
   uint8_t  f3;
   signed f4 : 10;
   signed f5 : 27;
   volatile signed f6 : 16;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S7 {
   volatile signed f0 : 3;
   unsigned f1 : 13;
   signed f2 : 6;
   const unsigned f3 : 5;
   signed f4 : 20;
   const volatile unsigned f5 : 5;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static uint16_t g_2[10] = {4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL};
static volatile int32_t g_3 = 0x132D38CAL;/* VOLATILE GLOBAL g_3 */
static struct S3 g_4 = {0x0FL,0,{5},0UL,{0x674FA72DL,1UL,0x8FAD7494L,{13},{15},1,4UL}};/* VOLATILE GLOBAL g_4 */


/* --- FORWARD DECLARATIONS --- */
static struct S3  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4
 * writes: g_3 g_2
 */
static struct S3  func_1(void)
{ /* block id: 0 */
    for (g_3 = 0; g_3 < 10; g_3 += 1)
    {
        g_2[g_3] = 65530UL;
    }
    return g_4;
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
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4.f0, "g_4.f0", print_hash_value);
    transparent_crc(g_4.f1, "g_4.f1", print_hash_value);
    transparent_crc(g_4.f2.f0, "g_4.f2.f0", print_hash_value);
    transparent_crc(g_4.f3, "g_4.f3", print_hash_value);
    transparent_crc(g_4.f4.f0, "g_4.f4.f0", print_hash_value);
    transparent_crc(g_4.f4.f1, "g_4.f4.f1", print_hash_value);
    transparent_crc(g_4.f4.f2, "g_4.f4.f2", print_hash_value);
    transparent_crc(g_4.f4.f3.f0, "g_4.f4.f3.f0", print_hash_value);
    transparent_crc(g_4.f4.f4.f0, "g_4.f4.f4.f0", print_hash_value);
    transparent_crc(g_4.f4.f5, "g_4.f4.f5", print_hash_value);
    transparent_crc(g_4.f4.f6, "g_4.f4.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 3
breakdown:
   depth: 0, occurrence: 0
   depth: 1, occurrence: 0
   depth: 2, occurrence: 0
   depth: 3, occurrence: 1
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 13
XXX zero bitfields defined in structs: 1
XXX const bitfields defined in structs: 3
XXX volatile bitfields defined in structs: 5
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

