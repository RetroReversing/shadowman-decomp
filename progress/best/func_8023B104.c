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

void *func_801043F8(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
s32 func_8021DD0C(s32, s16);                        /* extern */
s32 func_80230EC0(s32, s32);                        /* extern */
s32 func_8023A1D0(s32, s16);                        /* extern */
extern s32 D_8002C1B0;

typedef struct { unsigned char pad[12]; int value; } __repair_field_C;
void *func_8023B104(void *arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_s1_2;
    void *temp_a0;
    void *temp_s2;
    void *var_s0;
    void *var_s0_2;

    temp_s2 = func_801043F8(0x18, 2, 0);
    if (M2C_FIELD(arg0, s32 *, 0) & 2) {
        ((__repair_field_C *)temp_s2)->value = (s32) ((__repair_field_C *)arg0)->value;
        var_s1 = 0;
        if (M2C_FIELD(arg0, s32 *, 8) > 0) {
            var_s0 = M2C_FIELD(arg0, void **, 0x10);
            __repair_rows: {
                var_s1 += 1;
                temp_v0 = func_8021DD0C(M2C_FIELD(var_s0, s32 *, 4), M2C_FIELD(var_s0, s16 *, 0xA));
                ((__repair_field_C *)var_s0)->value = temp_v0;
                D_8002C1B0 = temp_v0;
                M2C_FIELD(var_s0, s32 *, 0) = func_8023A1D0(M2C_FIELD(var_s0, s32 *, 4), M2C_FIELD(var_s0, s16 *, 8));
                var_s0 += 0x10;
            }
if (var_s1 < M2C_FIELD(arg0, s32 *, 8)) goto __repair_rows;
        }
        M2C_FIELD(temp_s2, s32 *, 0) = 0;
        M2C_FIELD(temp_s2, s32 *, 4) = 0;
        M2C_FIELD(temp_s2, s16 *, 0x14) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0) & 4) {
        M2C_FIELD(temp_s2, s32 *, 8) = 0;
        M2C_FIELD(temp_s2, s16 *, 0x14) = 0;
        temp_a0 = M2C_FIELD(arg0, void **, 0x24);
        if (temp_a0 != NULL) {
            var_s1_2 = 0;
            if (M2C_FIELD(arg0, s32 *, 0x20) > 0) {
                var_s0_2 = temp_a0;
                do {
                    var_s1_2 += 1;
                    M2C_FIELD(var_s0_2, s32 *, 0x10) = func_80230EC0(M2C_FIELD(var_s0_2, s32 *, 0), M2C_FIELD(var_s0_2, s32 *, 4));
                    var_s0_2 += 0x14;
                } while (var_s1_2 < M2C_FIELD(arg0, s32 *, 0x20));
            }
        }
    }
    M2C_FIELD(temp_s2, void **, 0x10) = arg0;
    return temp_s2;
}
