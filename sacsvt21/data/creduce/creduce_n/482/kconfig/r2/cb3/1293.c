


#define NO_LONGLONG



static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   int32_t  f1;
   const int32_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   unsigned f0 : 13;
   const unsigned f1 : 19;
   signed f2 : 16;
   signed f3 : 28;
   const signed f4 : 17;
   unsigned f5 : 11;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   signed f0 : 12;
   signed f1 : 10;
   const signed f2 : 25;
   signed f3 : 10;
   signed f4 : 17;
   signed f5 : 24;
   signed f6 : 21;
   signed f7 : 16;
   signed f8 : 31;
   signed f9 : 30;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   struct S0  f0;
   struct S0  f1;
   struct S1  f2;
   int32_t  f3;
   uint32_t  f4;
   const int8_t  f5;
   struct S0  f6;
   const struct S1  f7;
   struct S1  f8;
   uint32_t  f9;
};
#pragma pack(pop)

union U4 {
   uint32_t  f0;
   uint16_t  f1;
};


static uint16_t g_3 = 0x4307;
static int32_t g_33 = 3;
static int32_t g_34 = 0x37F4A1D2;
static int32_t g_35[2] = {0x34D71B36,0x34D71B36};
static uint32_t g_40 = 0x761E7FF5;
static struct S0 g_82[2] = {{0,0xD3F7CC82,0x221BDB03},{0,0xD3F7CC82,0x221BDB03}};
static uint16_t g_84 = 1U;
static uint32_t g_94 = 1U;
static uint8_t g_133 = 255U;
static int32_t g_135 = 1;
static int32_t g_142[1][9] = {{0x032B9FEB,0x032B9FEB,0x032B9FEB,0x032B9FEB,0x032B9FEB,0x032B9FEB,0x032B9FEB,0x032B9FEB,0x032B9FEB}};
static int8_t g_203 = 0x19;
static uint32_t g_205 = 4294967288U;
static struct S1 g_208[5] = {{36,223,167,6807,165,7},{36,223,167,6807,165,7},{36,223,167,6807,165,7},{36,223,167,6807,165,7},{36,223,167,6807,165,7}};
static uint32_t g_241 = 1U;
static int16_t g_249 = (-1);
static uint32_t g_252 = 0x80103624;
static int32_t g_316[5][8][4] = {{{0xE27A0AEB,(-7),0x252909BA,0x63D6E52B},{0xE5ABEBF2,0xFEBEB1CB,9,(-1)},{(-8),0x26BE5335,9,(-1)},{0xD3AC702A,0xFEBEB1CB,0x7000DFB2,0x63D6E52B},{0x34B96E32,(-7),8,0xFEBEB1CB},{(-2),1,0xE27A0AEB,(-8)},{0x252909BA,0x9411491A,0x7000DFB2,0x7358A6C8},{0x252909BA,0x26BE5335,(-7),0x26BE5335}},{{0x7358A6C8,0xE36782FD,0xB3FE9079,0xE27A0AEB},{0xE36782FD,0xD3AC702A,4,0},{1,0x9E29881E,(-1),1},{1,8,4,7},{0xE36782FD,1,0xB3FE9079,0x551F979E},{0x7358A6C8,0x63D6E52B,(-7),0x7000DFB2},{0x252909BA,0x1B915A60,0xE36782FD,7},{4,0xE27A0AEB,0x1B915A60,0x1B915A60}},{{0x9E29881E,0x9E29881E,(-2),0x7358A6C8},{9,9,0xE36782FD,0xE27A0AEB},{0xB3FE9079,0x26BE5335,0,0xE36782FD},{0x7358A6C8,0x26BE5335,0x34B96E32,0xE27A0AEB},{0x26BE5335,9,4,0x7358A6C8},{0x1B915A60,0x9E29881E,0x8BD1D58C,0x1B915A60},{1,0xE27A0AEB,(-8),7},{0x26BE5335,0x1B915A60,0xB3FE9079,0x7000DFB2}},{{0,0x63D6E52B,0,0x551F979E},{0x252909BA,1,0x411CF694,7},{9,8,0x1B915A60,1},{0x8BD1D58C,0x9E29881E,0x1B915A60,0},{9,0xD3AC702A,0x411CF694,0xE27A0AEB},{0x252909BA,0xE36782FD,0,0x26BE5335},{0,0x26BE5335,0xB3FE9079,8},{0x26BE5335,0xD3AC702A,(-8),0x7358A6C8}},{{1,0x8BD1D58C,0x8BD1D58C,1},{0x1B915A60,0xE27A0AEB,4,0xE17EB047},{0x26BE5335,1,0x34B96E32,0x7000DFB2},{0x7358A6C8,1,0,0x7000DFB2},{0xB3FE9079,1,0xE36782FD,0xE17EB047},{9,0xE27A0AEB,(-2),1},{0x9E29881E,0x8BD1D58C,0x1B915A60,0x7358A6C8},{4,0xD3AC702A,0xE36782FD,8}}};
static uint32_t g_319 = 0xD7D5E941;
static float g_325 = 0x4.71D96Fp-16;
static uint8_t g_334 = 0x17;
static int32_t g_421[7][2] = {{0xDE7CE8A9,0xAF1C7367},{1,0x0EC0A1D0},{1,0xAF1C7367},{0xDE7CE8A9,0xDE7CE8A9},{0xAF1C7367,1},{0x0EC0A1D0,1},{0xAF1C7367,0xDE7CE8A9}};
static struct S2 g_611 = {-49,0,2494,14,13,3748,770,-151,-33699,4793};
static uint16_t g_764 = 65535U;
static int8_t g_810[10][4][6] = {{{1,0x78,(-1),(-1),(-1),(-1)},{0xB8,0xB8,(-1),0,(-1),1},{0x8C,(-1),(-1),(-1),1,(-1)},{0xE0,0x8C,(-1),0x78,0xB8,1}},{{0x1C,0x78,(-1),(-1),0x8C,(-1)},{(-1),0x8C,(-1),0,0xE0,0xE0},{(-1),(-1),(-1),(-1),0x1C,(-1)},{0x1C,0xB8,0,0x78,(-1),0xE0}},{{0xE0,0x78,7,(-1),(-1),(-1)},{0x8C,0xB8,0x3F,0,0x1C,1},{0xB8,(-1),0x78,(-1),0xE0,(-1)},{1,0x8C,0x78,0x78,0x8C,1}},{{(-1),0x78,0x3F,(-1),0xB8,(-1)},{(-1),0x8C,7,0,1,0xE0},{(-1),(-1),0,(-1),(-1),(-1)},{(-1),0xB8,(-1),0x78,(-1),0xE0}},{{1,0x78,(-1),(-1),(-1),(-1)},{0xB8,0xB8,(-1),0,(-1),1},{0x8C,(-1),(-1),(-1),1,(-1)},{0xE0,0x8C,(-1),0x78,0xB8,1}},{{0x1C,0x78,(-1),(-1),0x8C,(-1)},{(-1),0x8C,(-1),0,0xE0,0xE0},{(-1),(-1),(-1),(-1),0x1C,(-1)},{0x1C,0xB8,0,0x78,(-1),0xE0}},{{0xE0,0x78,7,(-1),(-1),(-1)},{0x8C,0xB8,0x3F,0,0x1C,1},{0xB8,(-1),0x78,(-1),0xE0,(-1)},{1,0x8C,0x78,0x78,0x8C,1}},{{(-1),0x78,0x3F,(-1),0xB8,(-1)},{(-1),0x8C,7,0,1,0xE0},{(-1),(-1),0,(-1),(-1),(-1)},{(-1),0xB8,(-1),0x78,(-1),0xE0}},{{1,0x78,(-1),(-1),(-1),(-1)},{0xB8,0xB8,(-1),0,(-1),1},{0x8C,(-1),(-1),(-1),1,(-1)},{0xE0,0x8C,(-1),0x78,0xB8,1}},{{0x1C,0x78,(-1),(-1),0x8C,(-1)},{(-1),0x8C,(-1),0,0xE0,0xE0},{(-1),(-1),(-1),(-1),0x1C,(-1)},{0x1C,0xB8,0,0x78,(-1),0xE0}}};
static uint32_t g_862 = 0x95BC9369;
static uint16_t g_955 = 8U;
static int32_t g_999 = 1;
static uint32_t g_1045 = 5U;
static int8_t g_1139 = 9;
static uint16_t g_1226[2][4][8] = {{{0x32B1,65532U,0xCE0F,0xCE0F,65532U,0x32B1,65534U,0x48F9},{65532U,0x32B1,65534U,0x48F9,0xA792,0xCE0F,1U,0xA792},{0x48F9,1U,1U,0x48F9,0x5BEC,0xC2E0,0x5BEC,0x48F9},{1U,0x5BEC,1U,0xCE0F,65535U,65534U,0xCE0F,1U}},{{0x5BEC,0xD41F,65534U,65532U,1U,0xA792,65535U,0xD41F},{0x5BEC,1U,65535U,65535U,65535U,65535U,1U,0x5BEC},{1U,0x48F9,0xD41F,0xA792,0x5BEC,0x32B1,1U,1U},{0x48F9,0xA792,0xCE0F,1U,0xA792,0x32B1,65535U,0x32B1}}};
static int8_t g_1387 = (-10);
static union U4 g_1401[1][1] = {{{7U}}};
static uint8_t g_1427[7][5][3] = {{{251U,0xB3,255U},{0U,0x56,0x20},{251U,0x4F,4U},{7U,0x13,0x13},{3U,255U,249U}},{{0x50,0U,0xD0},{249U,0x76,0xE4},{9U,0x14,0xDE},{248U,0x76,0xDB},{0xB5,0U,7U}},{{255U,255U,0x76},{0xDE,0x13,0x8D},{0xB3,0x4F,0x54},{0x8D,0x56,0xB5},{0xBE,0xB3,0x54}},{{0U,1U,0x8D},{0x76,251U,0x76},{0x61,0xE5,7U},{0xF2,0x44,0xDB},{0xE5,0xB5,0xDE}},{{0x11,0xDB,0xE4},{0xE5,0U,0xD0},{0xF2,249U,249U},{0x61,0xDE,0x13},{0x76,0x11,4U}},{{0U,0x50,0x20},{0xBE,0xDB,255U},{0x8D,0x50,0x56},{0xB3,0x11,0xF2},{0xDE,0xDE,0x50}},{{255U,249U,248U},{0xB5,0U,0x19},{248U,0xDB,0xB3},{9U,0xB5,0x19},{249U,0x44,248U}}};
static struct S2 g_1483 = {12,-23,4291,29,-124,1789,-450,75,5416,15288};
static int32_t g_1631[8][8][4] = {{{0xCA8DF587,0xD4AC06A4,(-1),0x71025E08},{5,1,1,5},{1,(-1),1,(-1)},{0x0898CDE9,0,0xBD084064,0x9D5E48A1},{5,0x0898CDE9,(-1),0},{0x1B13B6E1,1,0x9D5E48A1,0},{0xBD084064,(-10),0x57855743,(-2)},{0xCA8DF587,5,0xBD084064,(-1)}},{{0x32BFADE8,0x1EC6006D,(-2),(-1)},{0,0xF8F27B94,(-1),0x32BFADE8},{1,0,0x283A3923,1},{0,0,(-1),0},{(-9),0x32BFADE8,0,1},{1,(-2),(-1),1},{(-1),1,(-10),(-7)},{(-1),0x0CC7A0BF,(-1),(-1)}},{{1,(-7),0,0xD4AC06A4},{(-9),(-1),(-1),0},{0,(-1),0x283A3923,0x0CC7A0BF},{1,0x283A3923,(-1),(-9)},{0,(-3),(-2),1},{0x32BFADE8,(-1),0xBD084064,0xBD084064},{0xCA8DF587,0xCA8DF587,0x57855743,0xDB82D32D},{0xBD084064,1,0x9D5E48A1,(-10)}},{{0x1B13B6E1,0xE614CD31,(-1),0x9D5E48A1},{5,0xE614CD31,(-1),(-10)},{0xE614CD31,1,0xF8F27B94,0xDB82D32D},{(-1),0xCA8DF587,5,0xBD084064},{(-2),(-1),0,1},{0x57855743,(-3),1,(-9)},{0x1EC6006D,0x283A3923,(-1),0x0CC7A0BF},{0xDB82D32D,(-1),(-7),0}},{{0x0898CDE9,(-1),0x0898CDE9,0xD4AC06A4},{0,(-7),0xCA8DF587,(-1)},{1,0x0CC7A0BF,1,(-7)},{(-1),1,1,1},{1,(-2),0xCA8DF587,1},{0,0x32BFADE8,0x0898CDE9,0},{0x0898CDE9,0,(-7),1},{0xDB82D32D,0,(-1),0x32BFADE8}},{{0x1EC6006D,0xF8F27B94,1,(-1)},{0x57855743,0x1EC6006D,0,(-1)},{(-2),5,5,(-2)},{(-1),(-10),0xF8F27B94,0},{0xE614CD31,1,(-1),0},{5,0x0898CDE9,(-1),0},{0x1B13B6E1,1,0x9D5E48A1,0},{0xBD084064,(-10),0x57855743,(-2)}},{{0xCA8DF587,5,0xBD084064,(-1)},{0x32BFADE8,0x1EC6006D,(-2),(-1)},{0,0xF8F27B94,(-1),0x32BFADE8},{1,0,0x283A3923,0xF8F27B94},{1,0x0CC7A0BF,0x9D5E48A1,0x0CC7A0BF},{1,(-1),0x0CC7A0BF,(-1)},{(-1),0x1B13B6E1,0,(-1)},{0xBD084064,0,1,0}},{{0xBD084064,(-1),0,1},{(-1),0,0x0CC7A0BF,0x1EC6006D},{1,0,0x9D5E48A1,1},{1,(-1),(-3),(-1)},{(-1),(-3),1,1},{1,0x0898CDE9,0x1B13B6E1,5},{(-1),1,(-1),(-1)},{0x57855743,0x57855743,1,0xE88D7212}}};
static float g_1713[1] = {0x7.7C78B0p+86};
static int32_t g_1957 = 0x57219E9E;
static int32_t g_1965[7] = {(-8),(-8),(-8),(-8),(-8),(-8),(-8)};
static union U4 g_1986 = {0x2083E035};
static float g_2284[5][6] = {{0x1.Bp+1,0x1.3p+1,0x2.6p-1,0x6.403BE6p+1,0x2.62E70Ap+54,0xA.C4B6D9p+85},{0xA.C4B6D9p+85,(-0x9.Ap+1),0x1.3p+1,0x1.3p+1,(-0x9.Ap+1),0xA.C4B6D9p+85},{0x6.403BE6p+1,0xD.FF71F6p-52,0x2.6p-1,0x1.E09583p-12,0xA.C4B6D9p+85,0xF.803CADp-2},{(-0x9.Ap+1),0x1.Bp+1,(-0x1.9p-1),0xA.C4B6D9p+85,(-0x1.9p-1),0x1.Bp+1},{(-0x9.Ap+1),0xF.803CADp-2,0xA.C4B6D9p+85,0x1.E09583p-12,0x2.6p-1,0xD.FF71F6p-52}};
static int32_t g_2285 = 0x6257C3EA;
static int32_t g_2376 = 6;
static uint8_t g_2549 = 255U;
static float g_2558 = 0xB.541F64p-95;
static uint16_t g_2559[2] = {65535U,65535U};
static int16_t g_2570[5][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
static uint8_t g_2593 = 0x4F;
static float g_2596 = 0x0.5p-1;
static uint8_t g_2677 = 1U;



inline static union U4  func_29(void);
static uint32_t  func_52(struct S2  p_53);
static struct S2  func_54(struct S0  p_55, int16_t  p_56);
inline static struct S0  func_57(int32_t  p_58);
inline static int8_t  func_59(struct S1  p_60);
static float  func_62(union U4  p_63, struct S2  p_64, union U4  p_65, uint32_t  p_66);
static union U4  func_67(int8_t  p_68, struct S0  p_69, const uint32_t  p_70, uint32_t  p_71, uint8_t  p_72);
static int8_t  func_102(int32_t  p_103, int32_t  p_104, float  p_105, struct S2  p_106);
inline static uint8_t  func_109(const struct S1  p_110, int32_t  p_111, uint16_t  p_112, int32_t  p_113);
static struct S1  func_114(struct S0  p_115);





inline static union U4  func_29(void)
{ 
    uint8_t l_32[6][10] = {{1U,255U,248U,1U,0x06,0U,0U,0x06,1U,248U},{0U,0U,0x06,1U,248U,255U,1U,0x96,1U,255U},{0x91,0x06,0xF3,0x06,0x91,0xC3,1U,0U,1U,1U},{1U,0U,255U,255U,255U,255U,0U,1U,0xF3,1U},{0x96,255U,0U,0U,0x91,1U,0x91,0U,0U,255U},{255U,0xC3,0U,0x91,248U,0U,1U,1U,0U,248U}};
    int32_t l_36[5] = {0x89276496,0x89276496,0x89276496,0x89276496,0x89276496};
    struct S1 l_61 = {86,4,78,-5192,-164,22};
    int32_t l_2193[4] = {0x16B263AC,0x16B263AC,0x16B263AC,0x16B263AC};
    const struct S1 l_2238 = {75,446,48,-15408,116,30};
    uint8_t l_2322 = 0x0B;
    uint16_t l_2362 = 0U;
    int8_t l_2381 = 0xF0;
    uint8_t l_2418 = 0xF6;
    int8_t l_2488 = 0xEC;
    int32_t l_2536 = (-1);
    int16_t l_2587 = 0x8483;
    int16_t l_2597 = 4;
    int16_t l_2601 = (-4);
    union U4 l_2642 = {4294967295U};
    int i, j;
    for (g_3 = 0; (g_3 <= 58); g_3 = safe_add_func_uint32_t_u_u(g_3, 1))
    { 
        uint32_t l_2191 = 0x78216E8B;
        int32_t l_2217 = 0x5D59F5CB;
        int32_t l_2219 = (-4);
        int32_t l_2221[10][10] = {{0x622F063D,(-7),(-1),0xF1AF4EC3,7,7,0xF1AF4EC3,(-1),(-7),0x622F063D},{(-7),0x41B261F0,1,7,0x45288643,1,0x45288643,7,0,(-7)},{0x41B261F0,(-1),1,(-7),0x45288643,(-1),(-1),0x45288643,(-7),1},{0x45288643,0x45288643,0x339FEE9C,0x41B261F0,0x622F063D,(-1),0,(-1),0x622F063D,0x41B261F0},{0x41B261F0,0xF1AF4EC3,0x41B261F0,(-1),7,1,0,0,1,7},{0x339FEE9C,0x45288643,0x45288643,0x339FEE9C,0x41B261F0,0x622F063D,(-1),0,(-1),0x622F063D},{1,(-1),0x41B261F0,(-1),1,(-7),0x45288643,(-1),(-1),0x45288643},{0,(-7),0x339FEE9C,0x339FEE9C,(-7),0,7,0x45288643,1,0x45288643},{(-1),0x339FEE9C,1,(-1),1,0x339FEE9C,(-1),7,0x622F063D,0x622F063D},{(-1),0x622F063D,0,0x41B261F0,0x41B261F0,0,0x622F063D,(-1),(-7),7}};
        uint32_t l_2234 = 0x790F5B4F;
        float l_2237 = 0x8.Bp-1;
        float l_2354 = 0xB.C0EEE2p+16;
        int16_t l_2356[7][3][3] = {{{0x7460,0x7460,0xBE46},{7,1,0x372F},{4,0x7460,3}},{{4,7,0x98C2},{7,4,3},{0x7460,4,0x372F}},{{1,7,0xBE46},{0x7460,0x7460,0xBE46},{7,1,0x372F}},{{4,0x7460,3},{4,7,0x98C2},{7,4,3}},{{0x7460,4,0x372F},{1,7,0xBE46},{0x7460,0x7460,0xBE46}},{{7,1,0x372F},{4,0x7460,3},{4,7,0x98C2}},{{7,4,3},{0x7460,4,0x372F},{1,7,0xBE46}}};
        int16_t l_2360 = 0x8360;
        uint8_t l_2397 = 246U;
        uint16_t l_2420 = 65535U;
        int32_t l_2447 = 0xB1C6AF5C;
        int32_t l_2619 = (-1);
        int32_t l_2627 = 1;
        union U4 l_2630[8][8] = {{{0xACB9EFB9},{0x7E7DC54F},{0xEA1C0EC0},{0xEA1C0EC0},{0x7E7DC54F},{0xACB9EFB9},{0x7E7DC54F},{0xEA1C0EC0}},{{8U},{0x7E7DC54F},{8U},{0xACB9EFB9},{0xACB9EFB9},{8U},{0x7E7DC54F},{8U}},{{0xA40B2A71},{0xACB9EFB9},{0xEA1C0EC0},{0xACB9EFB9},{0xA40B2A71},{0xA40B2A71},{0xACB9EFB9},{0xEA1C0EC0}},{{0xA40B2A71},{0xA40B2A71},{0xACB9EFB9},{0xEA1C0EC0},{0xACB9EFB9},{0xA40B2A71},{0xA40B2A71},{0xACB9EFB9}},{{8U},{0xACB9EFB9},{0xACB9EFB9},{8U},{0x7E7DC54F},{8U},{0xACB9EFB9},{0xACB9EFB9}},{{8U},{0xA40B2A71},{0x7E7DC54F},{0x7E7DC54F},{0xA40B2A71},{8U},{0xA40B2A71},{0x7E7DC54F}},{{0xEA1C0EC0},{0xA40B2A71},{0xEA1C0EC0},{8U},{8U},{0xEA1C0EC0},{0xA40B2A71},{0xEA1C0EC0}},{{0xACB9EFB9},{8U},{0x7E7DC54F},{8U},{0xACB9EFB9},{0xACB9EFB9},{8U},{0x7E7DC54F}}};
        uint32_t l_2647 = 4294967295U;
        uint8_t l_2679 = 251U;
        int i, j, k;
        for (g_33 = 5; (g_33 >= 1); g_33 -= 1)
        { 
            uint32_t l_2190 = 4294967295U;
            int32_t l_2220[1][10] = {{0xC7D347D5,0xC7D347D5,0xC7D347D5,0xC7D347D5,0xC7D347D5,0xC7D347D5,0xC7D347D5,0xC7D347D5,0xC7D347D5,0xC7D347D5}};
            uint32_t l_2225 = 0U;
            const struct S1 l_2273 = {28,25,-235,-10497,52,3};
            int32_t l_2283 = 0x110E434E;
            int16_t l_2287[7] = {0x4123,0x25D1,0x4123,0x4123,0x25D1,0x4123,0x4123};
            float l_2292 = 0xB.A00C59p-81;
            int i, j;
            for (g_34 = 0; (g_34 <= 5); g_34 += 1)
            { 
                int32_t l_2192 = 7;
                int32_t l_2209 = 0x50D81C16;
                int32_t l_2214 = 5;
                int32_t l_2222 = 8;
                int32_t l_2223 = 0x3E21066F;
                int32_t l_2224 = 0x3B432E1D;
                int32_t l_2231 = (-10);
                int i, j;
                for (g_35[0] = 0; (g_35[0] <= 5); g_35[0] += 1)
                { 
                    int32_t l_39 = 1;
                    int32_t l_2208 = 0xD771CA85;
                    int32_t l_2215 = (-7);
                    int16_t l_2216 = 0x90D3;
                    int i, j;
                    l_36[1] = l_32[g_33][(g_34 + 2)];
                    l_2193[1] ^= (__builtin_parityl((g_40 = (safe_div_func_uint32_t_u_u(l_32[g_33][(g_34 + 2)], (l_39 &= 0x01D4C3F1))))) >= (safe_mul_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((g_208[0].f0 = (l_36[1] &= (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((l_2191 = (safe_mul_func_int16_t_s_s(((!func_52(func_54(func_57((0x71 | func_59(l_61))), g_1483.f3))) | l_2190), g_34))) > l_2190), g_1483.f2)), 0x29)))) ^ 0x6F539BBF), l_2192)) && g_3), l_2190)));
                    l_2209 = (safe_mul_func_int16_t_s_s((g_82[0].f0 ^= l_2191), (((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(l_2191, g_955)), g_208[0].f3)), (safe_mul_func_int16_t_s_s((l_2192 & g_1965[0]), ((((l_2192 != (++l_32[g_34][(g_35[0] + 2)])) <= ((safe_lshift_func_int16_t_s_u((-1), l_2208)) && 1)) && l_2191) == 0x31A6))))) < l_2191) ^ g_611.f3)));
                    for (l_2209 = 0; (l_2209 <= 2); l_2209 += 1)
                    { 
                        int32_t l_2212 = 0x6040220D;
                        int32_t l_2213 = (-1);
                        int32_t l_2218[7][1] = {{1},{4},{1},{4},{1},{4},{1}};
                        int i, j, k;
                        l_39 = (l_32[g_35[0]][(g_35[0] + 4)] & (g_1427[g_35[0]][(l_2209 + 1)][l_2209] >= ((safe_sub_func_int16_t_s_s(6, (g_249 = l_2209))) != __builtin_ffsl(g_33))));
                        if (l_32[g_33][(g_34 + 2)])
                            continue;
                        --l_2225;
                        if (l_2222)
                            continue;
                    }
                }
                l_36[3] = func_52(func_54(func_57(l_32[g_34][g_33]), (+(((__builtin_parityll(l_32[g_33][(g_34 + 4)]) != (safe_rshift_func_uint16_t_u_u(l_32[g_33][(g_34 + 2)], 3))) || l_2219) > 3))));
                if (l_2231)
                    continue;
                l_2209 = (g_208[0].f4 < (safe_add_func_float_f_f(l_2234, (safe_mul_func_float_f_f((l_2237 = g_1401[0][0].f1), g_611.f8)))));
            }
            g_1483.f5 = func_109(l_2238, g_1401[0][0].f0, (l_2221[7][1] = (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((l_2225 == g_1483.f7), (safe_rshift_func_uint8_t_u_s(6U, l_2234)))), g_1401[0][0].f1))), (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(1U, (safe_mul_func_int8_t_s_s(g_611.f5, 0xC9)))), l_2238.f1)), l_61.f3)), g_1957)));
            for (g_1045 = 1; (g_1045 <= 5); g_1045 += 1)
            { 
                float l_2260 = 0x1.5p+1;
                int32_t l_2261 = (-1);
                int32_t l_2262 = 0xF205CD1D;
                int32_t l_2263 = 0x0EE0EC76;
                int16_t l_2274 = 0xC9AD;
                int8_t l_2286 = 0x4D;
                int32_t l_2288 = (-4);
                int32_t l_2289 = 0xDCF04FB0;
                int32_t l_2290[2];
                int16_t l_2291 = 0xCA3B;
                uint8_t l_2293 = 0xEE;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_2290[i] = 0x1846F19F;
                g_611.f4 = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(func_109(g_208[4], g_208[0].f1, (g_955 &= ((safe_unary_minus_func_int32_t_s(l_2261)) & (++g_94))), (safe_rshift_func_int16_t_s_s(l_61.f0, ((safe_div_func_uint16_t_u_u((0xFF51 || (g_1226[0][1][5] &= 2U)), l_2220[0][5])) ^ g_82[0].f0)))), 10)), 0U)) | l_2262);
                l_2219 = (!(safe_div_func_int8_t_s_s(func_109(l_2273, l_2274, (safe_mod_func_uint32_t_u_u((0x90CA <= 0x82E3), l_2263)), (((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_uint16_t_u_s(65533U, 5)) ^ l_2220[0][9]))) && (g_810[3][1][2] = __builtin_ia32_crc32qi(g_319, g_611.f0))) & l_2238.f3)), g_611.f2)));
                for (l_2274 = 5; (l_2274 >= 1); l_2274 -= 1)
                { 
                    float l_2280 = (-0x1.5p+1);
                    int32_t l_2281 = 1;
                    int32_t l_2282[1][3][4] = {{{0x0C5BC0D7,0x0C5BC0D7,0x0C5BC0D7,0x0C5BC0D7},{0x0C5BC0D7,0x0C5BC0D7,0x0C5BC0D7,0x0C5BC0D7},{0x0C5BC0D7,0x0C5BC0D7,0x0C5BC0D7,0x0C5BC0D7}}};
                    int i, j, k;
                    l_2293++;
                }
                l_2263 = (l_2238.f5 > (l_32[g_1045][(g_1045 + 3)] = g_1045));
            }
        }
    }
    g_35[0] ^= g_319;
    return l_2642;
    
    }




