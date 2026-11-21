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

extern short D_80075556;
s32 func_80113AD0();
s32 func_8022DDD0();
s32 func_8022DEA0();
f32 func_8022EBE8();
f32 func_8022EC3C();
s32 func_8023E724();
void *func_802A3AD0();
s32 func_802A5110();
extern char D_80036B1C[];
extern char D_80075518[];
extern char D_8007558C[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x38, 0x3c, 0x40, 0x44, 0x48, 0x58, 0x5c], gap at: 0x4c. */
void func_802A3898(void *arg0) {
    short *__base_D_80075556;
    f32 sp18[3];
    f32 sp28[3];
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    s32 temp_ret;
    u32 var_s0;
    void *temp_v0;

    if ((M2C_FIELD(arg0, s8 *, 0x73) == 0) && !(func_8022DEA0() & 0xFF)) {
        func_8022DDD0(1, 0xA, 0xFF, 0xFF, 0xFF);
        M2C_FIELD(arg0, s8 *, 0x73) = 1;
    }
    if (M2C_FIELD(arg0, u8 *, 0x72) != 0) {
        temp_ret = func_80113AD0();
        if ((temp_ret % 10) < 2) {

        } else {
            temp_fs0 = *(f32 *)0x2160E4;
            sp18[0] = func_8022EBE8(temp_fs0);
            sp18[1] = func_8022EC3C(*(f32 *)0x2160E8);
            sp18[2] = func_8022EBE8();
            temp_v0 = func_802A3AD0(D_8007558C, M2C_FIELD(arg0, u8 *, 0x72));
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, f32 *, 0x18) = sp18[0];
                M2C_FIELD(temp_v0, f32 *, 0x1C) = sp18[1];
                M2C_FIELD(temp_v0, f32 *, 0x20) = sp18[2];
            }
        }
        var_s0 = 0;
        __base_D_80075556 = &D_80075556;
        if ((*__base_D_80075556) != 0) {
            temp_fs0_2 = *(f32 *)0x2160EC;
            temp_fs0f = *(f32 *)0x2160F0;
            do {
                if ((func_80113AD0() % 10) >= 6) {
                    func_8023E724(D_80075518, var_s0, D_80036B1C, sp28);
                    sp28[0] += func_8022EBE8();
                    sp28[1] += func_8022EBE8();
                    sp28[2] += func_8022EBE8();
                    sp18[0] = func_8022EBE8();
                    sp18[2] = func_8022EBE8();
                    sp18[1] = func_8022EC3C(*(f32 *)0x2160F4);
                    func_802A5110(sp28, sp18);
                }
                var_s0 += 1;
            } while (var_s0 < (u32) (*__base_D_80075556));
        }
    }
}
