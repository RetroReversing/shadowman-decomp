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

f32 func_802403D4(s32 *, s32 *, M2C_UNK, s32);      /* extern */
M2C_UNK func_8024F28C();                            /* extern */
M2C_UNK func_8024F2A4();                            /* extern */
M2C_UNK func_80266D74(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK D_24F0E4;
extern s32 D_8006A588;
extern f32 D_80074BC0;

typedef struct { unsigned char pad[36]; int value; } __repair_field_24;
void func_8024F158(void *arg0) {
    u16 __repair_store_0;
    f32 __repair_store_1;
    s32 sp10[3];
    s32 sp20;
    f32 sp24;
    s32 sp28;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0f;
    s32 temp_s2;
    s32 temp_a3;
    s32 var_s1;
    s32 var_v0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 8);
    temp_fv0f = M2C_FIELD(temp_s0, f32 *, 0x10);
    var_s1 = 0;
    if (temp_fv0f < 0.0f) {
        if (M2C_FIELD(arg0, s16 *, 0x14) == 0x17B) {
            if (*(f32 *)0x2030E8 <= temp_fv0f) {
                var_s1 = 1;
            }
        }
        temp_s2 = (s16) M2C_FIELD(temp_s0, u16 *, 0x7E);
        __repair_store_0 = (u16) (M2C_FIELD(temp_s0, u16 *, 0x7E) & 0xFFFE);
        __repair_store_1 = (f32) (M2C_FIELD(temp_s0, f32 *, 0x10) - D_80074BC0);
        M2C_FIELD(temp_s0, u16 *, 0x7E) = __repair_store_0;
        M2C_FIELD(temp_s0, f32 *, 0x10) = __repair_store_1;
        sp10[0] = ((__repair_field_24 *)temp_s0)->value;
        sp10[1] = M2C_FIELD(temp_s0, f32 *, 0x28);
        sp10[2] = M2C_FIELD(temp_s0, s32 *, 0x2C);
        temp_fs0 = *(f32 *)0x2030EC;
        sp10[1] += M2C_FIELD(temp_s0, f32 *, 0x10);
        sp10[2] = ((__repair_field_24 *)temp_s0)->value;
        sp20 = sp10[2];
        sp24 = M2C_FIELD(temp_s0, f32 *, 0x28);
        sp28 = M2C_FIELD(temp_s0, s32 *, 0x2C);
        sp24 += temp_fs0;
        temp_fv0 = func_802403D4(&sp20, sp10, 0x3F800000, sp10[2]);
        if (temp_fv0 != 0.0f) {
            var_v0 = var_s1 & 0xFF;
            if (D_8006A588 != 0) {
                if (!(temp_fs0 < temp_fv0)) {
                    M2C_FIELD(temp_s0, f32 *, 0x10) = 0.0f;
                    goto block_17;
                }
                func_8024F28C();
                return;
            }
            goto block_17;
        }
        if (D_8006A588 != 0) {
            func_8024F2A4();
            return;
        }
        M2C_FIELD(temp_s0, f32 *, 0x28) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x28) + M2C_FIELD(temp_s0, f32 *, 0x10));
        var_v0 = var_s1 & 0xFF;
block_17:
        M2C_FIELD(temp_s0, u16 *, 0x7E) = (u16) temp_s2;
        if (var_v0 != 0) {
            func_80266D74(2, &D_24F0E4);
        }
    }
}