static uint32_t  func_52(struct S2  p_53)
{ 
    int8_t l_1901[3];
    int32_t l_1902 = 1;
    int32_t l_1903[3][8][9] = {{{(-3),1,0,1,0,1,(-3),0x51196B51,(-8)},{0x4D7CA491,0x2285C61C,0,0xD9854CF9,1,(-7),0x117F70BB,1,1},{8,0xF6D5084C,(-3),0,(-8),0,6,0x51196B51,0xF6D5084C},{0xD6514071,(-1),1,0,0,6,8,0xD6514071,0xBFF6D6A9},{0x2285C61C,0x534BFBB1,6,0x117F70BB,0,0x8EC5982B,0xA3C613E2,0xD9854CF9,0xC26DD6DB},{0x2285C61C,(-3),0x51196B51,0x8EC5982B,5,1,5,0x8EC5982B,0x51196B51},{0xD6514071,0xD6514071,0,0,0x7B53471D,0xB78A31ED,(-8),5,(-7)},{8,5,0,0x534BFBB1,0x582EB244,0xD9854CF9,0x51196B51,(-1),0x8EC5982B}},{{0x4D7CA491,0xD9854CF9,0,5,0x534BFBB1,6,(-7),1,0x2285C61C},{(-3),0,0x51196B51,6,1,0,(-7),0xBA02903E,0},{(-7),(-3),6,0,1,0,(-3),(-7),(-3)},{1,0x534BFBB1,1,1,0x534BFBB1,1,0x3A3689E3,0x2285C61C,0xC26DD6DB},{0xD9854CF9,0xBFF6D6A9,(-3),1,0x582EB244,0xC26DD6DB,5,(-8),0xBA02903E},{5,(-7),0,1,0x7B53471D,1,0x3A3689E3,0,0x582EB244},{0xBFF6D6A9,(-8),0,0x4D7CA491,5,0xBA02903E,0x4D7CA491,0x534BFBB1,0xBFF6D6A9},{0x117F70BB,0x51196B51,0,(-1),0,0,(-1),(-7),0xBFF6D6A9}},{{0xC26DD6DB,(-4),0x4D7CA491,0x3A3689E3,(-7),(-7),0x3A3689E3,0x4D7CA491,(-4)},{(-4),0xB78A31ED,0,0xF6D5084C,0,(-1),0,(-4),1},{(-3),(-7),1,(-8),1,8,0,(-3),6},{0x51196B51,0xB78A31ED,1,8,0x5B8B21DB,0x117F70BB,0x1978B48C,0xBA02903E,0x4D7CA491},{0x5B8B21DB,(-4),0xD6514071,6,0x2285C61C,(-7),5,(-2),0xFEF68AFD},{0x4D7CA491,0x51196B51,0x5B8B21DB,6,0xFEF68AFD,(-1),0xB78A31ED,0xB78A31ED,(-1)},{0x117F70BB,8,0x582EB244,8,0x117F70BB,0,(-8),(-7),0x51196B51},{0,0x7B53471D,0xB78A31ED,(-8),5,(-7),0,1,0x7B53471D}}};
    uint16_t l_1904 = 0U;
    union U4 l_1987 = {0U};
    int8_t l_2127 = 0xBD;
    uint16_t l_2159 = 65531U;
    int32_t l_2160 = 4;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1901[i] = 0xEF;
lbl_1935:
    l_1904--;
lbl_2162:
    for (g_94 = (-19); (g_94 <= 39); g_94 = safe_add_func_int32_t_s_s(g_94, 9))
    { 
        uint32_t l_1945 = 9U;
        const int32_t l_1956 = (-9);
        int32_t l_1959 = 0x29793308;
        int32_t l_1960 = 0xC1D60570;
        int32_t l_1961 = 0x0BD4D509;
        int32_t l_1963 = 0x32F25FED;
        int32_t l_1964 = 1;
        int32_t l_1968 = (-3);
        int32_t l_1970 = (-1);
        int32_t l_1973 = 0x85208CDB;
        uint8_t l_2062 = 255U;
        uint32_t l_2066 = 0x0E2E5B0D;
        uint32_t l_2122 = 0xED8E1E48;
        for (g_133 = 0; (g_133 <= 2); g_133 += 1)
        { 
            int32_t l_1913 = 0x1832E5DD;
            int32_t l_1969[2][9][8] = {{{(-2),(-6),1,0xE00672B5,8,1,0,0x7D975DC6},{0,0,4,1,(-2),8,0,0},{0x675DE74C,1,1,1,1,0x675DE74C,8,0},{1,0x675DE74C,8,0,0xCD7ACFF2,1,1,0xCD7ACFF2},{0,0,4,0,(-2),0x355EFA77,(-2),0},{(-6),(-2),(-6),1,0xE00672B5,8,1,0},{(-2),0x7D975DC6,8,1,0xF91D341F,0xCD7ACFF2,0xE00672B5,0x7D975DC6},{(-2),0,2,0xE00672B5,0xE00672B5,2,0,(-2)},{(-6),0,0x7D975DC6,0xCD7ACFF2,(-2),0x675DE74C,(-6),0}},{{0,0xCD7ACFF2,1,1,0xCD7ACFF2,0x675DE74C,0xE00672B5,0x675DE74C},{1,0,(-3),0,1,2,1,1},{0x675DE74C,0,(-6),0x675DE74C,(-2),0xCD7ACFF2,0x7D975DC6,0},{0,0x7D975DC6,(-6),1,8,8,1,(-6)},{(-2),(-2),(-2),1,0x675DE74C,1,0x7D975DC6,0xF91D341F},{0x623E93F7,0xCD7ACFF2,(-3),4,0x7D975DC6,(-3),0x355EFA77,0xF91D341F},{0xCD7ACFF2,4,0x623E93F7,1,0x623E93F7,4,0xCD7ACFF2,0x355EFA77},{(-6),1,0xE00672B5,8,1,0,0x7D975DC6,(-6)},{2,(-6),4,4,1,(-3),(-3),1}}};
            int i, j, k;
            for (g_1045 = 0; (g_1045 <= 0); g_1045 += 1)
            { 
                int i, j, k;
                for (l_1904 = 0; (l_1904 <= 0); l_1904 += 1)
                { 
                    for (g_319 = 0; (g_319 <= 3); g_319 += 1)
                    { 
                        int i, j, k;
                        g_316[(g_1045 + 3)][(l_1904 + 3)][g_319] &= l_1903[(g_1045 + 1)][(g_1045 + 4)][(g_133 + 2)];
                        g_611.f0 = (g_1631[(g_133 + 1)][g_319][g_133] | g_1139);
                    }
                }
                if (l_1903[(g_1045 + 2)][g_1045][g_133])
                    break;
                g_1713[g_1045] = l_1903[g_1045][(g_133 + 4)][(g_1045 + 7)];
            }
            for (g_205 = 0; (g_205 <= 2); g_205 += 1)
            { 
                int32_t l_1914 = 4;
                int32_t l_1958 = 0x341CDFBA;
                int32_t l_1962[5][8] = {{0x9102E42F,0,0,0x9102E42F,0xC93300E3,(-1),0xC93300E3,0x9102E42F},{0,0xC93300E3,0,0x67780287,(-9),(-9),0x67780287,0},{0xC93300E3,0xC93300E3,(-9),(-1),0xBE70FD21,(-1),(-9),0xC93300E3},{0xC93300E3,0,0x67780287,(-9),(-9),0x67780287,0,0xC93300E3},{0,0x9102E42F,0xC93300E3,(-1),0xC93300E3,0x9102E42F,0,0}};
                int i, j;
                for (g_319 = 0; (g_319 <= 0); g_319 += 1)
                { 
                    int32_t l_1921 = 0x5A06AA4F;
                    int32_t l_1971[4][8] = {{0x429AE3E1,8,2,2,8,0x429AE3E1,8,2},{0xCDF97F9B,8,0xCDF97F9B,0x429AE3E1,0x429AE3E1,0xCDF97F9B,8,0xCDF97F9B},{1,0x429AE3E1,2,0x429AE3E1,1,1,0x429AE3E1,2},{1,1,0x429AE3E1,2,0x429AE3E1,1,1,0x429AE3E1}};
                    uint16_t l_1974[7][10][3] = {{{0U,0x131C,0x131C},{0xC60F,0xADFF,0xDFD3},{9U,0x131C,65535U},{0x54DC,0xADFF,0xADFF},{0x5E79,0x131C,65535U},{0xBC93,0xADFF,0x7EFE},{0U,0x131C,0x131C},{0xC60F,0xADFF,0xDFD3},{9U,0x131C,65535U},{0x54DC,0xADFF,0xADFF}},{{0x5E79,0x131C,65535U},{0xBC93,0xADFF,0x7EFE},{0U,0x131C,0x131C},{0xC60F,0xADFF,0xDFD3},{9U,0x131C,65535U},{0x54DC,0xADFF,0xADFF},{0x5E79,0x131C,65535U},{0xBC93,0xADFF,0x7EFE},{0U,0x131C,0x131C},{0xC60F,0xADFF,0xDFD3}},{{9U,0x131C,65535U},{0x54DC,0xADFF,0xADFF},{0x5E79,0x131C,65535U},{0xBC93,0xADFF,0x7EFE},{0U,0x131C,0x131C},{0xC60F,0xADFF,0xDFD3},{9U,0x131C,1U},{0xADFF,0U,0U},{65535U,0U,0U},{0xDFD3,0U,0xE2CD}},{{0x131C,0U,0U},{0x7EFE,0U,0xBD9D},{65535U,0U,1U},{0xADFF,0U,0U},{65535U,0U,0U},{0xDFD3,0U,0xE2CD},{0x131C,0U,0U},{0x7EFE,0U,0xBD9D},{65535U,0U,1U},{0xADFF,0U,0U}},{{65535U,0U,0U},{0xDFD3,0U,0xE2CD},{0x131C,0U,0U},{0x7EFE,0U,0xBD9D},{65535U,0U,1U},{0xADFF,0U,0U},{65535U,0U,0U},{0xDFD3,0U,0xE2CD},{0x131C,0U,0U},{0x7EFE,0U,0xBD9D}},{{65535U,0U,1U},{0xADFF,0U,0U},{65535U,0U,0U},{0xDFD3,0U,0xE2CD},{0x131C,0U,0U},{0x7EFE,0U,0xBD9D},{65535U,0U,1U},{0xADFF,0U,0U},{65535U,0U,0U},{0xDFD3,0U,0xE2CD}},{{0x131C,0U,0U},{0x7EFE,0U,0xBD9D},{65535U,0U,1U},{0xADFF,0U,0U},{65535U,0U,0U},{0xDFD3,0U,0xE2CD},{0x131C,0U,0U},{0x7EFE,0U,0xBD9D},{65535U,0U,1U},{0xADFF,0U,0U}}};
                    int i, j, k;
                    if (l_1903[g_133][(g_133 + 4)][(g_319 + 5)])
                    { 
                        int i, j, k;
                        g_611.f5 = (g_611.f7 ^= (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((l_1913 <= l_1914), (((((((g_764 |= ((l_1901[2] < g_1631[1][3][3]) == 0x79)) ^ (safe_mul_func_int16_t_s_s(0, (((0 < (safe_rshift_func_int16_t_s_u(p_53.f4, (safe_mul_func_int8_t_s_s((l_1921 = ((l_1903[g_205][(g_205 + 5)][(g_319 + 8)] = ((l_1914 | g_1483.f3) | p_53.f0)) && 0xA7A722A0)), 0x0F))))) | p_53.f6) < 0U)))) && 0x558A5533) | g_82[0].f0) < p_53.f9) <= p_53.f2) >= g_334))), 5)));
                    }
                    else
                    { 
                        int32_t l_1934 = 0xD9532439;
                        g_611.f4 |= (__builtin_bswap32(g_1427[5][2][1]) || (safe_sub_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_1934 = (1U > (safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((g_611.f0 >= (l_1903[2][2][4] = (4 | g_84))) && l_1913) | g_133), (safe_lshift_func_uint8_t_u_u(0x83, 2)))), l_1904)))), 65527U)), p_53.f5)) < 0x5C342F32) != p_53.f3) <= 0xB1), p_53.f9)));
                        if (g_611.f7)
                            goto lbl_1935;
                    }
                    if (g_611.f4)
                    { 
                        uint16_t l_1938 = 0x1DB4;
                        if (g_1483.f5)
                            break;
                        p_53.f4 |= (safe_mul_func_int16_t_s_s(g_1401[0][0].f1, (p_53.f3 >= (l_1938 = p_53.f8))));
                        if (p_53.f0)
                            continue;
                    }
                    else
                    { 
                        int8_t l_1939 = 0x62;
                        int32_t l_1951 = (-2);
                        int32_t l_1966 = 0x5D423CCE;
                        int32_t l_1967 = 0x1FB48660;
                        int32_t l_1972[3][9][1] = {{{0xB183E583},{0x1E4EB3F7},{0xB183E583},{0x1E4EB3F7},{0xB183E583},{0x1E4EB3F7},{0xB183E583},{0x1E4EB3F7},{0xB183E583}},{{0x1E4EB3F7},{0xB183E583},{0x1E4EB3F7},{0xB183E583},{0x1E4EB3F7},{0xB183E583},{0x1E4EB3F7},{0xB183E583},{0x1E4EB3F7}},{{0xB183E583},{0x1E4EB3F7},{0xB183E583},{0x1E4EB3F7},{0xB183E583},{0x1E4EB3F7},{0xB183E583},{0x1E4EB3F7},{0xB183E583}}};
                        int i, j, k;
                        g_1957 = (l_1939 < (((safe_add_func_float_f_f((g_1713[g_319] = p_53.f0), (p_53.f1 < (safe_add_func_float_f_f(((((g_316[2][6][1] > p_53.f6) >= (-((g_325 = l_1914) >= (l_1945 = g_611.f1)))) < (((-__builtin_ffs((safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((++g_1427[1][3][0]) || (p_53.f5 <= (safe_add_func_int16_t_s_s((((((l_1956 != 0xFE) | p_53.f9) ^ g_611.f5) == 5U) < p_53.f9), (-2))))), 0x52B0)), l_1951)))) <= (-0x1.Fp+1)) != g_208[0].f3)) > 0x4.7A80B0p+29), (-0x5.9p+1)))))) >= g_1483.f0) != 0x8.6DA089p-37));
                        ++l_1974[1][0][1];
                    }
                }
            }
        }
        for (g_764 = 0; (g_764 >= 36); ++g_764)
        { 
            if (p_53.f1)
                break;
            for (g_205 = 0; (g_205 < 6); ++g_205)
            { 
                int16_t l_1983[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1983[i] = 0x6137;
                l_1983[0] = __builtin_clzl((safe_sub_func_uint32_t_u_u(p_53.f4, g_249)));
                if (p_53.f3)
                    continue;
                if (l_1983[0])
                    break;
            }
        }
        l_1903[2][2][4] = ((l_1902 = (((g_1713[0] = ((safe_mul_func_float_f_f(func_62(g_1401[0][0], p_53, (l_1987 = (g_1986 = g_1401[0][0])), g_611.f8), (safe_add_func_float_f_f(((-0x2.791BDAp+90) != (safe_add_func_float_f_f((+(g_82[0].f1 > g_203)), g_1226[0][1][5]))), g_1427[5][2][1])))) == g_1401[0][0].f0)) != p_53.f6) >= p_53.f1)) > p_53.f8);
        
                for (l_1973 = 0; (l_1973 < 28); l_1973 = safe_add_func_uint8_t_u_u(l_1973, 6))
        { 
            int32_t l_2030 = (-1);
            const int32_t l_2073 = (-4);
            int32_t l_2097 = 0x1F0FA8BD;
            if ((g_611.f3 = (l_1959 = (safe_mod_func_int8_t_s_s((0xA37C & (((l_1987.f1 <= (safe_add_func_int32_t_s_s((l_1903[2][2][4] = (p_53.f4 <= (g_82[0].f0 = (((safe_sub_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(2U, (g_208[0].f0 = l_1960))) <= l_1964), (p_53.f5 == 0xBD28))) && (p_53.f2 >= p_53.f7)) == 0xC63D)))), p_53.f0))) == 0x627B8FFE) == p_53.f8)), l_1901[0])))))
            { 
                int32_t l_2080[9] = {0,0x4C4B491D,0x4C4B491D,0,0x4C4B491D,0x4C4B491D,0,0x4C4B491D,0x4C4B491D};
                int i;
                if ((g_764 || 248U))
                { 
                    float l_2014 = 0x1.7p-1;
                    for (l_1904 = (-27); (l_1904 < 31); l_1904 = safe_add_func_uint16_t_u_u(l_1904, 7))
                    { 
                        l_1903[2][2][4] = (safe_mul_func_float_f_f((0x0.0p+1 != p_53.f9), g_33));
                        g_208[0].f3 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(g_1483.f1, (((l_1970 = ((safe_sub_func_uint32_t_u_u(g_611.f2, (safe_rshift_func_uint16_t_u_u(__builtin_popcountll((safe_rshift_func_int16_t_s_u(g_1387, p_53.f4))), (safe_lshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(__builtin_parityll((~1U)), (g_1226[0][0][1] = (l_2030 = g_208[0].f2)))), (~p_53.f9))), p_53.f8)) && g_1427[5][1][0]), 12)))))) ^ p_53.f7)) >= p_53.f9) && 0x1D))), p_53.f8)), p_53.f1));
                    }
                }
                else
                { 
                    const uint16_t l_2054 = 65535U;
                    int32_t l_2055 = 1;
                    for (g_133 = 0; (g_133 >= 46); g_133++)
                    { 
                        uint16_t l_2044 = 0x6078;
                        int32_t l_2063 = 0x8F6EC70E;
                        l_2062 = (safe_div_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s((g_1965[0] && ((safe_mul_func_uint8_t_u_u(p_53.f4, l_2044)) && (safe_unary_minus_func_uint32_t_u((safe_mul_func_int32_t_s_s((g_1965[6] = (safe_rshift_func_int8_t_s_u((g_1387 = (l_2055 &= (safe_lshift_func_uint16_t_u_u((l_2030 > ((p_53.f7 ^ l_2054) < __builtin_popcount(p_53.f6))), 12)))), 4))), (((safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(g_421[1][0], g_94)) > 2U), p_53.f0)), p_53.f8)) == 4) != g_1483.f6))))))), g_208[0].f0)), 0x98BEEBDF)), p_53.f5)) & 0x617A2E0B) ^ g_1427[5][2][1]) <= p_53.f7), g_252));
                        l_2063 |= l_2055;
                        p_53.f5 = (p_53.f3 = (safe_mul_func_int16_t_s_s(l_2066, (l_2030 | (((safe_rshift_func_int16_t_s_u((l_2044 & ((safe_mul_func_uint8_t_u_u(g_33, (l_1959 = 0x9A))) != (l_1945 >= l_2044))), (safe_div_func_uint16_t_u_u(g_421[4][1], g_611.f5)))) > l_2054) < l_2073)))));
                        l_2063 ^= (safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0U, p_53.f4)), __builtin_bswap32(l_2080[1]))), (65533U ^ (((((safe_mod_func_uint8_t_u_u(__builtin_popcountll(p_53.f8), (p_53.f6 && g_810[4][2][4]))) < p_53.f2) <= p_53.f1) < p_53.f0) || g_611.f6))));
                    }
                }
            }
            else
            { 
                uint32_t l_2088 = 4294967294U;
                int32_t l_2104 = 0x5B5A9362;
                int32_t l_2108[5] = {(-9),(-9),(-9),(-9),(-9)};
                int i;
                l_2030 = 0x5.5FD502p+77;
                if ((+(safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((p_53.f8 & (l_2030 = (l_2088--))), ((__builtin_clz((g_252++)) & (l_2097 &= (p_53.f2 || (g_1427[0][4][0] = (safe_mul_func_uint8_t_u_u(__builtin_ffs((safe_sub_func_uint16_t_u_u(p_53.f6, g_611.f7))), p_53.f8)))))) >= (safe_rshift_func_uint8_t_u_u(0xD9, 2))))), (safe_rshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(l_2104, (-1))) >= g_34), p_53.f3))))))
                { 
                    int8_t l_2105 = 0xF6;
                    l_2105 = (l_1903[1][0][8] = p_53.f6);
                    if (g_135)
                        break;
                    p_53.f7 = (l_1961 = (0x28 && 0x09));
                    l_2104 = (p_53.f0 <= l_2104);
                }
                else
                { 
                    int32_t l_2120[4][1][8] = {{{(-1),(-1),0x19D0DC68,(-1),(-1),0x19D0DC68,(-1),(-1)}},{{1,(-1),1,1,(-1),1,1,(-1)}},{{(-1),1,1,(-1),0x19D0DC68,0x19D0DC68,1,0x19D0DC68}},{{1,1,(-1),1,1,(-1),1,1}}};
                    int32_t l_2121[6][10][3] = {{{0,0xCE5E4F90,0x3C3DFD61},{(-1),0xFB3964A8,0xC5694B33},{0x5450AE0D,0x68BC5D5E,4},{0x19DF0761,0xA828F2C0,(-1)},{1,0,(-1)},{0,(-1),4},{4,(-7),0xC5694B33},{0x1ACFB71C,4,0x3C3DFD61},{0,0,0xB36011A3},{0,0,1}},{{0x68BC5D5E,(-1),(-1)},{0x8424804D,3,0},{0x5450AE0D,4,0x85A19F89},{0xACBC3C9A,0x19DF0761,0},{(-1),0x31E42CAE,0x31E42CAE},{(-9),0x0A3F8783,(-1)},{0x88E16CFF,(-8),(-1)},{0xCED12BEE,0x68BC5D5E,0x3C3DFD61},{0xACBC3C9A,0x5450AE0D,0x9828552C},{7,0x68BC5D5E,(-8)}},{{(-1),(-8),0xE15A56ED},{1,0x0A3F8783,0x8424804D},{0x689CEFDC,0x31E42CAE,4},{0,0x19DF0761,0x9828552C},{0xDF889F8D,4,0x38EBB704},{(-8),3,0x969B6455},{0,(-1),0},{(-1),0,(-1)},{0x19DF0761,0,0},{7,4,1}},{{0xB36011A3,(-7),0xB7B8E447},{(-1),(-1),0x6762C909},{8,0,(-1)},{8,0xA828F2C0,0xB36011A3},{(-1),0x68BC5D5E,0x38EBB704},{0xB36011A3,0xFB3964A8,0x84B0DA8F},{7,0xCE5E4F90,4},{0x19DF0761,1,0xE15A56ED},{(-1),0x1ACFB71C,(-1)},{0,0x31E42CAE,(-8)}},{{(-8),(-7),0x84B0DA8F},{0xDF889F8D,3,0x264B289A},{0,8,0x969B6455},{0x689CEFDC,0x689CEFDC,1},{1,0,0x31E42CAE},{(-1),3,0xB7B8E447},{7,3,1},{0xACBC3C9A,(-1),0xB7B8E447},{0xCED12BEE,(-1),0x31E42CAE},{0x88E16CFF,0,1}},{{(-9),(-8),0x969B6455},{(-1),0xCE5E4F90,0x264B289A},{0xACBC3C9A,(-3),0x84B0DA8F},{0x5450AE0D,(-1),(-8)},{0x8424804D,1,(-1)},{0x68BC5D5E,0x0A3F8783,0xE15A56ED},{0,(-1),4},{0,(-1),0x84B0DA8F},{0x1ACFB71C,3,0x38EBB704},{4,8,0xDF889F8D}}};
                    int i, j, k;
                    l_2104 |= l_1903[2][2][4];
                    for (g_205 = (-18); (g_205 > 45); g_205 = safe_add_func_int8_t_s_s(g_205, 9))
                    { 
                        uint32_t l_2109 = 0xB1589BD6;
                        l_2109++;
                        p_53.f7 &= (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0U, (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_810[7][0][2], __builtin_ctz((p_53.f1 > l_2109)))), ((g_611.f0 = (g_133 != (g_1483.f8 || ((p_53.f5 >= (l_1904 <= 0x76)) == g_1401[0][0].f1)))) & (-1)))))), 0U));
                        l_2122++;
                        if (p_53.f1)
                            break;
                    }
                    l_1902 = (g_1483.f1 ^= (safe_mod_func_int8_t_s_s(g_1483.f4, l_2127)));
                }
            }
        }
    }
    for (l_1904 = 0; (l_1904 != 12); l_1904++)
    { 
        uint16_t l_2146 = 65535U;
        int32_t l_2161 = 5;
        if (p_53.f3)
            break;
        g_1713[0] = ((safe_div_func_float_f_f(((!(safe_sub_func_float_f_f(0x9.37641Fp-93, (safe_mul_func_float_f_f((0x1.Fp-1 < __builtin_ctzll(((l_1901[0] && (l_1903[0][4][1] | ((safe_mul_func_uint16_t_u_u(__builtin_clzl((g_611.f9 ^ (safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_u((!(0x63AA == l_2146)), 6)) || l_1903[2][2][4]) >= g_1483.f5), g_208[0].f0)) == 0U), g_133)))), l_1904)) || l_2127))) | 0xFEA8972D))), g_82[0].f1))))) == (-0x9.Ap+1)), p_53.f4)) <= l_2146);
        for (g_764 = 0; (g_764 >= 56); ++g_764)
        { 
            int32_t l_2168 = 1;
            int32_t l_2189 = (-1);
            for (g_249 = (-24); (g_249 >= (-11)); ++g_249)
            { 
                l_2161 = ((__builtin_popcountll((((1U && (p_53.f5 <= g_611.f1)) == (safe_lshift_func_uint16_t_u_s(__builtin_ctz(l_2127), 11))) <= (g_1483.f1 >= (((safe_mod_func_uint8_t_u_u(g_1483.f2, (l_2159 &= __builtin_bswap32((p_53.f1 ^ ((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((p_53.f1 < g_241), 0x531D69DD)), 5)) <= 0xF1)))))) | p_53.f6) < l_2146)))) <= l_2160) >= 0x1.9p+1);
            }
            if (g_94)
                goto lbl_2162;
            if ((func_109(g_208[0], (0U || (safe_mod_func_int32_t_s_s((0x02551F8F > 6U), l_1987.f1))), p_53.f2, g_1401[0][0].f1) ^ p_53.f9))
            { 
                uint32_t l_2170 = 0x451623BF;
                g_316[1][5][2] = (p_53.f1 != (safe_unary_minus_func_uint8_t_u(((l_2168 = (((safe_div_func_int32_t_s_s(l_2168, g_1483.f2)) ^ ((!((p_53.f1 ^ ((g_1139 && g_955) <= p_53.f9)) <= (l_2170 > ((safe_add_func_uint8_t_u_u(g_135, g_1483.f2)) != 0)))) || 0x9AE02155)) == g_208[0].f0)) && 0x0148))));
            }
            else
            { 
                l_2168 |= p_53.f7;
                for (l_2160 = (-7); (l_2160 == (-21)); l_2160 = safe_sub_func_int16_t_s_s(l_2160, 4))
                { 
                    if (p_53.f0)
                        goto lbl_1935;
                    for (l_1987.f1 = (-28); (l_1987.f1 != 2); l_1987.f1 = safe_add_func_uint16_t_u_u(l_1987.f1, 3))
                    { 
                        g_325 = p_53.f1;
                        return p_53.f5;
                    }
                    
                                        return l_2161;
                }
                g_1631[2][4][1] ^= func_109(g_208[3], l_2168, (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(0xCF89, g_241)), ((((safe_add_func_int32_t_s_s(l_2161, l_2161)) ^ 255U) > (safe_sub_func_int16_t_s_s(((2U ^ ((safe_mod_func_int8_t_s_s(((l_2189 = ((((p_53.f1 | p_53.f8) != l_2168) <= 65531U) == 1U)) > 1), g_84)) < g_611.f3)) > l_2168), p_53.f7))) || g_611.f4))), p_53.f4)), p_53.f4);
            }
        }
    }
    l_1903[0][6][4] = g_1483.f9;
    return l_2127;
}




