/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

s32 func_80237428();                                /* extern */
s32 func_8026E2F4(M2C_UNK);                         /* extern */
extern s32 D_8002D2B4;
extern void *D_8005E9F0;
extern s32 D_80069738;
extern s32 D_800698A0;

void func_80249744(void *arg0) {
    f32 temp_fv0;
    s32 temp_v0;
    void **temp_s1;
    void *temp_s0;
    void *var_v1;

    if (func_8026E2F4(0xA7) != 0) {
        temp_s0 = M2C_FIELD(arg0, void **, 8);
        temp_s1 = M2C_FIELD(temp_s0, void ***, 0x6C);
        if ((M2C_FIELD(temp_s0, s8 *, 0x71) == D_8002D2B4) && (D_800698A0 == M2C_FIELD(D_8005E9F0, s32 *, 0x10))) {
            var_v1 = *temp_s1;
            if ((var_v1 == NULL) || (M2C_FIELD(var_v1, s32 *, 0x2C) != arg0)) {
                temp_v0 = func_80237428();
                if (temp_v0 != -1) {
                    temp_fv0 = *(f32 *)0x202D70;
                    var_v1 = D_800698A0 + (temp_v0 * 0x5C);
                    *temp_s1 = var_v1;
                    M2C_FIELD(var_v1, void **, 0x2C) = arg0;
                    M2C_FIELD(var_v1, f32 *, 0x18) = temp_fv0;
                    M2C_FIELD(var_v1, f32 *, 0x48) = temp_fv0;
                    M2C_FIELD(var_v1, f32 *, 0x20) = (f32) M2C_FIELD(var_v1, f32 *, 4);
                    M2C_FIELD(var_v1, f32 *, 0x24) = (f32) M2C_FIELD(var_v1, f32 *, 8);
                    M2C_FIELD(var_v1, f32 *, 0x28) = (f32) M2C_FIELD(var_v1, f32 *, 0xC);
                    M2C_FIELD(var_v1, f32 *, 4) = (f32) M2C_FIELD(temp_s0, f32 *, 0x24);
                    M2C_FIELD(var_v1, f32 *, 8) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x28) - *(f32 *)0x202D74);
                    M2C_FIELD(var_v1, s16 *, 0) = 6;
                    M2C_FIELD(var_v1, s8 *, 0x1C) = 0x78;
                    M2C_FIELD(var_v1, s8 *, 0x1D) = 0xC4;
                    M2C_FIELD(var_v1, f32 *, 0x14) = (f32) *(f32 *)0x202D78;
                    M2C_FIELD(var_v1, s8 *, 0x1E) = 0xFF;
                    M2C_FIELD(var_v1, f32 *, 0x10) = (f32) *(f32 *)0x202D7C;
                    M2C_FIELD(var_v1, f32 *, 0xC) = (f32) M2C_FIELD(temp_s0, f32 *, 0x2C);
                    goto block_7;
                }
            } else {
block_7:
                M2C_FIELD(var_v1, s32 *, 0x30) = (s32) (D_80069738 + 1);
            }
        }
    }
}
