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

M2C_UNK func_80109918(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_8024F6C4();                                /* extern */
void *func_8025BA08(s32, s32, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_2068FC;
extern s8 D_8006A840;

s32 func_8024F654(void *arg0) {
    s32 ret;
    void *temp_v0;

    temp_v0 = func_8025BA08(arg0 + 0x24, arg0 + 0x18, 0x111, 0, 0, &D_2068FC);
    if (temp_v0 == NULL) {
        ret = func_8024F6C4();
    } else {
        func_80109918(M2C_FIELD(temp_v0, s32 *, 8) + 0x24, 0x7F, 0x194);
        (*(u8 *)&D_8006A840) = 0xCD;
        M2C_FIELD(arg0, u16 *, 0x7E) = (u16) (M2C_FIELD(arg0, u16 *, 0x7E) | 0x1000);
        ret = 1;
    }
    return ret;
}