static struct S2  func_54(struct S0  p_55, int16_t  p_56)
{ 
    int16_t l_1891 = 0x7780;
    int32_t l_1892 = (-10);
    int32_t l_1896[2][8] = {{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0}};
    struct S2 l_1900 = {18,10,-99,-31,-122,-865,-87,-203,7754,-9691};
    int i, j;
    l_1892 = l_1891;
    l_1896[1][1] ^= (safe_div_func_int16_t_s_s((l_1892 &= p_55.f0), ((g_316[2][3][2] & l_1891) & (g_1226[1][3][7] = (g_764 = (l_1891 && (safe_unary_minus_func_uint8_t_u(p_55.f1))))))));
    p_55.f1 &= (g_1483.f3 = ((0xC281A178 > g_999) ^ (safe_sub_func_uint16_t_u_u((g_421[4][1] || ((+g_35[0]) && g_1226[0][3][4])), p_55.f0))));
    g_611.f4 = p_56;
    return l_1900;
}




inline static struct S0  func_57(int32_t  p_58)
{ 
    int32_t l_1775 = 0x72219869;
    int32_t l_1778 = 0x85926E5A;
    int32_t l_1779[10] = {(-3),(-3),(-3),(-3),(-3),(-3),(-3),(-3),(-3),(-3)};
    struct S0 l_1808 = {0xE4AF,0xE4331274,1};
    uint32_t l_1829 = 0x5495BAB8;
    struct S2 l_1890 = {-17,-0,-4538,-16,199,-3639,929,132,15551,20763};
    int i;
    if ((__builtin_popcountll(g_142[0][1]) == g_421[4][1]))
    { 
        int32_t l_1777 = 0x3233461B;
        int32_t l_1782 = 0xC7526B29;
        float l_1783 = (-0x3.Bp-1);
        int32_t l_1784 = (-1);
        int32_t l_1787 = 0;
        int32_t l_1790 = 0x8FF5DC93;
        int32_t l_1791[10][3][2] = {{{0x98F5B209,0xE08A9D29},{0x98F5B209,0x264FA53E},{0xEFEFAD52,0}},{{0x264FA53E,0xB626283E},{0x7065DB82,0xEFEFAD52},{0x19417B06,9}},{{9,0x20155854},{0x23DBCF74,0},{(-1),0x7065DB82}},{{4,0xC9950F27},{0xB626283E,0xC9950F27},{4,0x7065DB82}},{{(-1),0},{0x23DBCF74,0x20155854},{9,9}},{{0x19417B06,0xEFEFAD52},{0x7065DB82,0xB626283E},{0x264FA53E,0}},{{0xEFEFAD52,0x264FA53E},{0x98F5B209,0xE08A9D29},{0x98F5B209,0x264FA53E}},{{0xEFEFAD52,0},{0x264FA53E,0xB626283E},{0x7065DB82,0xEFEFAD52}},{{0x19417B06,9},{9,0x20155854},{0x23DBCF74,0}},{{(-1),0x7065DB82},{4,0xC9950F27},{0xB626283E,0xC9950F27}}};
        int32_t l_1795 = 2;
        int8_t l_1796[7][8] = {{1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1}};
        int i, j, k;
        for (g_241 = 10; (g_241 <= 16); g_241++)
        { 
            int16_t l_1776 = 0;
            int32_t l_1780 = (-1);
            int32_t l_1781 = (-1);
            int32_t l_1785 = 0x30DCE7A4;
            int32_t l_1786 = 0xB1DADAA8;
            int32_t l_1788 = (-3);
            int32_t l_1789 = 8;
            int32_t l_1792 = 0;
            int32_t l_1793 = (-7);
            int32_t l_1794[6][8][3] = {{{0,0x9EB495C2,0x718FCAF1},{1,(-1),0x67E8C015},{0xFC4CF7B3,0x5C1E14D3,0x09CC6357},{0x906DE077,(-1),0x67E8C015},{0x09F0A2AD,1,0x718FCAF1},{(-1),1,0x67E8C015},{0,0x9EB495C2,0x09CC6357},{1,0x129309D1,0x67E8C015}},{{(-4),0x5C1E14D3,0x718FCAF1},{0x906DE077,0x906DE077,0x67E8C015},{0x59BFC590,1,0x09CC6357},{(-1),0xAAE62C7B,0x67E8C015},{0,0x9EB495C2,0x718FCAF1},{1,(-1),0x67E8C015},{0xFC4CF7B3,0x5C1E14D3,0x09CC6357},{0x906DE077,(-1),(-1)}},{{1,0x248828B2,0},{0,0x3C0B3E91,(-1)},{0x65DF2D80,1,0},{0x3C0B3E91,0xE11F87DD,(-1)},{0x0148E8D3,0,0},{1,1,(-1)},{(-1),0x248828B2,0},{0,0x42FE5673,(-1)}},{{0x59BC785D,1,0},{0x3C0B3E91,0,(-1)},{0xA50F0354,0,0},{1,0xA0F8F1FA,(-1)},{1,0x248828B2,0},{0,0x3C0B3E91,(-1)},{0x65DF2D80,1,0},{0x3C0B3E91,0xE11F87DD,(-1)}},{{0x0148E8D3,0,0},{1,1,(-1)},{(-1),0x248828B2,0},{0,0x42FE5673,(-1)},{0x59BC785D,1,0},{0x3C0B3E91,0,(-1)},{0xA50F0354,0,0},{1,0xA0F8F1FA,(-1)}},{{1,0x248828B2,0},{0,0x3C0B3E91,(-1)},{0x65DF2D80,1,0},{0x3C0B3E91,0xE11F87DD,(-1)},{0x0148E8D3,0,0},{1,1,(-1)},{(-1),0x248828B2,0},{0,0x42FE5673,(-1)}}};
            uint32_t l_1797[8][5][6] = {{{7U,4294967295U,0U,0x9C74EAF1,0xFD907DE1,1U},{0xFC4DFCCF,0x4263DD56,0U,0xCA5E7C88,0x900E3DCC,0xCB897B8F},{0x31DADFDA,7U,0x6D7D1C71,4294967295U,0x4DA6ACEA,0x31DADFDA},{1U,7U,0U,6U,0xECF5FEF9,0xFD907DE1},{0U,7U,0U,0x837D4459,4294967288U,0x4DA6ACEA}},{{0xFD907DE1,4294967295U,0x837D4459,0xB4D54BE4,0x23BD6B04,0x23BD6B04},{0x6D7D1C71,0xECF5FEF9,0xECF5FEF9,0x6D7D1C71,3U,0U},{0x31DADFDA,0xFCE926E6,0U,0x4DA6ACEA,0xB4D54BE4,0xCA5E7C88},{0U,6U,6U,4294967293U,0xB4D54BE4,0xFD907DE1},{0x4263DD56,0xFCE926E6,1U,0U,3U,0U}},{{0xA52AACA3,0xECF5FEF9,4294967294U,6U,0x23BD6B04,4294967290U},{0U,4294967295U,0U,0xCB897B8F,4294967288U,0x6D7D1C71},{0xFC4DFCCF,7U,0x8FC5D579,0x4DA6ACEA,0xECF5FEF9,0xCB897B8F},{0x08C17B6E,7U,4294967295U,4294967294U,0x4DA6ACEA,0x08C17B6E},{4294967295U,7U,1U,6U,0x900E3DCC,0U}},{{0xFD907DE1,0x4263DD56,0U,0x4263DD56,0U,4294967295U},{1U,0x66438435,0x25A7E4CE,4294967290U,0xFD907DE1,0U},{0xA05708BB,4294967290U,4294967293U,0x66438435,0xCA5E7C88,0U},{6U,0U,0x25A7E4CE,0x20377D31,0U,4294967295U},{0xCA5E7C88,0xD3C60DA1,7U,7U,0x23BD6B04,0x31DADFDA}},{{5U,0x8FC5D579,3U,0xCA5E7C88,0x4DA6ACEA,6U},{4294967293U,0xCB897B8F,0x66438435,0xFC142CC9,0xFD907DE1,0x837D4459},{0U,0xA52AACA3,1U,0U,0x31DADFDA,0xA05708BB},{0x4DA6ACEA,5U,0x31DADFDA,0x20377D31,0xCB897B8F,0x4263DD56},{0xFC4DFCCF,1U,0x900E3DCC,0x900E3DCC,1U,0xFC4DFCCF}},{{0xECF5FEF9,0x6D7D1C71,3U,0U,0x9C74EAF1,0U},{1U,0x25A7E4CE,0xCA5E7C88,0U,0x08C17B6E,4294967294U},{1U,0xA52AACA3,0U,0U,0x8FC5D579,0U},{0xECF5FEF9,0x9C74EAF1,0xCB897B8F,0x900E3DCC,0xCA5E7C88,0U},{0xFC4DFCCF,0xFD907DE1,4294967291U,0x20377D31,0x23BD6B04,0x6D7D1C71}},{{0x4DA6ACEA,4294967295U,7U,0U,0x857076DA,0U},{0U,0x8FC5D579,0xFC4DFCCF,0xFC142CC9,7U,0U},{4294967293U,4294967290U,0xA05708BB,0xCA5E7C88,0x8FC5D579,0x837D4459},{5U,0xECF5FEF9,0x31DADFDA,7U,0x31DADFDA,0xECF5FEF9},{0xCA5E7C88,6U,0xDA4DBAE0,0x20377D31,4294967290U,0U}},{{6U,0x6D7D1C71,0x900E3DCC,0x66438435,4294967295U,6U},{0xA05708BB,0x6D7D1C71,0xFC4DFCCF,4294967290U,4294967290U,1U},{1U,6U,0xFC142CC9,0x25A7E4CE,0x31DADFDA,4294967294U},{0U,0xECF5FEF9,0x25A7E4CE,0xFCE926E6,0x8FC5D579,0U},{0x66438435,4294967290U,4294967287U,0x900E3DCC,7U,0x8FC5D579}}};
            int i, j, k;
            l_1797[5][2][2]--;
        }
        for (g_252 = 7; (g_252 == 50); g_252 = safe_add_func_uint8_t_u_u(g_252, 3))
        { 
            g_611.f9 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_33, g_142[0][5])), 1));
            if (l_1796[5][0])
                break;
        }
        l_1779[4] = (0x8.7p+1 > g_208[0].f4);
        for (l_1787 = 10; (l_1787 == 15); ++l_1787)
        { 
            if (g_142[0][4])
                break;
            return l_1808;
        }
    }
    else
    { 
        int32_t l_1813[6][10];
        int32_t l_1814 = 0x6D42934D;
        int32_t l_1815[1][7] = {{0x2053E66B,0x2053E66B,0x2053E66B,0x2053E66B,0x2053E66B,0x2053E66B,0x2053E66B}};
        int32_t l_1824[9] = {(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1),(-1)};
        int32_t l_1827 = 0x8D480804;
        int16_t l_1828 = (-6);
        struct S2 l_1843 = {31,0,206,12,149,692,-1205,92,42509,29371};
        union U4 l_1844 = {1U};
        struct S1 l_1876[3] = {{64,432,-126,6998,38,28},{64,432,-126,6998,38,28},{64,432,-126,6998,38,28}};
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 10; j++)
                l_1813[i][j] = 0;
        }
        p_58 |= l_1808.f0;
        l_1829 = ((safe_rshift_func_uint16_t_u_s(p_58, (l_1815[0][6] = (l_1814 = (safe_lshift_func_int16_t_s_u(0x6A35, ((l_1813[1][8] = p_58) <= p_58))))))) >= (g_421[4][1] |= (safe_lshift_func_int8_t_s_s(((g_611.f5 == (safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((--g_252), __builtin_popcountl((0x78 == (g_1427[5][2][1] = (l_1824[3] | ((((safe_sub_func_uint16_t_u_u(0xBB22, (__builtin_ffsll((l_1827 = (0x45774DD9 != l_1827))) ^ 8U))) <= g_1401[0][0].f1) != p_58) || g_241))))))) | l_1808.f2), l_1828))) || g_999), 0))));
        if (((((1U ^ (safe_sub_func_uint8_t_u_u((l_1779[4] = p_58), (0 != g_421[2][0])))) < 0xBF08) != 0x9A1C) <= 0))
        { 
            struct S0 l_1842 = {-6,-1,0x5AF8DC7C};
            l_1779[4] = 0x4.744A2Bp-75;
            if (p_58)
            { 
                g_1483.f5 ^= (p_58 = __builtin_ffsl(p_58));
                g_1713[0] = func_62(func_67((g_203 = (safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(((l_1808.f0 && ((l_1813[3][9] ^= (g_203 > p_58)) >= (8 & (safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(p_58, 9U)), g_208[0].f4))))) <= (p_58 && (((safe_lshift_func_uint16_t_u_s(1U, 9)) & g_611.f9) <= p_58))), g_1226[0][1][6])) & l_1828), 4U))), l_1842, g_611.f8, g_611.f5, g_249), l_1843, l_1844, l_1842.f1);
                l_1842.f1 ^= ((-7) <= (safe_rshift_func_uint16_t_u_u((g_1483.f1 & ((g_133 ^= g_208[0].f4) >= __builtin_parityl(p_58))), 15)));
            }
            else
            { 
                int8_t l_1849 = 0x77;
                for (g_1045 = (-11); (g_1045 <= 6); g_1045 = safe_add_func_int8_t_s_s(g_1045, 1))
                { 
                    uint32_t l_1850 = 0x1419163A;
                    l_1850++;
                    p_58 = (safe_div_func_uint16_t_u_u(g_1483.f1, l_1843.f7));
                }
                g_82[0].f1 |= (-10);
            }
        }
        else
        { 
            uint32_t l_1874 = 0x89F0D25F;
            int32_t l_1875 = 0x6F3EA443;
            int32_t l_1877[6];
            uint32_t l_1878 = 1U;
            int i;
            for (i = 0; i < 6; i++)
                l_1877[i] = 0x33568765;
            l_1808.f1 = g_241;
            if (p_58)
            { 
                p_58 ^= (0x78 >= (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(0x8C0C, g_1483.f1)) ^ (g_205++)), (-8))));
                return g_82[0];
            }
            else
            { 
                float l_1867 = 0x1.B8A3C0p+12;
                p_58 = func_102((safe_sub_func_int16_t_s_s(((l_1815[0][6] = ((safe_add_func_int32_t_s_s((-1), g_1483.f0)) ^ 0x19)) != (__builtin_ia32_crc32qi(l_1814, (l_1779[8] &= ((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(g_94, 0x72)), 13)) >= (safe_add_func_int8_t_s_s(g_611.f0, (l_1874 &= g_84)))))) != l_1778)), p_58)), l_1875, p_58, g_611);
                p_58 = func_59(l_1876[1]);
            }
            --l_1878;
        }
    }
    g_1631[2][4][1] = (l_1778 && (safe_sub_func_int32_t_s_s(p_58, p_58)));
    if (func_59(func_114(l_1808)))
    { 
        uint8_t l_1883 = 1U;
        --l_1883;
    }
    else
    { 
        const uint16_t l_1886 = 1U;
        int32_t l_1887 = 0x87124485;
        p_58 = (l_1887 = (p_58 > l_1886));
    }
    l_1779[3] &= ((p_58 <= __builtin_ffs(g_142[0][8])) || func_102((l_1808.f1 <= ((g_1483.f3 ^ __builtin_parityl(p_58)) || p_58)), (l_1778 ^= (safe_lshift_func_int16_t_s_u((g_94 > p_58), 5))), p_58, l_1890));
    return g_82[0];
}




