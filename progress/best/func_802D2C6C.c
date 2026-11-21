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

s32 func_80104C50();
s32 func_80104DE0();
s32 func_802322A4();
s16 func_8023648C();
s32 func_802364D0();
f32 func_80236544();
s32 func_80239398();
s32 func_80261408();
extern char D_2D2A50[];
extern char D_8007C448[];

s32 func_802D2C6C(s32 arg0, s16 arg1) {
    s32 *temp_a1;
    char *var_s2;
    s16 temp_s0;
    s16 temp_v0_2;
    s32 temp_v0;
    s32 var_s4;
    void *var_s3;

    temp_v0 = func_80104C50(arg0, arg1);
    if (temp_v0 != 0) {
        if ((func_802364D0(temp_v0) == 0x45657674) && (func_802364D0(temp_v0) == 0x76303032)) {
            temp_v0_2 = func_8023648C(temp_v0);
            var_s4 = 0;
            if (temp_v0_2 > 0) {
                var_s3 = D_8007C448 + 8;
                var_s2 = D_8007C448;
                do {
                    temp_s0 = func_8023648C(temp_v0);
                    func_802364D0(temp_v0);
                    func_8023648C(temp_v0);
                    func_8023648C(temp_v0);
                    func_8023648C(temp_v0);
                    M2C_FIELD(var_s2, s32 *, 0) = func_802364D0(temp_v0);
                    M2C_FIELD(var_s2, s32 *, 4) = func_802364D0(temp_v0);
                    func_802364D0(temp_v0);
                    func_802364D0(temp_v0);
                    func_802364D0(temp_v0);
                    func_802364D0(temp_v0);
                    M2C_FIELD(var_s2, f32 *, 8) = func_80236544(temp_v0);
                    M2C_FIELD(var_s2, f32 *, 0x10) = func_80236544(temp_v0);
                    M2C_FIELD(var_s2, f32 *, 0x18) = func_80236544(temp_v0);
                    M2C_FIELD(var_s2, f32 *, 0xC) = func_80236544(temp_v0);
                    M2C_FIELD(var_s2, f32 *, 0x14) = func_80236544(temp_v0);
                    M2C_FIELD(var_s2, f32 *, 0x1C) = func_80236544(temp_v0);
                    func_802322A4(var_s3);
                    var_s3 += 0x20;
                    temp_a1 = var_s2;
                    var_s2 += 0x20;
                    var_s4 += 1;
                    func_80239398(*(s32 *)((temp_s0 * 4) + func_80261408()), temp_a1, 0, D_2D2A50, 0x800);
                } while (var_s4 < temp_v0_2);
            }
        }
        func_80104DE0(temp_v0);
    }
    return 0;
}
