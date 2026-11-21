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

s32 func_8022F9D8();
s32 func_8023D030();
extern s32 D_8006A500;

void func_8023CEE0(s32 arg0, s16 *arg1) {
    char *var_s1;
    s16 temp_v1;
    
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_s5;
    void *temp_s6;

    var_s0 = 0;
    var_s1 = arg1;
    __repair_rows: {
        temp_v1 = *(s16 *)var_s1;
        if (temp_v1 != -1) {
            func_8022F9D8(M2C_FIELD(arg1, s32 *, 0x34) + (M2C_FIELD(((temp_v1 * 0x38) + M2C_FIELD(arg1, s32 *, 0x30)), s16 *, 0x2C) * 0xC));
        }
        var_s0 += 1;
        var_s1 += 2;
    }
if (var_s0 < 3) goto __repair_rows;
    temp_s6 = M2C_FIELD(arg1, void **, 0x48);
    var_s5 = arg0 + 0x34;
    if (M2C_FIELD(arg1, s16 *, 0x16) < 0xA) {
        M2C_FIELD(arg1, s16 *, 0x16) = 0xA;
    }
    var_s0_2 = 0;
    var_s4 = M2C_FIELD(arg1, s32 *, 0x40);
    var_s1_2 = M2C_FIELD(arg1, s32 *, 0x44);
    D_8006A500 = arg0;
    if (M2C_FIELD(arg1, s16 *, 0x3E) > 0) {
        var_s1 = M2C_FIELD(temp_s6, s32 **, 0x18);
        do {
            temp_v0 = *(s32 *)var_s1;
            if ((temp_v0 != -1)) {
                if ((var_s0_2 != 0)) {
                    var_s5 = M2C_FIELD(arg1, s32 *, 0x40) + (temp_v0 << 6);
                }
            }
            func_8023D030(var_s0_2, arg1, var_s4, var_s1_2, var_s5, temp_s6);
            if (var_s1_2 != 0) {
                var_s1_2 += 0x30;
            }
            var_s1 += 4;
            var_s0_2 += 1;
            var_s4 += 0x40;
        } while (var_s0_2 < M2C_FIELD(arg1, s16 *, 0x3E));
    }
}