inline static int8_t  func_59(struct S1  p_60)
{ 
    uint16_t l_79[6][7] = {{0U,0x693C,1U,1U,0x693C,0U,0x693C},{0x3B93,0U,0U,0x3B93,0x693C,0x3B93,0U},{0xB7CF,0xB7CF,0U,1U,0U,0xB7CF,0xB7CF},{0xB7CF,0U,1U,0U,0xB7CF,0U,0x3B93},{1U,0xB7CF,1U,0x3B93,0x3B93,1U,0xB7CF},{0x3B93,0xB7CF,0x693C,0x693C,0xB7CF,0x3B93,0xB7CF}};
    int32_t l_81 = 0xE5B495AE;
    union U4 l_1484 = {4294967295U};
    int16_t l_1714 = 0x5ECE;
    struct S2 l_1730 = {-40,-29,3843,-31,-230,-1249,1109,-245,31233,17291};
    float l_1769[8] = {0xD.93226Fp-50,0xD.93226Fp-50,0xD.93226Fp-50,0xD.93226Fp-50,0xD.93226Fp-50,0xD.93226Fp-50,0xD.93226Fp-50,0xD.93226Fp-50};
    int i, j;
    l_1714 = func_62(func_67(((safe_rshift_func_uint16_t_u_u(g_35[0], p_60.f3)) & ((safe_sub_func_uint16_t_u_u(l_79[2][0], 0x36B4)) > (__builtin_popcount(__builtin_ctzll(p_60.f5)) != (l_81 = (+0))))), g_82[0], p_60.f3, g_34, g_82[0].f1), g_1483, l_1484, l_79[4][3]);
    l_1730.f5 = ((l_1484.f0 <= (safe_mul_func_float_f_f((safe_sub_func_float_f_f(0x6.5FE328p-94, ((p_60.f0 >= (safe_add_func_float_f_f(l_1484.f1, 0x9.55CC95p-93))) != (g_1713[0] = (safe_sub_func_float_f_f((l_1730.f3 = (!(l_1730.f0 = (g_208[0].f4 >= (__builtin_clzl(((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((func_102(((safe_rshift_func_int8_t_s_s((-4), 1)) == __builtin_ctzll((l_81 = l_1484.f0))), g_1226[1][1][2], l_1484.f1, l_1730) & g_34), 11)), p_60.f0)) ^ 0x41C1)) == l_1730.f8))))), 0x1.8p-1)))))), 0x6.646E00p-19))) <= (-0x9.Fp-1));
    l_1730.f3 = __builtin_parity(p_60.f4);
    for (g_999 = 0; (g_999 <= 0); g_999 += 1)
    { 
        int8_t l_1731 = 0xFC;
        uint32_t l_1766 = 0xF61821AD;
        l_1731 = g_1483.f3;
        for (g_135 = 0; (g_135 <= 3); g_135 += 1)
        { 
            int32_t l_1740 = 0;
            int32_t l_1744 = 5;
            int32_t l_1770 = 0x3E295544;
            int i;
            g_1713[0] = (safe_div_func_float_f_f(g_1713[g_999], ((safe_div_func_float_f_f((g_1713[g_999] <= (p_60.f4 <= (safe_mul_func_float_f_f((safe_div_func_float_f_f((l_1740 >= (0x1.5p+1 <= (g_421[4][1] == (l_1731 < p_60.f5)))), (g_325 = (l_1744 = (safe_div_func_float_f_f((+l_1731), l_1731)))))), (-0x1.8p-1))))), g_84)) == l_1731)));
            for (g_84 = 0; (g_84 <= 3); g_84 += 1)
            { 
                uint8_t l_1747 = 0x9E;
                int i, j, k;
                g_82[0].f1 = (safe_add_func_uint16_t_u_u(((++l_1747) ^ g_810[(g_999 + 8)][(g_999 + 2)][(g_84 + 1)]), p_60.f3));
                l_1730.f9 = p_60.f5;
                g_1713[0] = (l_1770 = (((l_1740 = (safe_div_func_float_f_f((safe_add_func_float_f_f(((safe_mul_func_float_f_f(l_1731, ((safe_mul_func_float_f_f(p_60.f0, (g_135 > (((l_1730.f7 = (__builtin_clz(l_1731) >= (-(safe_add_func_float_f_f((p_60.f1 > (+((safe_mul_func_float_f_f((safe_sub_func_float_f_f(l_1766, (safe_div_func_float_f_f(l_1769[5], l_1747)))), (-0x8.3p-1))) <= p_60.f5))), g_1483.f0))))) < l_1731) > g_33)))) < g_421[4][1]))) <= p_60.f4), l_1730.f0)), 0x8.B33A27p+13))) > l_1744) >= 0xF.071A96p+42));
                g_316[1][4][0] = (safe_add_func_uint32_t_u_u(p_60.f4, ((l_1740 <= g_1483.f4) ^ (g_611.f2 <= g_611.f9))));
            }
        }
    }
    return l_1730.f0;
}




static float  func_62(union U4  p_63, struct S2  p_64, union U4  p_65, uint32_t  p_66)
{ 
    int8_t l_1498 = 9;
    int32_t l_1499 = 0xE843082B;
    int32_t l_1566[5];
    const struct S1 l_1672 = {53,719,-26,1512,-15,37};
    uint8_t l_1696 = 7U;
    uint16_t l_1699 = 0x4971;
    int i;
    for (i = 0; i < 5; i++)
        l_1566[i] = 0xA4A4ABDC;
    if (((l_1499 = (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(p_64.f4, ((safe_rshift_func_uint16_t_u_u(p_64.f1, 11)) != g_135))), (safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((!(l_1498 |= (--p_66))) & (g_84 == g_1483.f9)), l_1499)) == 0x5601), (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((l_1499 != (safe_lshift_func_uint8_t_u_s(g_1401[0][0].f0, g_203))) >= (-9)), p_63.f1)), g_94))))))) | p_64.f0))
    { 
        int16_t l_1516 = 0x6895;
        p_64.f7 &= (p_64.f5 = ((((safe_lshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u(0x56, (0x5DF0 | 0xB49C))) >= (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_64.f4, (safe_mul_func_int8_t_s_s(0x94, (0 | g_208[0].f1))))), (g_82[0].f2 ^ (0x37 || 246U))))), 3)) || p_63.f1) == 0x4164) && 1U));
        g_316[0][5][2] = ((l_1498 | g_764) && (l_1516 | ((safe_div_func_uint8_t_u_u(((((+(__builtin_bswap64(g_84) >= (l_1499 = g_3))) < __builtin_ctzl(p_64.f7)) <= (l_1498 == p_64.f3)) & p_64.f3), p_64.f5)) <= g_208[0].f2)));
        l_1499 ^= 1;
    }
    else
    { 
        uint16_t l_1524 = 0x563B;
        const int32_t l_1529 = 1;
        int32_t l_1530 = 0xF565AD7B;
        uint32_t l_1551[5][7][7] = {{{0x7EC37A97,4294967294U,0xEC58AA70,0xEC58AA70,4294967294U,0x7EC37A97,0U},{4294967288U,4294967295U,0xE3829E93,4294967295U,4294967295U,0x0E14BFF1,1U},{0xBB6369E4,0x83366BDA,0xD8F7749B,1U,0xC09728BF,0U,4294967293U},{0x522E96FE,4294967295U,0xD623F173,4294967295U,0x9BEFAE12,0x861C53A0,0xE3829E93},{2U,4294967294U,4294967287U,0xC09728BF,0x5E7A6657,0U,0xB2621B26},{4294967295U,8U,0x9DA46800,0x21C465CA,0x6D4805C6,0x112B2062,4U},{1U,0xC56E6168,0x7EC37A97,0xFA3DAB73,0x3DE75AC7,4294967287U,0xC56E6168}},{{0xCCE26230,0x522E96FE,0U,0x24F5E276,4294967291U,0U,0U},{0U,0x42994AB8,4294967295U,0x42994AB8,0U,0x1D4AB25E,0x5E7A6657},{0x7589A04C,4294967295U,0x2C57AB1D,8U,1U,0xB8701D86,1U},{0x5E7A6657,0xB2621B26,0xEC58AA70,4294967295U,0x101180FD,0xD5190808,4294967286U},{0x7589A04C,8U,4294967295U,1U,1U,0x7589A04C,1U},{0U,0xCE7A556D,0x42994AB8,0U,0xC56E6168,0U,0x18767BA1},{0xCCE26230,0x8E6F7082,0x78FE4226,4294967295U,0xD4F7E021,0x9BEFAE12,4294967295U}},{{1U,0U,0U,0xD5190808,0xBF383E0B,2U,0x5ADF326B},{4294967295U,1U,4294967294U,0x313B6BD8,8U,0U,8U},{2U,0x5E7A6657,0x5E7A6657,2U,0x3DE75AC7,4294967290U,0xD5190808},{0x522E96FE,0x27557A5C,4294967295U,0x78FE4226,4294967295U,4U,0x27557A5C},{0xBB6369E4,0x42994AB8,0xE07EC90C,1U,0x0B12FDC8,4U,0xD5190808},{4294967288U,1U,0U,0xE3829E93,0U,0xB8701D86,8U},{0x7EC37A97,0x101180FD,0x7FDF982C,4294967295U,0U,1U,0x5ADF326B}},{{0xA05578BD,4294967291U,4294967295U,0U,4294967295U,0xBF7F9296,4294967295U},{4294967293U,0x1D4AB25E,0U,0xEC58AA70,1U,4294967293U,0x18767BA1},{0x9BEFAE12,4294967295U,0x4A7972DD,1U,0x27557A5C,0x27557A5C,0x0E14BFF1},{4294967295U,0x18767BA1,4294967295U,1U,4294967290U,0U,0xBB6369E4},{0xF06F95E6,1U,0x49E74941,1U,4U,0xA05578BD,0xA1E8A655},{0U,2U,0xFA3DAB73,0xB6549EEE,4U,0U,4294967292U},{4294967291U,4294967295U,0xBF7F9296,8U,0xB8701D86,0U,0xE3829E93}},{{0U,0U,0x3DE75AC7,4294967288U,1U,0xD8F7749B,0U},{0x24F5E276,0xA1E8A655,4294967294U,1U,0xBF7F9296,0x4A7972DD,0x522E96FE},{4294967287U,0x83366BDA,4294967294U,4294967295U,4294967293U,2U,4U},{0x78FE4226,4294967288U,0xF06F95E6,0x21C465CA,0x27557A5C,0x21C465CA,0xF06F95E6},{0xD5190808,0xD5190808,0x4BC0E091,4294967294U,0U,0x42994AB8,0xD8F7749B},{4294967295U,1U,8U,0xA05578BD,4294967295U,4294967295U,0x0E14BFF1},{0U,0x0B12FDC8,0x1CBE561D,4294967290U,0U,0xE07EC90C,0U}}};
        int32_t l_1567 = 0;
        int32_t l_1568 = 0x5159AC21;
        int32_t l_1569[3];
        int32_t l_1657 = 0;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1569[i] = 5;
        p_64.f6 = (((safe_sub_func_uint8_t_u_u(g_208[0].f0, ((l_1524 >= __builtin_popcount((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u((l_1529 >= ((l_1530 = g_810[4][2][4]) < p_64.f4)), g_611.f9)) >= (((l_1499 = ((__builtin_ffsl(l_1524) >= __builtin_bswap64(p_64.f9)) != g_421[0][1])) || g_208[0].f3) >= g_611.f1)), g_1427[5][2][1])))) >= (-1)))) < g_1427[1][0][2]) != l_1498);
    }
    l_1566[0] = (safe_sub_func_float_f_f((safe_mul_func_float_f_f((safe_div_func_float_f_f((!(p_64.f0 > g_1226[0][3][0])), (g_1713[0] = (l_1566[0] <= __builtin_popcountll((((-1) > (g_764 |= (g_955 = 65528U))) == ((1U < (safe_mod_func_uint32_t_u_u((~(0x7B && __builtin_ctzl(l_1672.f2))), 0x73A59DB4))) < l_1672.f1))))))), 0x7.05A65Bp+66)), g_208[0].f2));
    return g_1427[1][3][2];
}




static union U4  func_67(int8_t  p_68, struct S0  p_69, const uint32_t  p_70, uint32_t  p_71, uint8_t  p_72)
{ 
    int16_t l_83[5][5] = {{0x5D31,1,0x5D31,(-1),(-1)},{1,0x45D2,0x71D5,0xAD8F,(-1)},{0x4C0A,1,1,0x4C0A,0x5D31},{(-4),0x4C0A,0x71D5,(-1),0x45D2},{(-4),0x71D5,0x5D31,0x71D5,(-4)}};
    int32_t l_1299 = 0xC34E7D9B;
    int32_t l_1304 = (-1);
    int32_t l_1305 = 0xC75AFB11;
    int32_t l_1306 = (-1);
    int32_t l_1307 = 8;
    int32_t l_1308 = 0x6ABDEF6F;
    int32_t l_1309 = 1;
    int32_t l_1311 = 0x4B2AC496;
    int32_t l_1313 = (-7);
    uint32_t l_1377[8];
    int32_t l_1394 = 0x71BE6BB5;
    uint32_t l_1416 = 0xE1EC328D;
    float l_1452 = 0x0.475244p-43;
    const struct S1 l_1472 = {5,322,147,-8821,-170,23};
    union U4 l_1482[8][4] = {{{4294967295U},{4294967295U},{4294967289U},{4294967295U}},{{4294967295U},{0x71B39F8E},{0x71B39F8E},{4294967295U}},{{0x71B39F8E},{4294967295U},{0x71B39F8E},{0x71B39F8E}},{{4294967295U},{4294967295U},{4294967289U},{4294967295U}},{{4294967295U},{0x71B39F8E},{0x71B39F8E},{4294967295U}},{{0x71B39F8E},{4294967295U},{0x71B39F8E},{0x71B39F8E}},{{4294967295U},{4294967295U},{4294967289U},{4294967295U}},{{4294967295U},{0x71B39F8E},{0x71B39F8E},{4294967295U}}};
    int i, j;
    for (i = 0; i < 8; i++)
        l_1377[i] = 0xE986EDB9;
    if (p_72)
    { 
        int32_t l_87 = 0x8B99CB9C;
        int32_t l_99 = 0x94FBAEB3;
        int32_t l_1293 = 0xACB30E06;
        int32_t l_1295 = 0x751822D2;
        uint32_t l_1300 = 4294967292U;
        int32_t l_1317 = 0xD78D2213;
        int32_t l_1319 = 4;
        uint16_t l_1338 = 3U;
        uint16_t l_1344 = 0x13A2;
        int32_t l_1376 = 0x7BABDAB8;
        float l_1378 = 0x0.EB1E0Bp-98;
        int32_t l_1391[5];
        uint16_t l_1395 = 65529U;
        const struct S1 l_1471[10] = {{72,135,22,3059,117,20},{54,90,224,9965,-70,25},{54,90,224,9965,-70,25},{72,135,22,3059,117,20},{89,525,-23,7363,108,23},{72,135,22,3059,117,20},{54,90,224,9965,-70,25},{54,90,224,9965,-70,25},{72,135,22,3059,117,20},{89,525,-23,7363,108,23}};
        int i;
        for (i = 0; i < 5; i++)
            l_1391[i] = 0x62EC1E16;
        for (p_72 = 0; (p_72 <= 4); p_72 += 1)
        { 
            int16_t l_85[7] = {8,8,1,8,8,1,8};
            int32_t l_91 = 9;
            struct S2 l_1258[6] = {{-2,-2,3199,5,-258,-2394,623,-241,-8285,7929},{-2,-2,3199,5,-258,-2394,623,-241,-8285,7929},{-2,-2,3199,5,-258,-2394,623,-241,-8285,7929},{-2,-2,3199,5,-258,-2394,623,-241,-8285,7929},{-2,-2,3199,5,-258,-2394,623,-241,-8285,7929},{-2,-2,3199,5,-258,-2394,623,-241,-8285,7929}};
            int8_t l_1339 = 0x3D;
            int32_t l_1340 = 0x4EAE5BAD;
            uint16_t l_1341 = 0x7AD1;
            int i;
            g_84 = 0x5.FD1E45p+71;
            for (p_69.f1 = 0; (p_69.f1 <= 4); p_69.f1 += 1)
            { 
                int i, j;
                g_82[0].f1 = (l_85[3] = (-7));
                if (l_83[p_69.f1][p_69.f1])
                { 
                    union U4 l_86 = {4294967287U};
                    for (g_84 = 0; (g_84 <= 4); g_84 += 1)
                    { 
                        return l_86;
                        
                                            }
                    if (l_87)
                        break;
                }
                else
                { 
                    uint16_t l_95 = 65533U;
                    for (p_71 = 0; (p_71 <= 4); p_71 += 1)
                    { 
                        float l_90 = 0x1.7p-1;
                        int32_t l_96 = 0xE593F29F;
                        g_94 &= (safe_div_func_uint32_t_u_u((0x1C9A ^ (l_91 = g_82[0].f0)), (safe_sub_func_int8_t_s_s((p_68 = 0x7B), (4294967290U < g_82[0].f1)))));
                        l_96 = __builtin_parityll(l_95);
                        if (l_96)
                            continue;
                        l_96 = (safe_mul_func_float_f_f((l_99 = g_3), l_96));
                    }
                    g_1226[0][1][5] = __builtin_bswap64(((p_70 >= g_82[0].f1) || (safe_mod_func_int8_t_s_s(func_102(p_69.f0, ((safe_rshift_func_int8_t_s_u(p_69.f0, func_109(func_114(p_69), g_33, (safe_mul_func_uint16_t_u_u(l_91, l_83[3][3])), l_91))) < l_83[p_69.f1][p_69.f1]), l_83[2][2], g_611), 2))));
                    l_99 &= (-1);
                }
            }
            if ((p_69.f1 &= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(((g_810[4][2][4] = ((~g_611.f7) <= (--g_133))) == (safe_lshift_func_int8_t_s_s(p_71, 7))), 7)), 9))))
            { 
                if (g_955)
                    break;
            }
            else
            { 
                uint32_t l_1236[8][6] = {{0x6C764D73,0x216CB867,0U,0U,0x216CB867,0xEB785080},{1U,0xEB785080,0U,0x6C764D73,0x4602FD25,0x4602FD25},{6U,0xEB785080,0xEB785080,6U,0x216CB867,0x510A9AC4},{6U,0x216CB867,0x510A9AC4,0x6C764D73,0xEB785080,0x510A9AC4},{1U,0x4602FD25,0xEB785080,0U,0xEB785080,0x4602FD25},{0x6C764D73,0x216CB867,0U,0x216CB867,0x522CAD12,0x14F8F4B5},{0xEB785080,0x14F8F4B5,0U,0x510A9AC4,0U,0U},{0U,0x14F8F4B5,0x14F8F4B5,0U,0x522CAD12,1U}};
                int32_t l_1250 = (-4);
                struct S2 l_1261[9][9] = {{{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{63,-3,4630,-23,-89,3826,1301,-138,19906,13803},{63,-3,4630,-23,-89,3826,1301,-138,19906,13803},{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{34,1,5175,-24,75,-2598,1029,232,-3970,18804},{-58,-25,-5451,-25,8,-3273,-1297,-85,31578,29349},{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{-58,-25,-5451,-25,8,-3273,-1297,-85,31578,29349},{34,1,5175,-24,75,-2598,1029,232,-3970,18804}},{{-28,23,4232,-7,167,-848,1360,33,-35673,-2793},{63,21,-1523,12,145,-828,-383,-201,18212,-3697},{63,21,-1523,12,145,-828,-383,-201,18212,-3697},{-28,23,4232,-7,167,-848,1360,33,-35673,-2793},{7,18,-1984,-28,49,3419,786,4,20731,32183},{-25,-25,3026,24,21,-383,-121,229,46259,12795},{-28,23,4232,-7,167,-848,1360,33,-35673,-2793},{-25,-25,3026,24,21,-383,-121,229,46259,12795},{7,18,-1984,-28,49,3419,786,4,20731,32183}},{{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{63,-3,4630,-23,-89,3826,1301,-138,19906,13803},{63,-3,4630,-23,-89,3826,1301,-138,19906,13803},{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{34,1,5175,-24,75,-2598,1029,232,-3970,18804},{-58,-25,-5451,-25,8,-3273,-1297,-85,31578,29349},{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{-58,-25,-5451,-25,8,-3273,-1297,-85,31578,29349},{34,1,5175,-24,75,-2598,1029,232,-3970,18804}},{{-28,23,4232,-7,167,-848,1360,33,-35673,-2793},{63,21,-1523,12,145,-828,-383,-201,18212,-3697},{63,21,-1523,12,145,-828,-383,-201,18212,-3697},{-28,23,4232,-7,167,-848,1360,33,-35673,-2793},{7,18,-1984,-28,49,3419,786,4,20731,32183},{-25,-25,3026,24,21,-383,-121,229,46259,12795},{-28,23,4232,-7,167,-848,1360,33,-35673,-2793},{-25,-25,3026,24,21,-383,-121,229,46259,12795},{7,18,-1984,-28,49,3419,786,4,20731,32183}},{{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{63,-3,4630,-23,-89,3826,1301,-138,19906,13803},{63,-3,4630,-23,-89,3826,1301,-138,19906,13803},{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{34,1,5175,-24,75,-2598,1029,232,-3970,18804},{-58,-25,-5451,-25,8,-3273,-1297,-85,31578,29349},{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{-58,-25,-5451,-25,8,-3273,-1297,-85,31578,29349},{34,1,5175,-24,75,-2598,1029,232,-3970,18804}},{{-28,23,4232,-7,167,-848,1360,33,-35673,-2793},{63,21,-1523,12,145,-828,-383,-201,18212,-3697},{63,21,-1523,12,145,-828,-383,-201,18212,-3697},{-28,23,4232,-7,167,-848,1360,33,-35673,-2793},{7,18,-1984,-28,49,3419,786,4,20731,32183},{-25,-25,3026,24,21,-383,-121,229,46259,12795},{-28,23,4232,-7,167,-848,1360,33,-35673,-2793},{-25,-25,3026,24,21,-383,-121,229,46259,12795},{7,18,-1984,-28,49,3419,786,4,20731,32183}},{{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{63,-3,4630,-23,-89,3826,1301,-138,19906,13803},{63,-3,4630,-23,-89,3826,1301,-138,19906,13803},{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{34,1,5175,-24,75,-2598,1029,232,-3970,18804},{-58,-25,-5451,-25,8,-3273,-1297,-85,31578,29349},{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{-58,-25,-5451,-25,8,-3273,-1297,-85,31578,29349},{34,1,5175,-24,75,-2598,1029,232,-3970,18804}},{{-28,23,4232,-7,167,-848,1360,33,-35673,-2793},{63,21,-1523,12,145,-828,-383,-201,18212,-3697},{63,21,-1523,12,145,-828,-383,-201,18212,-3697},{-28,23,4232,-7,167,-848,1360,33,-35673,-2793},{7,18,-1984,-28,49,3419,786,4,20731,32183},{-25,-25,3026,24,21,-383,-121,229,46259,12795},{-28,23,4232,-7,167,-848,1360,33,-35673,-2793},{-25,-25,3026,24,21,-383,-121,229,46259,12795},{7,18,-1984,-28,49,3419,786,4,20731,32183}},{{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{63,-3,4630,-23,-89,3826,1301,-138,19906,13803},{63,-3,4630,-23,-89,3826,1301,-138,19906,13803},{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{34,1,5175,-24,75,-2598,1029,232,-3970,18804},{-58,-25,-5451,-25,8,-3273,-1297,-85,31578,29349},{-33,-15,-1418,25,-197,-2921,-473,216,-43956,-28454},{-58,-25,-5451,-25,8,-3273,-1297,-85,31578,29349},{34,1,5175,-24,75,-2598,1029,232,-3970,18804}}};
                int8_t l_1294 = 0;
                uint16_t l_1296 = 5U;
                uint8_t l_1320 = 0x14;
                int i, j;
                for (p_68 = 4; (p_68 >= 0); p_68 -= 1)
                { 
                    int i, j;
                    if (l_83[p_72][p_68])
                        break;
                    if (l_83[p_68][p_72])
                        break;
                }
                if (p_69.f2)
                { 
                    uint16_t l_1285[8][8][4] = {{{7U,7U,0x0CED,0x8587},{0U,65535U,0x40DD,3U},{1U,0x2246,0x19DF,4U},{0x2246,7U,1U,0U},{0xAFAF,65535U,65535U,0x5CF7},{65535U,0x7979,0x8CB4,0xAC25},{0xDE06,1U,0xFFB3,0xE9B5},{4U,1U,0xA748,0xAE3A}},{{65532U,65526U,1U,0x4668},{1U,0xA906,0x0CED,1U},{0xEE84,0x41AA,1U,3U},{0x57A2,1U,0U,0x6EAE},{65535U,0x0CED,0x4481,0U},{0xEE84,0x6EAE,3U,65535U},{0x7979,65535U,1U,0x57A2},{0xE9B5,65529U,65531U,0x41AA}},{{4U,0x4E30,1U,0U},{0U,0x57A2,0x8CB4,0x9515},{0xAC25,1U,1U,0xAC25},{0xAFAF,0x41AA,1U,65531U},{0x1682,0x1F04,0x19DF,65532U},{65532U,1U,0xE353,65532U},{0U,0x1F04,3U,65531U},{65533U,0x41AA,65535U,0x0CED}},{{0x4481,65531U,65535U,0U},{65530U,1U,0U,0xDBE3},{65531U,1U,0x4668,0xB857},{4U,0U,0x9E47,1U},{65532U,0xAFAF,0U,0U},{0xC0FB,65535U,4U,65535U},{65535U,0U,7U,65535U},{65535U,3U,0x68C8,65535U}},{{0xF7A0,0xB857,4U,7U},{0xAFAF,0x537A,65535U,4U},{65532U,65529U,0x0215,65533U},{3U,1U,0x4668,0x70D6},{0xF90B,65535U,4U,0x0CED},{65530U,0x4F45,0x8CB4,65535U},{1U,0xAE3A,65535U,65535U},{65531U,0x8CB4,65530U,1U}},{{7U,0U,65535U,0xDD3B},{0x70D6,0xAFAF,0x9515,0xA906},{0xAFAF,0x8CB4,9U,0xF7A0},{1U,1U,7U,65535U},{3U,4U,65535U,0x1663},{1U,65535U,1U,7U},{0x1124,1U,0U,65533U},{7U,0x6C28,65533U,0x6C28}},{{3U,0x537A,65530U,0x5CF7},{0xF6E6,1U,65533U,65535U},{0x4481,0x4F45,0x7979,1U},{0x4481,0U,65533U,0xF7A0},{0xF6E6,1U,65530U,0U},{3U,0xC0FB,65533U,0x4481},{7U,0U,0U,0xA906},{0x1124,0U,1U,0xDBE3}},{{1U,0xAE3A,65535U,65535U},{3U,65531U,7U,3U},{1U,1U,9U,65535U},{0xAFAF,1U,0x9515,65529U},{0x70D6,4U,65535U,4U},{7U,1U,65530U,65535U},{65531U,0xA906,65535U,0x1663},{1U,65531U,0x8CB4,1U}}};
                    int32_t l_1286 = (-6);
                    int i, j, k;
                    for (p_69.f1 = 6; (p_69.f1 >= 0); p_69.f1 -= 1)
                    { 
                        int32_t l_1237 = 2;
                        int i, j;
                        l_1236[0][0] = (0x1.Ep-1 > l_83[p_72][p_72]);
                        l_1237 = l_85[(p_72 + 1)];
                        l_1250 |= ((safe_lshift_func_uint16_t_u_s(0x5570, func_102((safe_lshift_func_int16_t_s_s((((p_69.f0 == (g_764++)) || (l_99 && g_611.f5)) < p_68), 6)), ((safe_sub_func_uint16_t_u_u(p_68, (safe_sub_func_uint16_t_u_u(func_109(g_208[0], ((((safe_lshift_func_uint8_t_u_s(l_83[3][2], 2)) != __builtin_popcount(g_611.f1)) == g_611.f0) && p_71), g_94, p_68), l_99)))) ^ p_69.f0), g_611.f8, g_611))) || 255U);
                        if (l_1237)
                            continue;
                    }
                    for (g_135 = 0; (g_135 <= 3); g_135 += 1)
                    { 
                        l_1250 = p_69.f1;
                    }
                    if ((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int32_t_s(p_69.f0)), (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(func_102(p_69.f2, l_85[3], g_316[1][0][1], l_1258[1]), 8)), g_1226[0][1][5])))))
                    { 
                        int16_t l_1264 = 0x1D17;
                        g_611.f7 = ((p_71 && p_70) < g_208[0].f3);
                        l_99 = ((func_102((l_91 = (safe_mul_func_uint16_t_u_u((p_69.f0 >= (l_1250 |= 0xF3D57E04)), l_85[0]))), p_69.f0, p_68, l_1261[3][7]) & (safe_add_func_uint8_t_u_u((((((l_1258[1].f0 & l_1264) < p_69.f0) != 5) | p_72) ^ g_1139), l_85[3]))) <= (-6));
                        if (l_1264)
                            continue;
                        l_1286 = (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0xE4, l_1261[3][7].f4)), (g_955 = (safe_lshift_func_uint8_t_u_s(((((g_82[0].f2 || 0x56) | (safe_add_func_int8_t_s_s((__builtin_parity((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(func_109(g_208[0], p_69.f1, (safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s(g_3, (p_69.f0 = (g_249 = (g_82[0].f0 = (safe_add_func_uint8_t_u_u((((safe_unary_minus_func_int32_t_s(l_99)) > (((l_83[1][2] || p_69.f1) != 0x5C9BC9B5) < (-5))) <= l_1264), p_68))))))))), l_1285[4][2][1]), p_70)), 4))) > l_1285[4][2][1]), l_83[0][2]))) > 0) | 0U), l_1258[1].f9)))));
                    }
                    else
                    { 
                        int16_t l_1287 = 0xFE1E;
                        int32_t l_1292[7] = {0,0,0,0,0,0,0};
                        int i;
                        l_1286 = (g_325 = (g_611.f1 >= (l_1287 = (-0x1.2p+1))));
                        g_611.f5 |= g_35[1];
                        l_1258[1].f0 = (safe_sub_func_int16_t_s_s((g_82[0].f0 = p_71), (l_1292[0] |= (((--g_205) <= l_1261[3][7].f6) | 0x51A6))));
                    }
                }
                else
                { 
                    l_1296++;
                }
                for (g_1139 = 4; (g_1139 >= 1); g_1139 -= 1)
                { 
                    int8_t l_1310 = (-1);
                    int16_t l_1312 = 0x028C;
                    int32_t l_1315 = 4;
                    int32_t l_1318[8] = {0x4979E17F,0x4979E17F,0x4979E17F,0x4979E17F,0x4979E17F,0x4979E17F,0x4979E17F,0x4979E17F};
                    int i;
                    for (l_1294 = 1; (l_1294 <= 4); l_1294 += 1)
                    { 
                        --l_1300;
                    }
                    if (l_1299)
                    { 
                        int32_t l_1303 = 0x4349BBAC;
                        int32_t l_1314 = 0;
                        int32_t l_1316 = (-5);
                        p_69.f1 = 0x9160C44F;
                        ++l_1320;
                    }
                    else
                    { 
                        int i, j;
                        l_1338 = (safe_div_func_int8_t_s_s((p_68 && (l_1307 = (safe_mul_func_uint16_t_u_u(g_611.f0, (__builtin_clzl(g_1045) <= __builtin_popcountll(((!g_611.f8) < l_1258[1].f2))))))), (l_99 ^= (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(__builtin_parity((safe_mul_func_int16_t_s_s((((l_83[p_72][p_72] = (safe_sub_func_int8_t_s_s(p_69.f0, ((0x1D0C89AA > 4U) < l_83[2][0])))) == 0x3277) > 0x1CB519F0), g_135))), 13)), g_82[0].f2)) < 0), g_3)))));
                    }
                    l_1341--;
                    l_1344--;
                }
            }
            for (g_135 = 4; (g_135 >= 0); g_135 -= 1)
            { 
                p_69.f1 = g_810[3][1][2];
            }
        }
