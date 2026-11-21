#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_8004C79C;
extern int D_8004C798;
s32 func_801062CC();
s32 func_80106490();
s32 func_80107120();
s32 func_801073F4();
s32 func_801079E0();
s32 func_80116EB0();
s32 func_80118370();
s32 func_80118410();
s32 osCreateMesgQueue();
s32 osWritebackDCacheAll();
extern u32 D_80000318;
extern char D_8004B420[];
extern char D_B1DEFBE0[];
extern char D_B1ECF9D0[];

void func_801064BC(void) {
    char *var_s0;
    char *var_s0_2;
    u32 var_s1;
    u32 var_s1_3;
    u8 var_s1_2;
    void *temp_s0;
    void *temp_s2;
    void *temp_s3;
    void *var_s0_3;
    

    var_s0 = D_8004B420;
    func_80106490(D_8004B420, 0, 0x1618);
    func_80106490(D_8004B420 + 0x1380, 0xFF, 0x200);
    func_80106490(D_8004B420 + 0x928, 0xFF, 0x900);
    var_s1 = 0;
    do {
        M2C_FIELD(var_s0, s16 *, 0x1580) = 0xFFFF;
        M2C_FIELD(var_s0, u8 *, 0x1582) = 0xFF;
        M2C_FIELD(var_s0, u8 *, 0x1583) = 0xFF;
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0x1FU);
    var_s1_2 = 0;
    temp_s3 = D_8004B420 + 0x1378;
    var_s0_2 = D_8004B420;
    temp_s2 = D_8004B420 + 0x928;
    D_8004C79C = 0;
    D_8004C798 = 0;
    do {
        func_801073F4(temp_s3, temp_s2);
        M2C_FIELD(var_s0_2, u8 *, 0x932) = var_s1_2;
        var_s0_2 += 0x10;
        var_s1_2 += 1;
        temp_s2 += 0x10;
    } while (var_s1_2 < 0x90U);
    osCreateMesgQueue(temp_s3 - 0x134C, temp_s3 - 0x1334, 0x21);
    temp_s2 = temp_s3 - 0x150;
    osCreateMesgQueue(temp_s2, temp_s3 - 0x138, 8);
    osCreateMesgQueue(temp_s3 - 0x118, temp_s3 - 0x100, 8);
    temp_s0 = temp_s3 - 0x1378;
    M2C_FIELD(temp_s0, s16 *, 0x1600) = 0x200;
    M2C_FIELD(temp_s0, u16 *, 0x1602) = (u16) ((u32) ((D_B1ECF9D0 - D_B1DEFBE0) - 1) >> 0xC);
    M2C_FIELD(temp_s0, s32 **, 0x1608) = D_B1DEFBE0;
    M2C_FIELD(temp_s0, void **, 0x160C) = (void *) (temp_s3 + 8);
    M2C_FIELD(temp_s0, s32 *, 0x1604) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x15FC) = 0;
    if ((u32) D_80000318 > 0x5FFFFFU) {
        func_801062CC(D_B1DEFBE0, 0x80600000, M2C_FIELD(temp_s0, u16 *, 0x1602) << 0xC);
        func_801079E0(0, 0x1FE000, 0x200000, 0x600000, -1, 7);
        M2C_FIELD(temp_s0, s16 *, 0x1614) = 1;
    }
    var_s1_3 = 0;
    osWritebackDCacheAll();
    func_80118370(0x80000000, 0x800000);
    func_80118410(0x80000000, 0x800000);
    var_s0_3 = temp_s0 + 0x1298;
    do {
        func_80116EB0(temp_s2, var_s0_3, 1);
        var_s1_3 += 1;
        var_s0_3 += 0x1C;
    } while (var_s1_3 < 8U);
    func_80107120();
}
