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

M2C_UNK func_8022117C(M2C_UNK, s32, s32, s16, s32, s32, s32, s32); /* extern */
u32 func_802D5620(s32);                             /* extern */
M2C_UNK func_802D5864(s32, s32, s32);               /* extern */
extern M2C_UNK D_80052770;
extern M2C_UNK D_8007BF58;
extern M2C_UNK D_8007C8B0;
extern s32 D_8007C8F0;
extern s32 D_8007C8F8;
extern s32 D_8007C8FC;
extern M2C_UNK D_8007DB78;

void func_802D5668(void) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v0;
    u32 temp_v0;
    void *temp_a1_2;
    void *temp_a2_2;
    void *temp_s0;
    void *temp_v0_2;

    if (*((D_8007C8F8 * 0x10) + &D_8007C8B0) != 0) {
        var_s1 = 0;
        if ((M2C_FIELD(&D_80052770, s32 *, 4) * 2) > 0) {
            do {
                temp_s0 = (D_8007C8F8 * 0x10) + &D_8007C8B0;
                temp_v0 = M2C_FIELD(temp_s0, u32 *, 0xC);
                M2C_FIELD(temp_s0, u32 *, 8) = temp_v0;
                if (temp_v0 >= temp_v0) {
                    if ((u32) M2C_FIELD(temp_s0, u32 *, 8) >= func_802D5620(M2C_FIELD(temp_s0, s32 *, 0))) {
                        M2C_FIELD(&D_8007BF58, s32 *, 0x384) = -1;
                    } else {
                        temp_v0_2 = (D_8007C8F8 * 0x10) + &D_8007C8B0;
                        temp_a1 = M2C_FIELD(temp_v0_2, s32 *, 0xC);
                        temp_a2 = M2C_FIELD(temp_v0_2, s32 *, 0);
                        M2C_FIELD(temp_v0_2, s32 *, 8) = temp_a1;
                        func_802D5864(M2C_FIELD(temp_v0_2, s32 *, 4), temp_a2 + temp_a1, temp_a2);
                    }
                }
                var_s1 += 1;
            } while (var_s1 < (M2C_FIELD(&D_80052770, s32 *, 4) * 2));
        }
    }
    var_s1_2 = 0;
    do {
        temp_v1 = D_8007C8F0 + var_s1_2;
        var_v0 = temp_v1;
        if (temp_v1 < 0) {
            var_v0 = temp_v1 + 3;
        }
        temp_a2_2 = ((temp_v1 - ((var_v0 >> 2) * 4)) * 0x10) + &D_8007C8B0;
        if (M2C_FIELD(temp_a2_2, s32 *, 0) != 0) {
            temp_a1_2 = M2C_FIELD(M2C_FIELD(temp_a2_2, void **, 4), void **, 0xC);
            D_8007C8FC = M2C_FIELD(temp_a1_2, s32 *, 8);
            if (M2C_FIELD(&D_8007DB78, u8 *, 2) == 0) {
                func_8022117C(0x100000, M2C_FIELD(temp_a2_2, s32 *, 8), M2C_FIELD(temp_a2_2, s32 *, 0), (s16) (s32) ((f32) (((*(u8 *)0x100F80 & 0x7F) - 2) * var_s1_2) + *(f32 *)0x21B194), (s32) M2C_FIELD(temp_a1_2, u8 *, 0x11), (s32) M2C_FIELD(temp_a1_2, u8 *, 0x12), (s32) M2C_FIELD(temp_a1_2, u8 *, 0x13), 0xFF);
            }
        }
        var_s1_2 += 1;
    } while (var_s1_2 < 4);
}