lbl_1400:
        g_325 = g_810[4][2][4];
        for (g_1045 = 0; (g_1045 <= 42); g_1045 = safe_add_func_int16_t_s_s(g_1045, 6))
        { 
            int8_t l_1349[5][8][5] = {{{0,0x33,0x20,0x96,(-1)},{0x28,(-3),0xD2,(-1),0x4A},{2,(-3),0xC7,0x33,0xA5},{0xC7,0xD2,1,(-8),0x4A},{0xA5,0x3D,0x47,0xD2,0x3D},{3,0x20,0x3C,0x4A,0xEC},{0xC8,0x20,0,0x67,(-7)},{(-3),0x3D,0x3D,(-3),0x67}},{{0,0xD2,0x5C,0x35,0x6C},{0x3D,0,0x67,1,(-7)},{0xA5,1,0x67,0x35,0xC1},{0x96,0x15,(-3),(-3),3},{0,0x6C,0x67,0x67,0x4A},{0x35,(-8),0xC1,0x4A,1},{0x35,0xA5,0xEB,0xD2,0xD2},{0,0,0,(-8),0xA5}},{{0x96,0x47,1,0x15,0},{0xA5,3,0x97,0xD2,3},{0x3D,0x20,1,0,0xEC},{0,1,0,0x6C,0x67},{(-3),3,0xEB,(-3),0x6C},{0xC8,0xD2,0xC1,(-3),0x6C},{3,0xC8,0x67,0xA5,0x67},{0xA5,0xA5,(-3),0x35,0xEC}},{{0xC7,0x15,0x67,0xE1,3},{0x4A,0x67,0x67,0x6C,0},{0x35,0x15,0x5C,0x4A,0xA5},{(-3),0xA5,0x3D,0x47,0xD2},{0x4A,0xC8,0,0x15,1},{0x96,0xD2,0x3C,0x15,0x4A},{1,3,0x47,0x47,3},{3,1,1,0x4A,0xC1}},{{0,0x20,(-1),0x6C,(-7)},{0xE1,3,0x3D,0xE1,0x6C},{0,0x47,0xC1,0x35,0x67},{3,0,0x95,0xA5,(-7)},{1,0xA5,0x67,(-3),0xEC},{0x96,(-8),0x67,(-3),0x3D},{0x4A,0x6C,0x95,0x6C,0x4A},{(-3),0x15,0xC1,0,0xA5}}};
            int32_t l_1382 = (-1);
            int32_t l_1384 = 0xBE22E96D;
            int32_t l_1385 = 0xA1C525ED;
            int32_t l_1388 = 0x5FCE42E7;
            int32_t l_1390 = 0xE7B0EC2E;
            int32_t l_1393[4][2][1] = {{{0xB82D4DAD},{(-1)}},{{0xB82D4DAD},{(-1)}},{{0xB82D4DAD},{(-1)}},{{0xB82D4DAD},{(-1)}}};
            union U4 l_1447 = {7U};
            int i, j, k;
            if (((g_810[4][2][4] = (0x99 | g_208[0].f2)) >= g_1226[1][2][3]))
            { 
                int16_t l_1381 = 0x9371;
                int32_t l_1383 = (-1);
                int32_t l_1386 = (-9);
                int32_t l_1389 = 1;
                int32_t l_1392[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1392[i] = 0x9249074C;
                l_1349[3][3][0] = 0x6.9p-1;
                for (p_71 = (-2); (p_71 <= 47); p_71 = safe_add_func_int8_t_s_s(p_71, 9))
                { 
                    int32_t l_1356 = 0x738B0AD6;
                    int32_t l_1367 = 0x966CBB73;
                    l_1309 = (safe_lshift_func_uint8_t_u_u((l_1304 || ((l_1313 = ((safe_mul_func_int8_t_s_s(((g_203 = (l_1356 = p_70)) <= ((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((g_208[0].f5 || (((safe_lshift_func_int16_t_s_u((l_1367 > (p_69.f1 ^ l_1367)), 9)) <= ((safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((g_249 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_1376, p_69.f1)), l_1377[3]))), 9)), p_71)) ^ g_955)) && 0U)), g_999)), p_69.f0)), 13)), g_208[0].f4)) >= 0x257B)), 0x5C)) >= g_205)) == p_69.f2)), 5));
                    l_1381 = ((safe_lshift_func_uint16_t_u_s(g_135, 3)) < (g_955 = p_69.f2));
                }
                ++l_1395;
            }
            else
            { 
                int32_t l_1445[5][10] = {{0,1,(-1),8,3,3,8,(-1),1,0},{0xFD4B024C,0x161B5D02,3,(-1),1,0x0CC1A85A,0,1,7,(-4)},{1,0x8022FD9B,(-10),0x161B5D02,1,0x161B5D02,(-10),0x8022FD9B,1,0},{1,0,(-5),(-2),3,1,0x0CC1A85A,0,(-10),(-10)},{(-5),(-2),1,(-2),(-2),1,(-2),(-5),1,8}};
                int32_t l_1469[8][2] = {{1,8},{8,1},{8,8},{1,8},{8,1},{8,8},{1,8},{8,1}};
                int i, j;
                for (l_1390 = 0; (l_1390 == (-29)); l_1390 = safe_sub_func_int16_t_s_s(l_1390, 3))
                { 
                    uint8_t l_1404 = 0x7A;
                    if (g_133)
                        goto lbl_1400;
                    if (g_208[0].f2)
                    { 
                        if (g_135)
                            break;
                        return g_1401[0][0];
                        
                                            }
                    else
                    { 
                        g_611.f8 |= (((l_1404 || g_611.f1) | (p_69.f2 < (safe_unary_minus_func_int32_t_s(0)))) == (safe_mul_func_uint8_t_u_u(0x4C, ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((p_69.f0 >= func_109(g_208[0], g_34, (safe_mod_func_int32_t_s_s(((0U != p_69.f0) != g_810[4][2][4]), 0xDCDD95E5)), l_1391[3])) <= l_1416), 1U)), g_82[0].f0)), 0x20)) < l_1311))));
                        if (p_71)
                            continue;
                    }
                    for (l_1305 = (-18); (l_1305 >= 9); l_1305 = safe_add_func_int8_t_s_s(l_1305, 6))
                    { 
                        uint32_t l_1444 = 0xE87CE1AF;
                        uint32_t l_1446 = 4294967286U;
                        if (g_999)
                            break;
                        l_1307 ^= ((safe_mod_func_int32_t_s_s(l_1416, 0x45F01740)) | 4294967295U);
                        g_82[0].f1 &= (g_208[0].f2 |= ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s(g_316[1][0][1], __builtin_ctzl((g_241 |= __builtin_ctzll((--g_1427[5][2][1])))))), ((safe_rshift_func_uint16_t_u_s(((7 || g_208[0].f1) & (safe_add_func_uint8_t_u_u((g_133 = ((safe_div_func_int8_t_s_s(__builtin_ffsl(((safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u((l_1445[1][4] = ((safe_rshift_func_int8_t_s_s(((0x3922A68D == (safe_lshift_func_int16_t_s_s(l_1444, 6))) & g_252), g_208[0].f1)) != 0x6BA30690)), 0xA1D7)), l_1446)) <= l_1319)), l_1313)) | l_1382)), p_68))), 8)) < 0))), 2)) | l_1393[3][0][0]));
                    }
                    if (g_862)
                    { 
                        return l_1447;
                        
                                            }
                    else
                    { 
                        l_1382 = (safe_div_func_float_f_f(((safe_sub_func_float_f_f(((-0x10.3p-1) < (-0x1.Bp-1)), l_1452)) == p_69.f2), 0x3.128090p-48));
                    }
                }
                l_1295 = g_611.f2;
                if (g_252)
                { 
                    p_69.f1 = g_249;
                }
                else
                { 
                    int8_t l_1470 = 0x3A;
                    if (func_109(g_208[0], (g_316[0][5][2] ^= (((g_208[0].f2 == (-4)) || ((g_84 = p_71) == (0xAC85 & (safe_rshift_func_uint8_t_u_u((((g_1427[5][2][1] | (g_955 ^ p_69.f2)) < g_135) && l_1317), g_82[0].f1))))) && g_611.f3)), p_68, g_1427[5][2][1]))
                    { 
                        uint16_t l_1455 = 1U;
                        ++l_1455;
                        return g_1401[0][0];
                        
                                            }
                    else
                    { 
                        uint32_t l_1481 = 4294967292U;
                        l_1470 = (l_1308 = (safe_add_func_float_f_f(g_611.f2, (l_1306 = ((+g_421[4][1]) < (safe_add_func_float_f_f(0x8.61C85Cp-32, (l_87 != (!(p_69.f2 > (safe_mul_func_float_f_f((((safe_mul_func_float_f_f((l_1469[6][0] = (+g_611.f4)), ((l_1317 >= p_69.f2) > (-0x1.Fp+1)))) >= p_70) == g_203), 0x1.Ep+1))))))))))));
                        p_69.f1 |= func_109(l_1471[2], l_1385, p_71, __builtin_ctzl(((l_1313 = (0x9C6C && g_1226[0][2][1])) > func_109(l_1472, (safe_div_func_int16_t_s_s(g_1401[0][0].f1, func_109(g_208[0], (((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((g_82[0].f0 |= l_1481) < (-1)), (-1))) ^ 65533U), 2)), g_611.f5)) < l_1470) >= g_208[0].f5), p_69.f2, p_68))), l_1472.f0, l_1469[6][0]))));
                    }
                    if (p_68)
                        goto lbl_1400;
                }
            }
        }
    }
    else
    { 
        g_611.f5 |= 1;
    }
    p_69.f1 = 0xBFB44E08;
    return l_1482[7][2];
    
    }




static int8_t  func_102(int32_t  p_103, int32_t  p_104, float  p_105, struct S2  p_106)
{ 
    float l_612 = 0x7.157C39p+8;
    int32_t l_613 = 0x7E7F7531;
    uint32_t l_641 = 0x8B917662;
    int32_t l_665 = 0xB12E8E31;
    int32_t l_666 = 0xEAFD5967;
    int16_t l_690 = 0xC20F;
    int32_t l_701 = (-1);
    int32_t l_745 = (-4);
    int32_t l_746 = 0;
    int32_t l_753 = 4;
    int32_t l_754 = 0xA8CAA78D;
    uint32_t l_792 = 4294967295U;
    float l_883 = (-0x1.7p-1);
    int8_t l_926[7][1];
    int32_t l_930[10] = {0x5803AB77,0x5803AB77,0x2E633EAC,0x5803AB77,0x5803AB77,0x2E633EAC,0x5803AB77,0x5803AB77,0x2E633EAC,0x5803AB77};
    float l_933 = 0x6.50081Fp-46;
    int32_t l_1029 = 0x3FDA0631;
    uint32_t l_1084 = 4294967291U;
    const struct S1 l_1137 = {54,15,22,9966,70,20};
    uint8_t l_1140 = 0x90;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_926[i][j] = 1;
    }
    if ((g_611.f5 = l_613))
    { 
        uint16_t l_616 = 0U;
        int32_t l_629 = (-5);
        int32_t l_664 = 1;
        int32_t l_667 = 1;
        uint32_t l_685[4];
        int32_t l_748 = 0x1A363AD8;
        int32_t l_749[2][9] = {{0xEC56952E,(-1),(-1),0xEC56952E,(-1),(-1),0xEC56952E,(-1),(-1)},{0x9C85E573,0xD019FCF4,0xD019FCF4,0x9C85E573,0xD019FCF4,0xD019FCF4,0x9C85E573,0xD019FCF4,0xD019FCF4}};
        int32_t l_750 = 0x5B62A287;
        uint32_t l_769[3][3][5] = {{{0xE9748EC6,0x69987C9B,0xBE1C22D5,4294967295U,1U},{4294967293U,0x4204A808,0x4204A808,4294967293U,4294967287U},{0xE9748EC6,0x69987C9B,0xBE1C22D5,4294967295U,1U}},{{4294967293U,0x4204A808,0x4204A808,4294967293U,4294967287U},{0xE9748EC6,0x69987C9B,0xBE1C22D5,4294967295U,1U},{4294967293U,0x4204A808,0x4204A808,4294967293U,4294967287U}},{{0xE9748EC6,0x69987C9B,0xBE1C22D5,4294967295U,1U},{4294967293U,0x4204A808,0x4204A808,4294967293U,4294967287U},{0xE9748EC6,0x69987C9B,0xBE1C22D5,4294967295U,1U}}};
        uint8_t l_772[8] = {9U,9U,9U,9U,9U,9U,9U,9U};
        const struct S1 l_777 = {82,333,-179,-3656,-75,34};
        const struct S1 l_783 = {71,419,74,-11222,69,39};
        const float l_806[10] = {0x4.E52C02p-35,0x4.E52C02p-35,0x8.202063p-21,0x4.E52C02p-35,0x4.E52C02p-35,0x8.202063p-21,0x4.E52C02p-35,0x4.E52C02p-35,0x8.202063p-21,0x4.E52C02p-35};
        int16_t l_858[5];
        int16_t l_861 = 0x1D21;
        int32_t l_882 = 0xE071BD8B;
        const int32_t l_890 = 0xEDCD7F4F;
        int32_t l_907 = 1;
        int32_t l_908[8] = {(-10),0x56B09797,0x56B09797,(-10),0x56B09797,0x56B09797,(-10),0x56B09797};
        float l_910 = 0x9.5ACAC3p+51;
        int32_t l_928 = 1;
        uint32_t l_976 = 0x21701322;
        struct S0 l_996 = {1,0xCCD0F77E,0};
        uint8_t l_1108 = 0x38;
        int32_t l_1141 = (-10);
        uint32_t l_1186[7] = {0x2BD51B02,0x2BD51B02,0x2BD51B02,0x2BD51B02,0x2BD51B02,0x2BD51B02,0x2BD51B02};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_685[i] = 4294967286U;
        for (i = 0; i < 5; i++)
            l_858[i] = (-4);
        for (g_241 = 0; (g_241 < 4); ++g_241)
        { 
            uint8_t l_638 = 0x1F;
            int32_t l_662 = (-1);
            int32_t l_663[4];
            uint32_t l_668[7] = {0x8F2BE5FB,0x8F2BE5FB,0x8F2BE5FB,0x8F2BE5FB,0x8F2BE5FB,0x8F2BE5FB,0x8F2BE5FB};
            uint8_t l_729 = 0U;
            int32_t l_747 = 0x52F81D00;
            int i;
            for (i = 0; i < 4; i++)
                l_663[i] = (-5);
            if (g_205)
            { 
                int32_t l_637 = 0x105CDAAA;
                if ((l_616 >= (249U && (safe_rshift_func_uint8_t_u_s(((((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(l_629, (g_133 = g_316[0][5][2]))) ^ ((safe_sub_func_int16_t_s_s((0xFC ^ (safe_mul_func_int16_t_s_s((g_249 = (safe_unary_minus_func_int8_t_s((safe_div_func_uint8_t_u_u(l_637, __builtin_ia32_crc32qi(l_638, g_421[4][1])))))), l_613))), p_106.f6)) > g_611.f1)), 0)), 0x8E3E)), 4)), l_616)) == p_106.f6) > 0x7B) > 0xE6C6213D), 3)))))
                { 
                    uint32_t l_642[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_642[i] = 0x25BD0D00;
                    l_637 = (-0x10.Ep-1);
                    if (p_106.f3)
                        break;
                    if (((-3) || (safe_lshift_func_int16_t_s_s((l_641 && __builtin_parityl(p_106.f0)), 5))))
                    { 
                        --l_642[0];
                        g_611.f0 = (p_106.f6 = ((__builtin_popcountl(p_104) ^ 1) == (safe_div_func_uint8_t_u_u(0xB1, p_106.f9))));
                    }
                    else
                    { 
                        l_613 = (safe_sub_func_uint8_t_u_u(((l_629 = p_106.f4) <= __builtin_ffs((p_106.f7 = p_106.f9))), g_208[0].f2));
                        l_629 = p_106.f2;
                        if (l_637)
                            break;
                    }
                    if ((safe_mul_func_uint16_t_u_u(g_319, (((safe_rshift_func_int8_t_s_u(4, ((!(1U <= p_106.f5)) >= (safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_642[0], (g_316[1][2][3] = g_82[0].f0))), 1))))) || (p_106.f7 = (p_106.f5 = l_629))) <= __builtin_bswap32((g_94 |= (safe_div_func_uint32_t_u_u(p_106.f4, g_142[0][4]))))))))
                    { 
                        return l_638;
                    }
                    else
                    { 
                        p_105 = __builtin_ctzl((safe_add_func_int8_t_s_s(l_641, p_106.f6)));
                        l_629 ^= g_421[4][1];
                    }
                }
                else
                { 
                    return p_106.f2;
                }
                l_668[1]--;
                g_611.f0 |= l_662;
            }
            else
            { 
                int32_t l_693 = 0x608220E7;
                uint32_t l_694[5];
                int32_t l_739 = 1;
                int32_t l_743[6][10] = {{(-9),0x12640D91,0x12640D91,(-9),(-9),0x12640D91,0x12640D91,(-9),(-9),0x12640D91},{(-9),(-9),0x12640D91,0x12640D91,(-9),(-9),0x12640D91,0x12640D91,(-9),(-9)},{(-9),0x12640D91,0x12640D91,(-9),(-9),0x12640D91,0x12640D91,(-9),(-9),0x12640D91},{(-9),(-9),0x12640D91,0x12640D91,(-9),(-9),0x12640D91,0x12640D91,(-9),(-9)},{(-9),0x12640D91,0x12640D91,(-9),(-9),0x12640D91,0x12640D91,(-9),(-9),0x12640D91},{(-9),(-9),0x12640D91,0x12640D91,(-9),(-9),0x12640D91,0x12640D91,(-9),(-9)}};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_694[i] = 4294967293U;
                if ((((safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s(0x48, g_611.f7)), 1)) || (safe_add_func_int16_t_s_s(((g_203 ^= g_611.f5) & ((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_662, g_241)), ((((safe_add_func_int32_t_s_s(p_106.f6, ((safe_mul_func_int8_t_s_s(p_106.f1, 3)) <= p_106.f6))) && p_106.f4) >= 0x6C) >= p_106.f6))) < 4294967295U)), 1))) & l_667))
                { 
                    l_694[0] |= ((l_685[2] == (l_629 != (l_668[1] || g_611.f6))) == ((__builtin_clzl((safe_rshift_func_int8_t_s_s((((l_666 = (l_693 = (safe_add_func_uint32_t_u_u(l_690, (((l_662 = p_106.f9) <= g_334) > (p_106.f6 && (safe_mod_func_uint8_t_u_u(l_666, g_316[0][4][0])))))))) >= l_616) != l_663[1]), 0))) | 1U) == 4294967292U));
                    l_663[3] = (l_694[0] != ((safe_add_func_float_f_f((safe_sub_func_float_f_f(p_106.f2, (safe_div_func_float_f_f(((l_685[2] <= (g_325 = g_82[0].f1)) < l_701), 0x1.6p-1)))), 0x9.FEA1CEp+61)) >= g_611.f5));
                    if (l_694[4])
                    { 
                        p_106.f8 = (8 || (safe_add_func_int32_t_s_s(g_252, p_106.f0)));
                        if (g_82[0].f1)
                            break;
                        g_325 = p_106.f4;
                    }
                    else
                    { 
                        g_325 = (safe_mul_func_float_f_f(((safe_add_func_float_f_f(((l_666 != (!(((safe_sub_func_float_f_f((+l_690), l_701)) > (safe_div_func_float_f_f(((safe_div_func_float_f_f(g_142[0][2], p_106.f4)) == (safe_mul_func_float_f_f((safe_mul_func_float_f_f(l_694[0], (l_665 = 0xE.29130Fp+13))), (((safe_div_func_float_f_f((-l_662), (safe_add_func_float_f_f((safe_add_func_float_f_f((safe_mul_func_float_f_f((p_105 = g_319), p_106.f7)), l_729)), l_701)))) > g_84) != 0x3.05FC92p-62)))), g_205))) == l_663[1]))) == (-0x9.6p+1)), g_82[0].f0)) != (-0x6.0p+1)), 0x1.21464Ap+86));
                        l_662 = (g_325 = l_662);
                        l_665 = p_106.f9;
                    }
                }
                else
                { 
                    uint16_t l_730 = 65535U;
                    int32_t l_731 = 0x95B488C6;
                    int32_t l_742 = 0x5C741F41;
                    int32_t l_744[7][10] = {{6,1,6,0xD50A2F1C,0xC74308C3,0xD2882CCD,1,0xFD21AA41,0x115AAF96,(-7)},{0xD2882CCD,1,0xFD21AA41,0x115AAF96,(-7),(-7),0x115AAF96,0xFD21AA41,1,0xD2882CCD},{1,0xF2A650DD,6,(-1),0x115AAF96,1,(-6),1,0xD2882CCD,1},{0x1639AD78,6,0x115AAF96,0xF2A650DD,0x115AAF96,6,0x1639AD78,(-7),0x329E1C75,0xD2882CCD},{0x115AAF96,(-6),3,0xFD21AA41,(-7),0xC74308C3,(-1),(-1),0xC74308C3,(-7)},{0x329E1C75,(-6),(-6),0x329E1C75,0xC74308C3,0x115AAF96,0x1639AD78,0xD2882CCD,0xDA4217B1,1},{3,6,0xDA4217B1,0x1639AD78,(-6),0xFD21AA41,(-6),0x1639AD78,0xDA4217B1,6}};
                    int i, j;
                    l_731 &= l_730;
                    for (l_701 = 0; (l_701 <= 9); l_701 = safe_add_func_uint8_t_u_u(l_701, 4))
                    { 
                        uint32_t l_734 = 8U;
                        int32_t l_740 = 1;
                        int32_t l_741 = 0x8D5DF423;
                        int32_t l_751 = 0x43739BE8;
                        int32_t l_752 = 0xAD73292D;
                        uint16_t l_755 = 65535U;
                        g_316[3][5][2] = ((p_106.f8 > g_35[0]) <= (l_734 ^ (g_611.f7 = (p_106.f0 >= (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(p_106.f6, l_693)), 0xD8A307C3))))));
                        ++l_755;
                    }
                    if (l_739)
                    { 
                        p_104 = g_205;
                    }
                    else
                    { 
                        return l_690;
                    }
                    if (l_749[1][2])
                        break;
                }
            }
        }
