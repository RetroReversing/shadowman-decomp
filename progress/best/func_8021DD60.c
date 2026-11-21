/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

s32 func_801043F8(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK osCreateMesgQueue(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
extern u32 D_80000318;
extern M2C_UNK D_8002C1C0;
extern M2C_UNK D_80052800;
extern M2C_UNK D_80053860;

void func_8021DD60(void) {
    s32 temp_a3;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0x8000;
    if ((u32) D_80000318 > 0x400000U) {
        var_s0 = 0x20000;
    }
    temp_v0 = func_801043F8(var_s0, 4, 0);
    M2C_FIELD(&D_8002C1C0, s32 *, 0x28) = temp_v0;do{
    temp_a3 = temp_v0 + var_s0;}while(0);
    M2C_FIELD(&D_8002C1C0, s32 *, 0x2C) = temp_a3;
    M2C_FIELD(&D_8002C1C0, s32 *, 0x68) = temp_v0;
    M2C_FIELD(&D_8002C1C0, s32 *, 0xA8) = temp_v0;
    M2C_FIELD(&D_8002C1C0, s32 *, 0x6C) = temp_a3;
    M2C_FIELD(&D_8002C1C0, s32 *, 0xAC) = temp_a3;
    osCreateMesgQueue(&D_80053860, &D_80052800, 3, temp_a3);
}
