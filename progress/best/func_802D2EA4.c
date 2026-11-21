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

extern unsigned char D_8007DC04;
extern unsigned char D_8007DC05;
s32 func_802D2E34();
s32 func_802D2F50();
extern s32 D_218F8C;
extern char D_219B90[];
extern s32 D_800305B8;
extern char D_8007DB78[];

void func_802D2EA4(void *arg0) {
    char *var_s0;
    s32 var_s1;
    void *temp_v0;
    void *temp_v1;

    var_s1 = 0;
    if ((u32) (D_8007DC04 - 4) < 2U) {
        func_802D2F50(D_800305B8);
        return;
    }
    if (D_8007DC05 == 0) {
        func_802D2F50((s32) &D_218F8C);
        return;
    }
    var_s0 = &D_218F8C;
    if (M2C_FIELD(&D_218F8C, s32 *, -0x7074) != 0) {
loop_7:
        var_s0 += 0xC;
        if (func_802D2E34(*(s32 *)var_s0) == 0) {
            var_s1 += 1;
            if (*(s32 *)var_s0 != 0) {
                goto loop_7;
            }
        }
    }
    temp_v1 = (var_s1 * 0x18) + D_219B90;
    temp_v0 = (((var_s1 * 2) + 1) * 0xC) + D_219B90;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(temp_v1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(temp_v1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(temp_v1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(temp_v0, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(temp_v0, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(temp_v0, f32 *, 8);
}