lbl_1083:
        if ((safe_sub_func_uint32_t_u_u((9U > g_611.f3), (l_616 & (safe_add_func_int16_t_s_s(0xF009, (safe_rshift_func_uint16_t_u_u(((g_764 ^ (0xC2 != ((((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_94, 255U)), ((p_106.f1 >= p_106.f1) <= 0x5E))) >= l_685[2]) ^ l_701) | p_106.f5))) || l_616), g_208[0].f5))))))))
        { 
            p_106.f6 &= l_769[1][0][0];
        }
        else
        { 
            int8_t l_771 = 0;
            l_772[4] = ((l_771 = (!(func_109(g_208[1], (l_748 = g_84), (l_746 = 65528U), l_701) ^ __builtin_popcountl(p_106.f2)))) == ((g_611.f8 = 0x7ACE1FE2) <= 4294967295U));
            for (l_754 = 1; (l_754 >= 0); l_754 -= 1)
            { 
                int32_t l_773 = 0x29907CD3;
                for (g_205 = 0; (g_205 <= 1); g_205 += 1)
                { 
                    for (l_771 = 0; (l_771 <= 1); l_771 += 1)
                    { 
                        int i, j;
                        g_611.f7 &= ((l_749[l_754][l_771] <= g_421[(l_754 + 5)][l_771]) != g_421[(l_754 + 5)][g_205]);
                    }
                    if (g_82[0].f1)
                        break;
                }
                return l_773;
            }
            g_611.f4 ^= (safe_rshift_func_int16_t_s_s((l_613 = ((g_611.f8 = ((+__builtin_ia32_crc32qi(p_106.f3, (func_109(l_777, g_252, g_421[2][0], (l_664 = (+g_611.f6))) != (((l_748 = (~(l_629 = ((+g_208[0].f5) || (safe_mod_func_int32_t_s_s((g_82[0].f2 && l_745), g_611.f2)))))) < g_34) ^ p_106.f8)))) <= 0x3BA68891)) < 4U)), 12));
        }
        p_103 = l_777.f0;
        if (func_109(l_783, (l_750 |= p_106.f0), g_252, p_106.f5))
        { 
            int16_t l_790 = 1;
            const struct S1 l_811[9] = {{55,136,125,-7469,64,22},{55,136,125,-7469,64,22},{55,136,125,-7469,64,22},{55,136,125,-7469,64,22},{55,136,125,-7469,64,22},{55,136,125,-7469,64,22},{55,136,125,-7469,64,22},{55,136,125,-7469,64,22},{55,136,125,-7469,64,22}};
            uint32_t l_836 = 0x3CE8A6AD;
            int i;
            for (l_616 = 0; (l_616 <= 2); l_616 += 1)
            { 
                int32_t l_785[2][5] = {{0xC08FFC2D,0xC08FFC2D,0xC08FFC2D,0xC08FFC2D,0xC08FFC2D},{1,1,1,1,1}};
                int32_t l_789 = 0x8A89E102;
                const int32_t l_824 = 0xFB9E7C4B;
                int i, j;
                g_611.f7 = l_777.f1;
                l_629 &= (+g_82[0].f2);
                for (g_764 = 0; (g_764 <= 1); g_764 += 1)
                { 
                    int8_t l_791 = (-7);
                    for (g_135 = 0; (g_135 <= 2); g_135 += 1)
                    { 
                        int i, j, k;
                        g_611.f4 = l_769[l_616][g_135][(l_616 + 2)];
                        if (l_685[g_764])
                            break;
                    }
                    p_106.f9 = ((l_785[0][3] = g_208[0].f2) < ((safe_div_func_int8_t_s_s(((l_613 &= __builtin_clz((l_641 ^ (~l_789)))) >= g_421[0][1]), p_106.f7)) || (-1)));
                    for (l_746 = 0; (l_746 <= 1); l_746 += 1)
                    { 
                        uint8_t l_795 = 255U;
                        --l_792;
                        l_795--;
                    }
                }
                for (l_792 = 0; (l_792 <= 1); l_792 += 1)
                { 
                    uint16_t l_807 = 0x6B03;
                    int32_t l_835[6] = {0x01E9A13F,0xD9A00CFA,0xD9A00CFA,0x01E9A13F,0xD9A00CFA,0xD9A00CFA};
                    int i;
                    if ((safe_lshift_func_uint8_t_u_s(func_109(g_208[4], ((safe_mod_func_int32_t_s_s(g_208[0].f4, __builtin_popcountl(l_790))) > (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(0x7D, 0)), l_807))), g_241, g_84), p_106.f2)))
                    { 
                        g_82[0].f1 = l_769[1][0][0];
                        g_208[0].f3 &= (p_106.f5 = p_104);
                        g_810[4][2][4] = (p_106.f0 |= (safe_add_func_uint16_t_u_u((l_785[1][2] || ((0xEA >= p_104) != p_106.f3)), 0x4766)));
                    }
                    else
                    { 
                        l_785[0][3] &= func_109(l_811[7], (g_611.f9 &= ((l_807 == g_142[0][7]) ^ (g_611.f2 || g_611.f4))), p_106.f0, g_611.f4);
                    }
                    for (g_334 = 0; (g_334 <= 2); g_334 += 1)
                    { 
                        float l_834 = (-0x3.5p-1);
                        g_611.f3 &= (safe_lshift_func_uint8_t_u_s(__builtin_ffsll((safe_add_func_int8_t_s_s(g_82[0].f0, (safe_mod_func_int16_t_s_s(g_82[0].f0, ((safe_add_func_int8_t_s_s((l_783.f3 && (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(l_789, l_824)), (safe_add_func_int8_t_s_s((g_611.f7 && p_106.f4), (safe_add_func_uint16_t_u_u(g_203, l_785[0][3]))))))), p_106.f9)) || p_106.f9)))))), p_106.f5));
                        l_785[1][3] = (p_105 = ((safe_mul_func_float_f_f((safe_sub_func_float_f_f(0xB.EDF8FAp+67, (+((((l_789 < 0x3.430819p-42) != p_106.f0) == l_807) != (g_611.f2 > g_421[0][1]))))), p_106.f9)) <= p_106.f0));
                        l_836--;
                    }
                }
            }
        }
        else
        { 
            uint32_t l_841 = 0xAC64D90E;
            uint32_t l_868 = 4294967289U;
            int32_t l_892 = 0x13010B4A;
            int32_t l_894[9][5] = {{(-3),(-3),(-3),(-3),(-3)},{0x35ED34C6,0x35ED34C6,0x35ED34C6,0x35ED34C6,0x35ED34C6},{(-3),(-3),(-3),(-3),(-3)},{0x35ED34C6,0x35ED34C6,0x35ED34C6,0x35ED34C6,0x35ED34C6},{(-3),(-3),(-3),(-3),(-3)},{0x35ED34C6,0x35ED34C6,0x35ED34C6,0x35ED34C6,0x35ED34C6},{(-3),(-3),(-3),(-3),(-3)},{0x35ED34C6,0x35ED34C6,0x35ED34C6,0x35ED34C6,0x35ED34C6},{(-3),(-3),(-3),(-3),(-3)}};
            int16_t l_1102 = 0xC5FB;
            int8_t l_1107[5][9][5] = {{{0x74,0xCB,0,(-1),0x45},{0,(-1),0xCB,0xCB,(-1)},{(-1),0x58,0,0x45,4},{0x71,0x58,0x45,0xDF,0x97},{(-6),(-1),(-1),(-6),0xDF},{0x71,0xCB,4,1,0xDF},{(-1),0x71,0x97,0,0x97},{0,0,0xDF,1,4},{0x74,(-1),0xDF,(-6),(-1)}},{{0x45,0xDF,0x97,0xDF,0x45},{1,(-1),4,0x45,0},{1,0,(-1),0xCB,0xCB},{0x45,0x71,0x45,(-1),0},{0x74,0xCB,0,(-1),0x45},{0,(-1),0xCB,0xCB,(-1)},{(-1),0x58,0,0x45,4},{0x71,0x58,0x45,0xDF,0x97},{(-6),(-1),(-1),(-6),0xDF}},{{0x71,0xCB,4,1,0xDF},{(-1),0x71,0x97,0,0x97},{0,0,0xDF,1,4},{0x74,(-1),0xDF,(-6),(-1)},{0x45,0xDF,0x97,0xDF,0x45},{1,(-1),4,0x45,0},{1,0,(-1),0xCB,0xCB},{0x45,0x71,0x45,(-1),0},{0x74,0xCB,0,(-1),0x45}},{{0,(-1),0xCB,0xCB,(-1)},{(-1),0x58,0,0x45,4},{0x71,0x58,0x45,0xDF,0x97},{(-6),(-1),(-1),(-6),0xDF},{0x71,0xCB,4,1,0xDF},{(-1),0x71,0x97,0,0x97},{0,0,0xDF,1,4},{0x74,(-1),0xDF,(-6),(-1)},{0x45,0xDF,0x97,0xDF,0x45}},{{1,(-1),4,0x45,0},{1,0,(-1),0xCB,(-1)},{0xCB,1,0xCB,0x58,0xDF},{0x45,(-1),0xDF,0x58,0xCB},{0xDF,(-6),(-1),(-1),(-6)},{(-6),4,0xDF,0xCB,0x97},{1,4,0xCB,0x71,0x74},{0,(-6),(-6),0,0x71},{1,(-1),0x97,(-1),0x71}}};
            int32_t l_1165[1];
            int32_t l_1191 = (-1);
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1165[i] = 0xA8258719;
lbl_1012:
            for (g_133 = 0; (g_133 <= 1); g_133 += 1)
            { 
                uint16_t l_849 = 0x9711;
                int32_t l_852 = 9;
                l_841 = (safe_div_func_float_f_f(g_133, g_208[0].f4));
                for (l_701 = 3; (l_701 >= 0); l_701 -= 1)
                { 
                    int i, j;
                    p_106.f7 ^= ((+((l_753 = (l_749[g_133][(l_701 + 5)] >= (safe_mod_func_uint8_t_u_u(l_685[(g_133 + 2)], 5)))) != (safe_add_func_uint8_t_u_u(l_685[l_701], g_421[(l_701 + 2)][g_133])))) > (safe_sub_func_uint16_t_u_u((p_106.f1 | l_685[(g_133 + 2)]), 7)));
                    for (l_745 = 0; (l_745 <= 3); l_745 += 1)
                    { 
                        int i, j, k;
                        l_849++;
                        l_629 = (p_105 = g_810[(l_745 + 6)][l_745][(l_745 + 1)]);
                    }
                }
                l_750 |= (l_852 = p_106.f0);
                for (l_616 = 0; (l_616 <= 1); l_616 += 1)
                { 
                    int16_t l_867 = 1;
                    int32_t l_869 = (-6);
                    for (l_690 = 1; (l_690 >= 0); l_690 -= 1)
                    { 
                        int32_t l_859 = 0xD76EAF24;
                        int i, j;
                        if (l_749[g_133][(l_690 + 4)])
                            break;
                        g_316[0][5][2] = (safe_unary_minus_func_int16_t_s(p_106.f2));
                        g_325 = (0x9.2p+1 == ((p_105 = (-0x1.0p-1)) > ((safe_div_func_float_f_f(l_841, p_106.f5)) == 0x9.Dp-1)));
                        g_611.f0 = ((l_852 >= (((g_208[0].f0 = __builtin_ia32_crc32qi(p_106.f6, (safe_lshift_func_int8_t_s_u((-1), 2)))) == (l_859 = l_858[0])) >= (~(g_421[6][0] || (p_106.f6 && (g_319 = l_861)))))) && g_208[0].f4);
                    }
                    g_862 |= g_611.f9;
                    g_611.f5 &= (safe_mod_func_uint32_t_u_u(g_241, (((safe_sub_func_int8_t_s_s(1, l_867)) & (l_869 = l_868)) || (l_868 & 0xF5))));
                }
            }
            if (l_641)
            { 
                const struct S1 l_870 = {56,224,159,6937,-189,0};
                int32_t l_878 = 0xF3771AFC;
                int32_t l_900 = 8;
                float l_902 = 0x9.5p+1;
                int32_t l_905 = (-1);
                int32_t l_912 = 1;
                int32_t l_913 = 0x0EB6AFBC;
                int32_t l_915 = 0;
                int32_t l_917 = 0xD785EBF6;
                int32_t l_918 = 2;
                int32_t l_919 = 1;
                int32_t l_920 = 2;
                int32_t l_921 = 0x060D38B1;
                int32_t l_923 = 0xF9876829;
                int8_t l_924 = (-7);
                int32_t l_925 = 0x59E911F9;
                int32_t l_927 = 1;
                int32_t l_929 = 0x25BD84CF;
                int32_t l_931 = (-1);
                int32_t l_932 = 0x7D32A39A;
                int32_t l_934 = 0x4046E677;
                int32_t l_935 = 2;
                int32_t l_936 = 0;
                g_611.f1 = (func_109(l_870, (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(p_106.f9, (safe_unary_minus_func_int32_t_s(((((l_753 |= (g_208[0].f2 > (safe_sub_func_uint32_t_u_u((l_878 = 0x4770247E), g_203)))) == (p_106.f2 <= ((g_208[0].f0 = p_106.f5) != (!((g_334++) || l_882))))) ^ (0xD6 == g_34)) ^ g_135))))), l_841)), g_611.f2, g_241) || g_208[0].f0);
                if ((safe_div_func_int8_t_s_s(1, (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((g_82[0].f2 <= g_205) | ((l_878 = l_841) | g_316[3][5][2])), p_106.f5)), l_890)))))
                { 
                    float l_891 = 0xB.8B9C85p-70;
                    int32_t l_897 = 0x3096EA71;
                    int32_t l_901 = 0x3ABB189D;
                    int32_t l_903 = 0x3202DDA0;
                    int32_t l_904[8][3] = {{0,0x8CF484DB,(-6)},{(-1),0x38EEE093,0x38EEE093},{0,0x8CF484DB,(-6)},{(-1),0x38EEE093,0x38EEE093},{0,0x8CF484DB,(-6)},{(-1),0x38EEE093,0x38EEE093},{0,0x8CF484DB,(-6)},{(-1),0x38EEE093,0x38EEE093}};
                    int32_t l_922 = (-1);
                    int i, j;
                    for (l_701 = 0; (l_701 <= 3); l_701 += 1)
                    { 
                        float l_893 = (-0x7.2p+1);
                        int32_t l_895 = 0x84329610;
                        int32_t l_896 = 1;
                        int32_t l_898 = 0;
                        int32_t l_899 = 1;
                        int32_t l_906 = 0xCC4B219D;
                        int32_t l_909 = 0x27AECE59;
                        int32_t l_911 = (-1);
                        int32_t l_914 = 6;
                        int32_t l_916[7][4] = {{0x75147701,0x5D10590D,1,6},{0,0xA16818E1,0,6},{1,0x5D10590D,0x75147701,0x09A5FD77},{0,0xFCFA535F,0x5D10590D,0x5D10590D},{0x8CD640F1,0x8CD640F1,0x5D10590D,0},{0,1,0x75147701,0xFCFA535F},{1,0x75147701,0,0x75147701}};
                        uint32_t l_937 = 0U;
                        int i, j;
                        g_325 = 0x3.38331Ep-4;
                        ++l_937;
                    }
                    for (l_918 = 0; (l_918 > (-26)); l_918 = safe_sub_func_uint8_t_u_u(l_918, 4))
                    { 
                        g_325 = ((p_105 = (safe_add_func_float_f_f((-0x5.9p+1), (+(+(safe_add_func_float_f_f(0x1.4p-1, __builtin_ctzll((g_611.f4 <= (p_106.f2 == (l_753 ^= (((safe_div_func_uint16_t_u_u(p_104, p_106.f9)) && l_882) <= (l_932 = 4294967295U))))))))))))) > 0x7.9p-1);
                    }
                    p_106.f4 |= (func_109(g_208[0], l_894[4][3], l_897, g_135) == (safe_add_func_uint32_t_u_u(0x614A6862, (safe_mul_func_int16_t_s_s(l_664, (safe_unary_minus_func_int16_t_s((p_106.f7 > ((__builtin_ctzll((g_955 = ((0x172D6D4A >= l_870.f5) >= p_106.f0))) && p_106.f9) > g_810[4][2][4])))))))));
                    for (l_861 = 9; (l_861 == 15); ++l_861)
                    { 
                        if (g_862)
                            break;
                        l_666 = (safe_add_func_int8_t_s_s(p_106.f5, (__builtin_parityl(l_749[1][5]) < g_241)));
                        g_611.f8 |= (g_862 ^ p_106.f3);
                        p_106.f1 &= (-1);
                    }
                }
                else
                { 
                    int32_t l_970 = 0xB66B1FA9;
                    int32_t l_971 = (-2);
                    l_900 = func_109(func_114(g_82[1]), ((g_611.f6 > (safe_div_func_uint32_t_u_u((__builtin_parity(((g_319++) >= (safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((g_421[4][0] | (g_764 == (g_611.f5 = g_611.f6))), (0x78C76CB0 ^ ((safe_div_func_uint32_t_u_u((l_892 ^= (0xC4 >= l_841)), 0x6A41644F)) == g_611.f2)))), 0)))) & p_104), 0xE6E4EDCA))) != g_611.f2), g_142[0][5], g_955);
                    l_970 = (7U & ((p_106.f7 < 0) ^ g_208[0].f1));
                    l_971 = g_35[1];
                }
            }
            else
            { 
                int32_t l_1007 = 0x4FFF55D8;
                uint8_t l_1009 = 0x39;
                struct S0 l_1033 = {0xB123,-1,0xEA14C047};
                int32_t l_1043[4][1] = {{(-1)},{(-6)},{(-1)},{(-6)}};
                uint8_t l_1056 = 0x58;
                int32_t l_1142 = (-1);
                int i, j;
                for (g_764 = 0; (g_764 < 38); g_764 = safe_add_func_uint32_t_u_u(g_764, 3))
                { 
                    const uint32_t l_988 = 0x46595A4A;
                    int32_t l_1008 = 0xDD89D200;
                    int32_t l_1044[10][3][5] = {{{(-9),0x32B41F1F,(-1),0,(-1)},{(-1),(-1),(-1),(-1),0x692D3695},{1,(-1),0x3F371066,0xD0472817,0x0B39D6F5}},{{0x6CA23883,0x7E2B82EE,(-1),0xFB2283A8,9},{0xFB5A41B0,1,1,0xD0472817,(-1)},{0xEB98837B,1,0x2EF310C8,(-1),0x5D555714}},{{1,0xFB5A41B0,1,0,0x54603538},{(-1),9,1,9,(-1)},{0x0B39D6F5,1,0x32B41F1F,0xFD73CBD6,(-1)}},{{3,0x8EC6DE03,0x87B01EA4,0,0x02CB4096},{0xD0472817,(-1),0xACB9066B,1,(-1)},{1,0,0xFC4FF85B,(-7),(-1)}},{{(-1),0x1C3ADC26,0,0x8637B257,0x54603538},{0,0x5D555714,0xFEFD867E,0xFEFD867E,0x5D555714},{5,1,0,(-1),(-1)}},{{0x7E2B82EE,8,0x692D3695,0x71BC14E3,9},{0x32B41F1F,0xACB9066B,0x8637B257,(-7),0x0B39D6F5},{0x7E2B82EE,(-7),0x5D555714,0x6CA23883,0x692D3695}},{{5,0x3F371066,1,(-1),(-1)},{0,(-1),1,0x5BADBB25,1},{0x41834DFB,0x41834DFB,(-1),(-1),0x8637B257}},{{0x2EF310C8,0x71BC14E3,0x7E2B82EE,0x57E18C40,0x02CB4096},{(-1),0x8637B257,0x1C3ADC26,5,(-1)},{0x57E18C40,0x71BC14E3,(-1),0x5BADBB25,0x2EF310C8}},{{0,0x41834DFB,1,1,(-1)},{8,0x7E2B82EE,0x87B01EA4,0,0},{(-7),(-9),(-7),0xACB9066B,0xD0472817}},{{(-1),0x692D3695,0x02CB4096,1,0},{0x32B41F1F,0x3F371066,1,0xFB5A41B0,(-1)},{1,1,0x02CB4096,0,0x87B01EA4}}};
                    int i, j, k;
                    p_106.f8 = (safe_div_func_uint8_t_u_u(g_133, (l_976 | p_106.f8)));
                    p_105 = p_106.f6;
                    if (g_33)
                    { 
                        const int8_t l_983 = 0x1B;
                        int32_t l_989 = (-2);
                        l_667 = (((safe_sub_func_float_f_f(func_109(g_208[3], ((safe_sub_func_uint32_t_u_u(4294967288U, (safe_add_func_int32_t_s_s(l_983, p_106.f0)))) > __builtin_ffs((g_611.f9 == (safe_mul_func_uint16_t_u_u(((g_208[0].f3 | ((safe_add_func_int8_t_s_s(g_611.f8, ((g_208[0].f2 < 0x79) & l_988))) == 65533U)) ^ p_104), 0xB217))))), g_611.f2, p_106.f1), (-0x1.Fp+1))) < 0xE.C8482Cp-94) > g_208[0].f4);
                        l_989 = g_611.f2;
                        g_999 = (safe_div_func_float_f_f(__builtin_clz(l_894[7][2]), ((safe_sub_func_float_f_f((safe_add_func_float_f_f((func_109(func_114(l_996), p_106.f9, g_611.f0, l_641) < (safe_sub_func_float_f_f(g_611.f2, p_106.f5))), p_106.f5)), g_862)) != l_988)));
                        l_748 = (safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((!p_103) & (p_106.f6 <= (l_750 &= ((p_104 > (safe_div_func_int32_t_s_s(l_1007, g_94))) > 0)))) || (l_666 = __builtin_ctzl(p_106.f4))), (p_106.f9 || 0x8546BD91))), p_106.f2));
                    }
                    else
                    { 
                        g_611.f7 = (-1);
                    }
                    if (__builtin_bswap32(p_106.f6))
                    { 
                        int8_t l_1015 = 0x2B;
                        float l_1020[10][4] = {{0x8.585A08p-88,(-0x8.5p+1),0x9.4364A1p-61,0xC.C2A58Ep-74},{(-0x8.5p+1),0x0.6p-1,(-0x1.Ep-1),0x8.585A08p-88},{0x0.8p-1,0x3.597F38p-75,0x3.597F38p-75,0x0.8p-1},{0x0.8p-1,0xC.C2A58Ep-74,(-0x1.Ep-1),(-0x10.3p-1)},{(-0x8.5p+1),0x0.8p-1,0x9.4364A1p-61,0x5.E7388Bp+87},{0x8.585A08p-88,0x0.9p+1,0x8.585A08p-88,0x5.E7388Bp+87},{0x9.4364A1p-61,0x0.8p-1,(-0x8.5p+1),(-0x10.3p-1)},{(-0x1.Ep-1),0xC.C2A58Ep-74,0x0.8p-1,0x0.8p-1},{0x3.597F38p-75,0x3.597F38p-75,0x0.8p-1,0x8.585A08p-88},{(-0x1.Ep-1),0x0.6p-1,(-0x8.5p+1),0xC.C2A58Ep-74}};
                        int32_t l_1030 = 1;
                        int i, j;
                        ++l_1009;
                        if (p_106.f2)
                            goto lbl_1012;
                        l_1030 = (safe_sub_func_float_f_f(l_1015, ((p_105 = 0x0.6p-1) == (safe_div_func_float_f_f(((safe_div_func_float_f_f(l_641, (l_1020[4][3] = g_862))) == (safe_sub_func_float_f_f(((-0x10.Ep+1) >= ((safe_sub_func_float_f_f(p_106.f0, (safe_add_func_float_f_f(p_106.f0, g_611.f4)))) >= (safe_mul_func_float_f_f((l_1029 = l_841), p_106.f3)))), g_34))), 0x1.1p+1)))));
                    }
                    else
                    { 
                        int8_t l_1041 = (-1);
                        int32_t l_1042 = 0;
                        l_1042 = (p_105 = (safe_div_func_float_f_f(func_109(func_114(l_1033), l_777.f1, (safe_sub_func_uint32_t_u_u(g_611.f0, (+((safe_div_func_uint16_t_u_u((p_106.f4 && (l_1041 = (1U >= ((safe_sub_func_int8_t_s_s(7, (l_613 <= (4294967291U == g_421[2][0])))) & (-1))))), 7U)) > p_106.f5)))), l_1033.f1), g_35[1])));
                        ++g_1045;
                    }
                }
                for (g_319 = (-6); (g_319 != 0); g_319 = safe_add_func_uint8_t_u_u(g_319, 3))
                { 
                    float l_1079 = 0x5.5DBE83p+16;
                    int32_t l_1082 = 0x6C42C930;
                    for (l_629 = 13; (l_629 < (-30)); l_629--)
                    { 
                        l_1043[2][0] = p_104;
                    }
                    for (g_1045 = 0; (g_1045 > 38); g_1045++)
                    { 
                        if (p_104)
                            break;
                        l_1056 = (safe_lshift_func_uint8_t_u_u(g_319, 4));
                    }
                    if ((+((safe_sub_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_1043[2][0], __builtin_clzl((g_241++)))), (safe_sub_func_uint8_t_u_u(__builtin_ffsll((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_667, (l_907 = l_996.f1))), (p_103 && g_611.f7))), p_106.f5)), (safe_mod_func_int8_t_s_s(g_252, l_996.f1)))))), l_783.f5))), l_1082)))) >= g_35[0]) && g_208[0].f2), p_106.f5)) < p_106.f9)))
                    { 
                        l_908[0] &= g_611.f4;
                        if (l_613)
                            goto lbl_1083;
                        if (l_685[2])
                            break;
                    }
                    else
                    { 
                        p_106.f1 = __builtin_parityl(g_1045);
                        if (p_106.f1)
                            goto lbl_1012;
                        if (p_106.f5)
                            continue;
                    }
                }
                if (l_926[0][0])
                { 
                    int16_t l_1096 = 0x97BB;
                    int32_t l_1098 = (-1);
                    int32_t l_1099 = 0;
                    int32_t l_1100 = 0x8CFAB223;
                    int32_t l_1101[8][1][4] = {{{0x3EB37695,0xB6F303F3,0x3EB37695,0xB6F303F3}},{{0x3EB37695,0xB6F303F3,0x3EB37695,0xB6F303F3}},{{0x3EB37695,0xB6F303F3,0x3EB37695,0xB6F303F3}},{{0x3EB37695,0xB6F303F3,0x3EB37695,0xB6F303F3}},{{0x3EB37695,0xB6F303F3,0x3EB37695,0xB6F303F3}},{{0x3EB37695,0xB6F303F3,0x3EB37695,0xB6F303F3}},{{0x3EB37695,0xB6F303F3,0x3EB37695,0xB6F303F3}},{{0x3EB37695,0xB6F303F3,0x3EB37695,0xB6F303F3}}};
                    int i, j, k;
lbl_1106:
                    l_750 = l_1084;
                    for (l_613 = 0; (l_613 != (-24)); l_613 = safe_sub_func_int32_t_s_s(l_613, 8))
                    { 
                        float l_1095 = (-0x10.Dp+1);
                        int32_t l_1097[7] = {0,0,0,0,0,0,0};
                        uint32_t l_1103 = 4294967291U;
                        int i;
                        g_611.f4 &= (safe_mul_func_uint16_t_u_u(((g_82[0].f0 = 0x10FC) < __builtin_popcountl((safe_mod_func_int8_t_s_s(0xEE, ((safe_rshift_func_uint8_t_u_u(g_3, (safe_sub_func_int16_t_s_s(p_106.f4, 0x208E)))) | (p_106.f0 & l_1033.f1)))))), 0));
                        l_1103--;
                        if (g_862)
                            goto lbl_1106;
                        l_1108--;
                    }
                    if ((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u((p_106.f4 ^ (safe_sub_func_int16_t_s_s((-1), (safe_lshift_func_int16_t_s_s((l_745 = 1), (__builtin_bswap64(l_894[1][4]) >= ((safe_add_func_int16_t_s_s(0xED07, ((safe_sub_func_uint16_t_u_u(g_241, g_205)) | l_1098))) == l_1100))))))), g_252)), l_1099)), g_208[0].f2)))
                    { 
                        int16_t l_1138[9][5][1] = {{{(-4)},{(-4)},{1},{0xB68A},{1}},{{(-4)},{(-4)},{1},{0xB68A},{1}},{{(-4)},{(-4)},{1},{0xB68A},{1}},{{(-4)},{(-4)},{1},{0xB68A},{1}},{{(-4)},{(-4)},{1},{0xB68A},{1}},{{(-4)},{(-4)},{1},{0xB68A},{1}},{{(-4)},{(-4)},{1},{0xB68A},{1}},{{(-4)},{(-4)},{1},{0xB68A},{1}},{{(-4)},{(-4)},{1},{0xB68A},{1}}};
                        int i, j, k;
                        g_611.f0 |= (safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(p_106.f8, (safe_lshift_func_int16_t_s_u((l_1138[2][0][0] = (0x7E3B && (safe_mul_func_uint16_t_u_u((l_868 | (0x4360 | (0x4E >= func_109(l_1137, g_82[0].f1, g_35[0], l_1102)))), g_955)))), 9)))), g_1139)), l_1140)) && 0xDA) == l_1141) || 255U), 10));
                        g_325 = (p_106.f0 > 0x9.0FA30Ep-54);
                    }
                    else
                    { 
                        uint32_t l_1149 = 6U;
                        l_907 = l_1142;
                        p_105 = (g_955 >= (0x1.2p+1 == (l_1043[3][0] > (safe_sub_func_float_f_f((safe_mul_func_float_f_f((safe_sub_func_float_f_f(func_109(func_114(g_82[1]), l_1149, g_316[0][5][2], __builtin_clzl((safe_mul_func_uint16_t_u_u((g_611.f4 <= (safe_add_func_uint8_t_u_u((g_334 = g_611.f8), p_106.f4))), 6)))), g_611.f2)), l_1101[7][0][0])), 0xF.B551ADp+72)))));
                    }
                    for (l_754 = 0; (l_754 <= 0); ++l_754)
                    { 
                        g_611.f1 ^= (safe_mod_func_uint8_t_u_u(l_754, (--g_334)));
                    }
                }
                else
                { 
                    int32_t l_1171[9][9][3] = {{{1,0x00207ADE,0x59AF5A6C},{(-1),1,0x16A79875},{1,0x0491D60D,0xEFF31296},{0,0xAB200073,0x9CA6E67C},{1,0x18F24882,0x1BBFB098},{0,4,4},{0x3D2075FC,0x9CA6E67C,0x1BED998E},{0x0491D60D,0,0x29CBBBF2},{0,(-1),0xB56DB16C}},{{0x3497A488,0x3D24368F,(-5)},{0,0x1BED998E,0xB41FECBE},{(-1),0x1BED998E,0xB845518D},{(-4),0x3D24368F,0x854B5305},{(-5),(-1),4},{7,0,1},{0x465DCE29,0x9CA6E67C,(-1)},{(-5),4,0},{0xAB200073,0xAB200073,0x878455CD}},{{(-8),0,0},{0x86541AEA,0x59AF5A6C,0x465DCE29},{4,0xD9133BB1,0x0D9CC387},{1,0x86541AEA,0x465DCE29},{8,7,0},{0x61A68599,1,0x878455CD},{0x9CA6E67C,(-9),0},{(-1),0x16A79875,(-1)},{0x40F3D0C1,(-1),1}},{{0x878455CD,0xA5D46E62,4},{(-5),(-5),0x854B5305},{0xE1619267,0x3D2075FC,0xB845518D},{0x00207ADE,0x80CFAE94,0xB41FECBE},{0x00207ADE,0xB56DB16C,(-5)},{0xE1619267,0x878455CD,0xB56DB16C},{(-5),0x61A68599,0x29CBBBF2},{0x878455CD,0xA81B1867,0x1BED998E},{0x40F3D0C1,0x106F2B86,4}},{{(-1),0x33FB31C1,0x33FB31C1},{0x9CA6E67C,3,0x61A68599},{0x61A68599,(-5),0x106F2B86},{8,0x854B5305,0x3D2075FC},{1,0,0x3497A488},{4,0x854B5305,1},{0x86541AEA,(-5),(-1)},{(-8),3,1},{0xAB200073,0x33FB31C1,0x80CFAE94}},{{(-5),0x106F2B86,(-8)},{0x465DCE29,0xA81B1867,(-1)},{7,0x61A68599,0x3D24368F},{(-5),0x878455CD,0x40F3D0C1},{(-4),0xB56DB16C,0xEFF31296},{(-1),0x80CFAE94,0xEFF31296},{0,0x3D2075FC,0x40F3D0C1},{0x3497A488,(-5),0x3D24368F},{0,0xA5D46E62,(-1)}},{{0x0491D60D,(-1),(-8)},{0x3D2075FC,0x16A79875,0x80CFAE94},{1,(-9),1},{0xD9133BB1,1,(-1)},{0x80CFAE94,7,1},{0x3C137F26,0x86541AEA,0x3497A488},{0xB41FECBE,0xD9133BB1,0x3D2075FC},{0x3C137F26,0x59AF5A6C,0x106F2B86},{0x80CFAE94,0,0x61A68599}},{{0xD9133BB1,0xAB200073,0x33FB31C1},{1,4,4},{0x3D2075FC,0x9CA6E67C,0x1BED998E},{0x0491D60D,0,0x29CBBBF2},{0,(-1),0xB56DB16C},{0x3497A488,0x3D24368F,0x40F3D0C1},{0x0491D60D,7,0xA5D46E62},{(-2),7,1},{0xE1619267,(-8),0x1BED998E}},{{0xB845518D,0x9CA6E67C,0},{0x18F24882,0x80CFAE94,0xD9133BB1},{0xEFF31296,0x61A68599,0x9CA6E67C},{(-4),0,(-5)},{0,0,(-1)},{4,(-5),0x0491D60D},{(-1),0x3497A488,0xEFF31296},{(-5),0x854B5305,0x212BBB2E},{0x3C137F26,(-1),0xEFF31296}}};
                    int i, j, k;
                    l_629 |= (g_955 ^ (+((l_1033.f0 <= l_892) <= g_611.f1)));
                    if (g_133)
                    { 
                        uint32_t l_1174 = 0U;
                        l_1033.f1 ^= g_1139;
                        g_611.f5 ^= (safe_div_func_int32_t_s_s((((l_1033.f1 = (safe_div_func_uint32_t_u_u(__builtin_ffs(l_1165[0]), (safe_unary_minus_func_uint8_t_u((4294967295U == (g_1045 = (safe_mul_func_uint8_t_u_u((p_106.f1 <= 1), (safe_mod_func_int16_t_s_s(__builtin_ctzll(l_1043[1][0]), l_1107[3][1][3]))))))))))) && (l_664 = (g_810[7][3][3] = func_109(g_208[0], g_84, g_34, l_1171[6][2][0])))) >= 0xBADA56C2), 0xE6A73595));
                        p_106.f8 = (l_1174 = __builtin_ia32_crc32qi(p_106.f2, ((safe_sub_func_int8_t_s_s(0x88, (l_894[1][4] = g_35[0]))) >= p_106.f2)));
                    }
                    else
                    { 
                        uint8_t l_1182 = 0xEC;
                        p_106.f8 = (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(0, (!(((l_1007 != (l_666 ^= ((l_1182 && (+((safe_div_func_uint8_t_u_u(255U, (l_908[2] = ((l_1191 &= func_109(g_208[0], (l_1186[0] == p_106.f0), g_955, (__builtin_ctz((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s((p_106.f6 < l_1033.f1), g_142[0][6])), p_106.f8))) <= g_33))) && l_1142)))) & 65535U))) && l_892))) && g_421[5][1]) ^ (-1))))), g_82[0].f2)), 0x25));
                        l_1043[3][0] = (l_748 ^= (safe_sub_func_uint32_t_u_u(p_106.f1, ((safe_add_func_int8_t_s_s(p_106.f9, p_106.f3)) && (g_334++)))));
                        return p_104;
                    }
                    return l_1171[6][2][0];
                }
            }
            for (l_1191 = 7; (l_1191 >= 1); l_1191 -= 1)
            { 
                int i;
                for (l_996.f0 = 0; l_996.f0 < 7; l_996.f0 += 1)
                {
                    l_1186[l_996.f0] = 4294967295U;
                }
                l_908[l_1191] = l_908[l_1191];
                for (l_1029 = 5; (l_1029 >= 1); l_1029 -= 1)
                { 
                    uint16_t l_1198 = 0xC09E;
                    int32_t l_1201[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1201[i] = 0;
                    ++l_1198;
                    l_1201[3] = (-1);
                    l_748 = g_316[1][2][0];
                }
            }
            p_105 = (safe_div_func_float_f_f(func_109(l_1137, g_421[0][0], ((safe_div_func_uint8_t_u_u((l_1191 = 0x98), (safe_div_func_uint8_t_u_u(__builtin_ctzll(g_611.f8), (safe_rshift_func_uint16_t_u_u(((g_611.f8 > (l_667 = (p_106.f0 > 0x97ED))) != (g_208[0].f2 == p_106.f8)), 8)))))) & 0x0F4A), g_205), p_106.f4));
        }
    }
    else
    { 
        uint32_t l_1212 = 0x83D97F24;
        int32_t l_1225 = (-6);
        for (l_1084 = 0; (l_1084 != 27); l_1084 = safe_add_func_int32_t_s_s(l_1084, 9))
        { 
            l_1212 = g_611.f5;
            for (l_754 = 0; (l_754 == 19); l_754 = safe_add_func_int32_t_s_s(l_754, 8))
            { 
                if (g_764)
                    break;
            }
            return p_106.f0;
        }
        for (g_955 = 2; (g_955 > 45); g_955 = safe_add_func_int32_t_s_s(g_955, 9))
        { 
            int16_t l_1217[6] = {0x22FD,0x22FD,0x22FD,0x22FD,0x22FD,0x22FD};
            int32_t l_1218 = 0x2091BC0E;
            int i;
            l_1217[5] = p_106.f9;
            l_1218 ^= g_1045;
            l_746 |= (safe_rshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s(l_1217[5], func_109(func_114(g_82[0]), p_106.f0, p_106.f0, (safe_sub_func_int16_t_s_s((0 && (l_1225 = 0x7F1D5A2E)), __builtin_clzll(g_319)))))) >= 7) != p_106.f0), l_1212));
            if (p_106.f0)
                continue;
        }
    }
    return g_955;
}




inline static uint8_t  func_109(const struct S1  p_110, int32_t  p_111, uint16_t  p_112, int32_t  p_113)
{ 
    uint8_t l_284 = 6U;
    int32_t l_285 = (-1);
    uint32_t l_288 = 0x0347C12E;
    const int8_t l_307 = 0xD2;
    int32_t l_331 = 0x97B53C18;
    uint32_t l_347 = 0xF2C9B0C5;
    int32_t l_417 = 0xE2A7E6A2;
    int32_t l_419 = (-1);
    int32_t l_420 = 1;
    uint16_t l_479[7][4] = {{0U,0U,0xFECA,0U},{0U,0xBAFC,0xFECA,0xFECA},{0U,0U,0U,0xFECA},{9U,0xBAFC,9U,0U},{9U,0U,0U,9U},{0U,0U,0xFECA,0U},{0U,0xBAFC,0xFECA,0xFECA}};
    uint32_t l_544[3][10][5] = {{{0U,0x2807B3F7,4294967295U,4294967295U,0x2807B3F7},{6U,4294967287U,4294967295U,4294967295U,4294967294U},{4294967288U,6U,0xF243D8EA,1U,4294967295U},{8U,0xF5970634,4294967294U,0U,0x2807B3F7},{4294967288U,0U,7U,0x2807B3F7,7U},{6U,6U,0xA0FAB284,0x2807B3F7,4294967295U},{0U,4294967288U,4294967287U,0U,6U},{0xF5970634,8U,4294967295U,1U,8U},{6U,4294967288U,4294967295U,4294967295U,4294967295U},{4294967287U,6U,4294967287U,4294967295U,4294967295U}},{{0x2807B3F7,0U,4294967294U,0xF5970634,8U},{4294967288U,0xF5970634,1U,0x2807B3F7,6U},{7U,6U,4294967294U,8U,4294967295U},{0xF5970634,4294967287U,4294967287U,0xF5970634,7U},{0xF5970634,0x2807B3F7,4294967295U,1U,0x2807B3F7},{7U,4294967288U,4294967295U,4294967294U,4294967295U},{4294967288U,7U,4294967287U,1U,4294967294U},{0x2807B3F7,0xF5970634,0xA0FAB284,0xF5970634,0x2807B3F7},{4294967287U,0xF5970634,7U,8U,6U},{6U,7U,4294967294U,0x2807B3F7,4294967290U}},{{0xF5970634,4294967288U,0xF243D8EA,0xF5970634,6U},{0U,0x2807B3F7,4294967295U,4294967295U,0x2807B3F7},{6U,4294967287U,4294967295U,4294967295U,4294967294U},{4294967288U,6U,0xF243D8EA,1U,4294967295U},{4294967295U,4294967287U,1U,0xF243D8EA,4294967295U},{8U,0xF243D8EA,4294967290U,4294967295U,4294967290U},{4294967290U,4294967290U,6U,4294967295U,0U},{0xF243D8EA,8U,4294967287U,0xF243D8EA,4294967290U},{4294967287U,4294967295U,0xA0FAB284,4294967294U,4294967295U},{4294967290U,8U,4294967295U,7U,7U}}};
    uint32_t l_554[10] = {0x99503C98,4294967295U,0x99503C98,0x99503C98,4294967295U,0x99503C98,0x99503C98,4294967295U,0x99503C98,0x99503C98};
    int8_t l_570 = 1;
    int32_t l_583[3];
    float l_610[5] = {0x0.3p-1,0x0.3p-1,0x0.3p-1,0x0.3p-1,0x0.3p-1};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_583[i] = 1;
lbl_310:
    g_208[0].f2 ^= (((safe_mod_func_int32_t_s_s(g_35[1], (l_284 ^ 0xC6B9971A))) && ((((l_285 ^= 1U) || (g_35[0] & (safe_lshift_func_uint8_t_u_s(l_288, (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(g_133, (g_35[0] != 1))), l_285)))))) > 4U) || 8U)) | 65534U);
    for (g_241 = 0; (g_241 <= 0); g_241 += 1)
    { 
        uint16_t l_293 = 0xA52F;
        uint32_t l_315 = 0U;
        int32_t l_332[10] = {1,5,1,1,5,1,1,5,1,1};
        int8_t l_389 = 0x47;
        int32_t l_411[9];
        uint32_t l_427 = 4294967286U;
        float l_433 = 0x3.Ep+1;
        float l_435 = 0x9.0F5AB0p+63;
        float l_439 = 0x6.F145D1p+67;
        uint16_t l_447 = 0x6814;
        float l_582[8];
        uint32_t l_584 = 4294967292U;
        int i;
        for (i = 0; i < 9; i++)
            l_411[i] = 0x70FEE4B1;
        for (i = 0; i < 8; i++)
            l_582[i] = (-0x5.0p-1);
        if (g_205)
        { 
            int16_t l_320 = (-4);
            int32_t l_392 = (-9);
            --l_293;
            for (p_112 = 0; (p_112 <= 0); p_112 += 1)
            { 
                int32_t l_314 = (-1);
                int16_t l_393 = 0x5AF1;
                int i, j;
                g_208[0].f3 ^= ((safe_div_func_int16_t_s_s((g_142[g_241][(g_241 + 1)] | __builtin_ia32_crc32qi(g_142[0][4], (!((g_142[g_241][(g_241 + 1)] == p_110.f2) >= (safe_mod_func_uint8_t_u_u(l_293, g_82[0].f1)))))), ((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((g_142[g_241][(g_241 + 1)] & l_293), l_293)), g_241)), 15)) || g_142[g_241][(g_241 + 1)]))) & l_307);
                if ((safe_sub_func_int32_t_s_s(g_208[0].f0, 9)))
                { 
                    for (l_284 = 0; (l_284 <= 0); l_284 += 1)
                    { 
                        int i, j;
                        if (l_307)
                            goto lbl_310;
                        if (g_142[l_284][(p_112 + 1)])
                            continue;
                    }
                    for (l_288 = 0; (l_288 <= 0); l_288 += 1)
                    { 
                        p_111 = 0x0BBCD69B;
                        l_315 = (g_82[0].f1 = (safe_mul_func_int16_t_s_s((~__builtin_bswap64((l_314 = p_113))), p_110.f1)));
                        if (g_252)
                            break;
                    }
                }
                else
                { 
                    int32_t l_330[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_330[i] = 0x11FA6036;
                    g_316[0][5][2] = p_110.f2;
                    l_330[0] = (safe_add_func_float_f_f(((((l_320 = (g_319 = p_110.f0)) == (safe_sub_func_float_f_f(((l_314 = 0xD.AD2E39p+28) < (g_82[0].f0 < (safe_sub_func_float_f_f((g_325 = g_34), g_205)))), g_316[0][5][2]))) < (safe_sub_func_float_f_f(((g_33 <= g_135) <= (safe_div_func_float_f_f((0xA.0185C4p+83 != 0x1.Ep-1), (-0x6.9p-1)))), p_110.f5))) == (-0x10.Cp+1)), g_3));
                    if (g_208[0].f1)
                    { 
                        if (p_110.f4)
                            break;
                    }
                    else
                    { 
                        float l_333[4][2][2] = {{{(-0x1.1p-1),0x1.3p+1},{0x7.8E6171p-63,0x1.3p+1}},{{(-0x1.1p-1),0x1.3p+1},{0x7.8E6171p-63,0x1.3p+1}},{{(-0x1.1p-1),0x1.3p+1},{0x7.8E6171p-63,0x1.3p+1}},{{(-0x1.1p-1),0x1.3p+1},{0x7.8E6171p-63,0x1.3p+1}}};
                        int i, j, k;
                        ++g_334;
                    }
                }
                for (g_203 = 0; (g_203 <= 0); g_203 += 1)
                { 
                    uint32_t l_380 = 4294967289U;
                    g_208[0].f3 = (safe_add_func_int8_t_s_s(p_113, g_82[0].f1));
                    if ((((l_331 = ((safe_mul_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_332[0], p_111)), (safe_lshift_func_uint8_t_u_s(1U, 2)))), ((0xB4925829 || (l_347 <= (safe_sub_func_uint32_t_u_u(g_3, ((g_208[0].f3 | __builtin_ffsl((((0 < (safe_rshift_func_int8_t_s_u(0x0F, 1))) > g_316[0][6][1]) > p_110.f1))) & p_110.f4))))) == 4294967295U))) ^ 3)) < l_314) >= g_208[0].f4))
                    { 
                        return p_111;
                    }
                    else
                    { 
                        g_135 = (safe_mod_func_int16_t_s_s(__builtin_ffs((g_34 ^ (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(__builtin_ffsll((safe_mul_func_int8_t_s_s((g_135 > (safe_mul_func_int16_t_s_s((p_110.f4 & (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((g_84++), g_208[0].f0)), (safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(l_320, (safe_mod_func_int8_t_s_s((p_110.f5 < (g_142[g_241][(g_241 + 1)] <= ((safe_add_func_int16_t_s_s(0, l_285)) == g_35[0]))), p_112)))) | p_110.f5), p_110.f1)))) > l_380), 0xA8DE84D2))), g_33))), 0x9D))), p_112)), 8)), 6)))), 0x7F6E));
                        p_111 |= (g_241 ^ (--g_205));
                    }
                    g_316[0][1][1] ^= (safe_mod_func_uint16_t_u_u(p_111, g_35[0]));
                }
                l_393 = ((p_111 >= l_293) != ((l_392 = (p_113 < ((g_325 = (safe_add_func_float_f_f(0x9.Bp-1, g_94))) > ((l_285 = (safe_add_func_float_f_f((__builtin_ffs(l_389) >= l_314), (((safe_mul_func_float_f_f((p_110.f5 >= l_293), g_208[0].f2)) == g_205) > p_111)))) <= l_315)))) <= g_82[0].f2));
            }
        }
        else
        { 
            int16_t l_412[2];
            int32_t l_414 = 1;
            int32_t l_422 = (-1);
            int32_t l_423 = 0xFA6BBBD3;
            int32_t l_424 = (-1);
            int32_t l_425 = 4;
            int32_t l_442 = 0x99F8BF95;
            int32_t l_443[6] = {(-9),(-9),(-9),(-9),(-9),(-9)};
            int32_t l_474 = 0xBF8B169A;
            int32_t l_508 = 0x5C299F0A;
            int8_t l_514 = 0xBD;
            int i;
            for (i = 0; i < 2; i++)
                l_412[i] = 1;
            g_316[0][4][0] ^= (safe_sub_func_int16_t_s_s((0x55 != (l_293 == (safe_lshift_func_uint8_t_u_s((0U == __builtin_bswap32(p_111)), (l_293 == (+(safe_lshift_func_uint16_t_u_u(__builtin_ffsl((l_332[7] ^= l_293)), __builtin_ffs(g_82[0].f0))))))))), g_3));
            for (l_284 = 0; (l_284 <= 0); l_284 += 1)
            { 
                float l_413 = 0xE.5C4DA1p-31;
                int32_t l_415 = 0x0A15924B;
                int32_t l_436 = 0x127619C6;
                int32_t l_437 = 0xE9C8482E;
                int32_t l_438[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_438[i] = 7;
                for (g_135 = 0; (g_135 <= 0); g_135 += 1)
                { 
                    int32_t l_408 = (-1);
                    int32_t l_416 = 0x99E4DED2;
                    int32_t l_418 = 0x956980EB;
                    int16_t l_426 = 0;
                    int i, j;
                    p_111 = ((((l_332[0] ^= g_142[g_135][(g_135 + 5)]) > 0) ^ (safe_div_func_uint16_t_u_u((1 | (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_142[g_241][(l_284 + 8)] ^ ((((safe_unary_minus_func_uint32_t_u((l_408 ^= p_113))) && g_208[0].f1) | ((safe_rshift_func_uint16_t_u_s(p_110.f5, 15)) > (p_110.f4 | ((-7) < g_142[g_135][(g_135 + 5)])))) || l_347)), 0)), l_331))), l_411[1]))) != g_319);
                    --l_427;
                    g_208[0].f2 = p_110.f4;
                }
                if (p_110.f4)
                { 
                    uint32_t l_430 = 1U;
                    int32_t l_440 = 0xE59FF1F7;
                    int32_t l_441 = (-2);
                    int32_t l_444 = 0x17493E90;
                    int32_t l_445 = 0xDA284915;
                    int32_t l_446[2][4] = {{0xE8C34437,0x61DA1847,0xE8C34437,0x61DA1847},{0xE8C34437,0x61DA1847,0xE8C34437,0x61DA1847}};
                    uint32_t l_476 = 1U;
                    int i, j;
                    l_430++;
                    for (l_425 = 0; (l_425 <= 8); l_425 += 1)
                    { 
                        int32_t l_434[6][4] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
                        int i, j;
                        l_447++;
                    }
                    if ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((+(-10)), (((safe_rshift_func_int8_t_s_s(0x72, 6)) > 0xED38FAC8) >= g_94))), 0U)))
                    { 
                        uint32_t l_473[1][8][1] = {{{4294967291U},{0xFEFB1DB1},{4294967291U},{0xFEFB1DB1},{4294967291U},{0xFEFB1DB1},{4294967291U},{0xFEFB1DB1}}};
                        int32_t l_475 = 0xDF48D24F;
                        int i, j, k;
                        l_411[1] = (safe_add_func_float_f_f(g_203, (p_110.f5 >= (((g_325 = p_113) < (safe_sub_func_float_f_f(p_110.f5, (safe_mul_func_float_f_f((safe_sub_func_float_f_f(g_316[0][5][2], (safe_div_func_float_f_f((0xC.A67B9Ep+29 > (((safe_mul_func_float_f_f(l_332[0], 0x1.FF99BDp+39)) <= ((safe_sub_func_float_f_f((safe_div_func_float_f_f(g_208[0].f0, 0x6.1D166Ep-68)), 0x0.Cp-1)) <= l_473[0][0][0])) <= l_315)), 0x1.Fp+1)))), (-0x2.6p+1)))))) != l_288))));
                        --l_476;
                    }
                    else
                    { 
                        uint32_t l_490 = 0xA75A7665;
                        int32_t l_493 = 9;
                        l_419 = l_419;
                        ++l_479[1][2];
                        l_493 |= (safe_mul_func_int8_t_s_s((l_446[0][0] = ((g_241 | ((l_332[8] = ((safe_div_func_int8_t_s_s(((g_249 = (l_423 = p_110.f2)) && ((safe_sub_func_uint16_t_u_u((l_490 ^= g_82[0].f1), (l_430 & g_316[3][2][1]))) > l_412[0])), ((g_133 && (((g_135 ^= (((safe_sub_func_int8_t_s_s(0x6D, (g_35[0] || l_307))) | g_421[4][0]) | p_110.f2)) < p_110.f4) >= (-1))) ^ g_208[0].f5))) > 4294967294U)) >= 0x9C68)) > l_417)), 0xA8));
                    }
                }
                else
                { 
                    int32_t l_515[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_515[i] = 0;
                    if (g_82[0].f1)
                        break;
                    g_421[4][1] = (p_111 = (safe_add_func_int32_t_s_s(g_252, (++g_94))));
                    g_316[0][5][2] &= (safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(l_438[0], ((safe_div_func_int8_t_s_s((g_203 = l_437), (safe_div_func_uint8_t_u_u(p_110.f1, (safe_sub_func_uint8_t_u_u(g_35[0], l_508)))))) ^ (safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((+g_208[0].f4) <= l_514) == (--g_334)), (p_111 > l_419))) ^ g_3), (-10)))))) >= 0x32D3), p_110.f0));
                }
            }
        }
        g_325 = p_110.f4;
        g_82[0].f1 ^= (l_347 == ((l_417 ^= ((safe_lshift_func_int8_t_s_s((l_331 <= g_133), p_110.f3)) | l_315)) != (safe_add_func_uint8_t_u_u((0x8FBDD4F9 >= (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(l_288, (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((p_112 = (safe_mul_func_uint8_t_u_u(g_82[0].f0, (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_208[0].f2, p_110.f5)), g_421[4][1]))))), 65535U)), 0x5A)))), g_316[3][6][3])), 6))), l_284))));
        for (l_447 = 0; (l_447 <= 0); l_447 += 1)
        { 
            uint32_t l_545 = 5U;
            uint32_t l_569 = 0U;
            int32_t l_574 = 0xF226455D;
            int32_t l_575 = 1;
            int32_t l_576[4] = {1,1,1,1};
            int i;
            for (g_133 = 0; (g_133 <= 3); g_133 += 1)
            { 
                int i;
                if ((safe_mod_func_uint32_t_u_u(__builtin_popcountll(l_411[g_133]), 1U)))
                { 
                    int i;
                    return l_411[(g_241 + 4)];
                }
                else
                { 
                    int32_t l_568 = 0x995C481A;
                    int i, j;
                    l_332[5] = (((l_411[g_133] = (g_142[g_241][(l_447 + 3)] <= (safe_sub_func_float_f_f(g_142[g_241][g_133], 0x7.F4FFE4p-66)))) == l_427) <= (l_545 = l_544[1][5][0]));
                    l_411[(g_133 + 3)] |= (((1 && (__builtin_ffsll(p_110.f0) > ((((safe_add_func_int32_t_s_s(p_112, g_252)) > g_82[0].f2) >= ((safe_sub_func_uint8_t_u_u(g_208[0].f4, 0x52)) && (safe_mod_func_uint32_t_u_u((l_554[0] = (p_112 > l_447)), 0x5146A9DD)))) <= 0))) & p_110.f4) ^ l_427);
                    for (l_285 = 0; (l_285 <= 0); l_285 += 1)
                    { 
                        int32_t l_560 = 0xD75C92E5;
                        int i, j, k;
                        g_135 |= ((safe_mod_func_int16_t_s_s((l_568 ^= ((((+(l_331 |= g_94)) <= (l_411[g_133] && (~((g_82[0].f2 && p_110.f4) > (+0xE4BD2645))))) | l_560) || (safe_mul_func_uint16_t_u_u((p_113 < (g_82[0].f2 | (+(safe_add_func_uint8_t_u_u((__builtin_ctz((safe_sub_func_uint32_t_u_u((p_111 && g_3), g_84))) && 0U), g_316[1][7][2]))))), l_411[g_133])))), g_208[0].f5)) || p_110.f0);
                        return l_569;
                    }
                }
                p_111 |= (l_315 ^ l_570);
                p_111 |= p_112;
                for (l_288 = 0; (l_288 <= 0); l_288 += 1)
                { 
                    int8_t l_573 = (-8);
                    int32_t l_577 = (-1);
                    int32_t l_578 = 2;
                    for (l_420 = 0; (l_420 <= 0); l_420 += 1)
                    { 
                        g_208[0].f3 = p_110.f3;
                    }
                    for (l_417 = 0; (l_417 >= 0); l_417 -= 1)
                    { 
                        uint8_t l_579 = 0x3C;
                        l_573 |= (0x5F || (0x5E & (safe_add_func_uint8_t_u_u(p_110.f0, l_569))));
                        l_579--;
                    }
                }
            }
            ++l_584;
        }
    }
    g_135 = (l_419 = (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((l_583[1] &= __builtin_bswap64((safe_mod_func_uint32_t_u_u((p_113 ^ (p_111 = g_249)), ((l_285 = (safe_lshift_func_uint16_t_u_s(p_112, (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_112, p_110.f0)), (safe_rshift_func_int16_t_s_u(l_544[1][5][0], 15))))))) || (!(g_334 = g_82[0].f0))))))), (g_133 |= (l_331 |= (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((__builtin_parityl((safe_add_func_uint8_t_u_u(l_479[3][0], l_417))) & g_421[4][1]), 1)), l_554[0])))))), g_82[0].f2)) & l_307), g_34)));
    return l_419;
}




static struct S1  func_114(struct S0  p_115)
{ 
    uint8_t l_118 = 0x99;
    uint32_t l_123 = 0xC9157731;
    int32_t l_128 = 0xAE61DEDA;
    const uint32_t l_131 = 0x366FBB58;
    int32_t l_132 = 0xA8DCBC2B;
    int32_t l_136 = 1;
    uint8_t l_137 = 0x05;
    int32_t l_277 = (-1);
    struct S1 l_279 = {51,169,-178,1912,-243,12};
    l_118 = (safe_div_func_float_f_f(0xB.F53E4Ep+1, g_82[0].f2));
    if ((__builtin_parityl(g_3) != (safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((p_115.f1 > p_115.f1), ((0xDA865B3C != g_84) | l_123))) == (g_133 ^= (safe_add_func_uint32_t_u_u((l_128 = (--g_94)), ((l_132 = (((safe_mul_func_int8_t_s_s(l_123, g_34)) & l_131) > (-7))) || l_131))))), g_35[0]))))
    { 
        int16_t l_134 = 0xB91F;
        l_137--;
    }
    else
    { 
        if (l_132)
        { 
            g_135 = g_82[0].f1;
        }
        else
        { 
            for (l_137 = 0; (l_137 >= 2); l_137 = safe_add_func_int32_t_s_s(l_137, 1))
            { 
                if (p_115.f1)
                    break;
            }
lbl_278:
            g_82[0].f1 = g_94;
        }
        g_135 = 1;
    }
    for (l_137 = 0; (l_137 <= 0); l_137 += 1)
    { 
        uint32_t l_146 = 0x6939AD6F;
        int32_t l_147 = 0x232EDDAF;
        int32_t l_171[1][6] = {{(-2),(-2),0x984D6A5D,(-2),(-2),0x984D6A5D}};
        int i, j;
        l_128 = ((l_136 = p_115.f2) > (l_132 &= ((l_147 = ((~(l_146 = (safe_rshift_func_int8_t_s_u(l_137, 2)))) != (((p_115.f2 > (++g_133)) && (g_82[0].f0 > (p_115.f1 | (0xD98E | g_84)))) > ((safe_add_func_int8_t_s_s(p_115.f2, (((safe_sub_func_int16_t_s_s((p_115.f1 < p_115.f0), p_115.f0)) > l_128) ^ p_115.f1))) || p_115.f0)))) > 0xA861C211)));
        for (l_147 = 0; (l_147 <= 0); l_147 += 1)
        { 
            int32_t l_169 = 0x686379E6;
            int32_t l_200 = 0x6E3802CF;
            int32_t l_201 = 0xB023839C;
            int32_t l_202 = (-1);
            int32_t l_204 = (-2);
            for (l_123 = 0; (l_123 <= 0); l_123 += 1)
            { 
                int32_t l_222 = 0xEA2692C9;
                int32_t l_224 = 0x89D2C2FF;
                struct S1 l_244 = {55,655,27,-16061,54,35};
                int i, j;
                if ((safe_rshift_func_uint16_t_u_u(g_142[l_137][(l_123 + 2)], 8)))
                { 
                    const float l_156 = 0x0.310A9Cp+38;
                    p_115.f1 = p_115.f0;
                    if (g_84)
                        continue;
                }
                else
                { 
                    float l_170 = 0x5.E1E1C9p+26;
                    int32_t l_172[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_172[i] = (-1);
                    l_172[4] = __builtin_ffsll((g_35[0] | ((g_82[0].f1 && 0x3F8495BF) < (safe_sub_func_int8_t_s_s((((l_171[0][2] ^= (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_35[0], g_35[0])), ((__builtin_parityll((safe_mul_func_uint8_t_u_u(0U, ((g_84 = (((safe_sub_func_uint32_t_u_u(((((safe_div_func_uint32_t_u_u(g_34, g_142[l_137][(l_123 + 2)])) < (g_142[l_137][(l_123 + 2)] == l_169)) >= 1U) ^ 65530U), l_169)) < g_94) ^ p_115.f2)) || 0xCF34)))) < 1U) ^ 4294967290U)))) <= g_35[0]) >= p_115.f0), 1U)))));
                    if ((safe_add_func_uint32_t_u_u((g_94 = (safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(p_115.f1, (safe_mul_func_int8_t_s_s(0xC4, (safe_add_func_uint32_t_u_u(4294967288U, l_131)))))) < ((safe_sub_func_uint16_t_u_u(p_115.f1, (+(0x42 & l_123)))) < (g_82[0].f1 &= g_142[l_137][(l_123 + 2)]))), p_115.f1))), p_115.f1)))
                    { 
                        uint16_t l_194[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_194[i] = 0x0889;
                        g_135 = (safe_div_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u((p_115.f1 || (safe_add_func_uint16_t_u_u((l_172[5] == (-1)), (((safe_sub_func_uint32_t_u_u((l_194[0]++), __builtin_popcountl(g_142[l_137][(l_123 + 2)]))) && (__builtin_ffs(g_33) >= 0xE7)) | (!(safe_sub_func_int8_t_s_s((0xD3 | 0x6A), 255U))))))), g_142[l_137][(l_123 + 2)])) && 0x5F2194A6) == p_115.f2), g_82[0].f2));
                        g_205++;
                        return g_208[0];
                    }
                    else
                    { 
                        const float l_209 = (-0x1.Cp+1);
                        g_82[0].f1 = p_115.f0;
                    }
                }
                for (l_128 = 0; (l_128 <= 0); l_128 += 1)
                { 
                    float l_223 = 0x0.Ap+1;
                    int32_t l_225 = 1;
                    int32_t l_242 = (-1);
                    int32_t l_243 = 0;
                    for (p_115.f0 = 0; (p_115.f0 <= 0); p_115.f0 += 1)
                    { 
                        int16_t l_210 = 1;
                        int32_t l_226 = (-4);
                        p_115.f1 = g_33;
                        l_200 ^= ((l_210 == g_208[0].f3) & (safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((g_203 = g_82[0].f0), g_3)), (safe_add_func_uint32_t_u_u((g_208[0].f5 ^= __builtin_clz((g_205 ^= (l_222 |= (safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int16_t_s_s(g_142[l_137][(l_123 + 2)], 3)) < 65527U))))))), ((l_224 = 0) && 0x52C7))))), p_115.f1)));
                        l_226 = l_225;
                    }
                    if (((safe_add_func_uint8_t_u_u((0x6872 && ((l_171[0][2] ^= __builtin_ia32_crc32qi((l_242 ^= (l_225 |= (safe_lshift_func_int8_t_s_s(p_115.f0, (l_132 = (safe_sub_func_int16_t_s_s(((l_202 = (safe_add_func_int8_t_s_s((g_142[l_137][(l_123 + 2)] < (__builtin_parityl((p_115.f0 || __builtin_ffsll((p_115.f2 < p_115.f1)))) && __builtin_clz(((g_241 = (safe_rshift_func_uint8_t_u_s((--g_133), (safe_lshift_func_int16_t_s_s((__builtin_clzll(g_35[1]) < 0xFF), g_3))))) || l_128)))), 0x45))) <= 1U), p_115.f0))))))), l_200)) || g_208[0].f3)), l_243)) > (-1)))
                    { 
                        p_115.f1 = 0x8C8359BE;
                        l_132 = g_94;
                        return l_244;
                    }
                    else
                    { 
                        uint8_t l_257 = 0U;
                        uint8_t l_276 = 0x06;
                        g_252 = ((safe_div_func_float_f_f(((g_249 = (safe_mul_func_float_f_f(l_128, l_243))) >= (safe_div_func_float_f_f(p_115.f1, g_142[0][3]))), __builtin_popcount((g_34 >= g_208[0].f4)))) <= p_115.f0);
                        l_200 &= (safe_mod_func_int16_t_s_s((l_204 ^ (+(!(l_257 && (((safe_lshift_func_uint8_t_u_s((__builtin_parityll((__builtin_clzl((safe_mul_func_uint16_t_u_u((0U || (safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((p_115.f1 ^ g_241), __builtin_ctz((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(l_244.f2, 6U)), g_35[1]))))), (-1)))), g_142[0][8]))) > g_82[0].f2)) || l_257), 5)) | 0x3E) == g_203))))), g_82[0].f2));
                        l_244.f3 ^= ((safe_div_func_int32_t_s_s(p_115.f0, (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((__builtin_ctzl((l_276 > (l_225 >= (g_142[0][3] == ((l_202 = 0xC87A) <= l_277))))) < p_115.f2), (l_147 == p_115.f1))), 0x4A132B8B)))) & 0);
                    }
                }
                if (l_244.f0)
                    goto lbl_278;
            }
            return g_208[0];
        }
    }
    return l_279;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_29();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_35[i], "g_35[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_40, "g_40", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_82[i].f0, "g_82[i].f0", print_hash_value);
        transparent_crc(g_82[i].f1, "g_82[i].f1", print_hash_value);
        transparent_crc(g_82[i].f2, "g_82[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_142[i][j], "g_142[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_208[i].f0, "g_208[i].f0", print_hash_value);
        transparent_crc(g_208[i].f1, "g_208[i].f1", print_hash_value);
        transparent_crc(g_208[i].f2, "g_208[i].f2", print_hash_value);
        transparent_crc(g_208[i].f3, "g_208[i].f3", print_hash_value);
        transparent_crc(g_208[i].f4, "g_208[i].f4", print_hash_value);
        transparent_crc(g_208[i].f5, "g_208[i].f5", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_316[i][j][k], "g_316[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc_bytes (&g_325, sizeof(g_325), "g_325", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_421[i][j], "g_421[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_611.f0, "g_611.f0", print_hash_value);
    transparent_crc(g_611.f1, "g_611.f1", print_hash_value);
    transparent_crc(g_611.f2, "g_611.f2", print_hash_value);
    transparent_crc(g_611.f3, "g_611.f3", print_hash_value);
    transparent_crc(g_611.f4, "g_611.f4", print_hash_value);
    transparent_crc(g_611.f5, "g_611.f5", print_hash_value);
    transparent_crc(g_611.f6, "g_611.f6", print_hash_value);
    transparent_crc(g_611.f7, "g_611.f7", print_hash_value);
    transparent_crc(g_611.f8, "g_611.f8", print_hash_value);
    transparent_crc(g_611.f9, "g_611.f9", print_hash_value);
    transparent_crc(g_764, "g_764", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_810[i][j][k], "g_810[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_955, "g_955", print_hash_value);
    transparent_crc(g_999, "g_999", print_hash_value);
    transparent_crc(g_1045, "g_1045", print_hash_value);
    transparent_crc(g_1139, "g_1139", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_1226[i][j][k], "g_1226[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1387, "g_1387", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1401[i][j].f0, "g_1401[i][j].f0", print_hash_value);
            transparent_crc(g_1401[i][j].f1, "g_1401[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1427[i][j][k], "g_1427[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1483.f0, "g_1483.f0", print_hash_value);
    transparent_crc(g_1483.f1, "g_1483.f1", print_hash_value);
    transparent_crc(g_1483.f2, "g_1483.f2", print_hash_value);
    transparent_crc(g_1483.f3, "g_1483.f3", print_hash_value);
    transparent_crc(g_1483.f4, "g_1483.f4", print_hash_value);
    transparent_crc(g_1483.f5, "g_1483.f5", print_hash_value);
    transparent_crc(g_1483.f6, "g_1483.f6", print_hash_value);
    transparent_crc(g_1483.f7, "g_1483.f7", print_hash_value);
    transparent_crc(g_1483.f8, "g_1483.f8", print_hash_value);
    transparent_crc(g_1483.f9, "g_1483.f9", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1631[i][j][k], "g_1631[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc_bytes(&g_1713[i], sizeof(g_1713[i]), "g_1713[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1957, "g_1957", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1965[i], "g_1965[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1986.f0, "g_1986.f0", print_hash_value);
    transparent_crc(g_1986.f1, "g_1986.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc_bytes(&g_2284[i][j], sizeof(g_2284[i][j]), "g_2284[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2285, "g_2285", print_hash_value);
    transparent_crc(g_2376, "g_2376", print_hash_value);
    transparent_crc(g_2549, "g_2549", print_hash_value);
    transparent_crc_bytes (&g_2558, sizeof(g_2558), "g_2558", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2559[i], "g_2559[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2570[i][j], "g_2570[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2593, "g_2593", print_hash_value);
    transparent_crc_bytes (&g_2596, sizeof(g_2596), "g_2596", print_hash_value);
    transparent_crc(g_2677, "g_2677", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}



