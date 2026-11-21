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

M2C_UNK func_802560E0(void *, s16, void *, void *);         /* extern */
M2C_UNK func_80256148(s16, void *, void *);         /* extern */
extern M2C_UNK D_8002DF48;
extern M2C_UNK D_8002DF90;
extern M2C_UNK D_8002DF98;
extern f32 D_80074BC0;

typedef struct { unsigned char pad[8]; int value; } __repair_field_8;
void func_80255FC0(void *arg0) {
int __repair_load_1C;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv1;
    s16 temp_a0;
    s16 temp_v1_2;
    s32 temp_v1;
    s32 temp_v1_3;
    void *temp_a2;
    void *temp_a3;

    temp_a3 = ((__repair_field_8 *)arg0)->value;
    temp_a2 = M2C_FIELD(temp_a3, void **, 0x6C);
    temp_v1 = M2C_FIELD(temp_a2, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_a2, s32 *, 4) = (s32) (s16) (M2C_FIELD(temp_a3, u16 *, 0x7C) % 10);
        temp_v1_2 = M2C_FIELD(temp_a3, u16 *, 0x7C) / 10;
        ((__repair_field_8 *)temp_a2)->value = (s32) temp_v1_2;
        M2C_FIELD(temp_a2, s32 *, 0x14) = (s32) *(((((temp_v1_2 - 1) * 3) + M2C_FIELD(temp_a2, s32 *, 4)) * 4) + &D_8002DF48);
        temp_fv0 = M2C_FIELD(temp_a3, f32 *, 0x28);
        M2C_FIELD(temp_a2, s32 *, 0x18) = 3;
        M2C_FIELD(temp_a2, s32 *, 0x1C) = 3;
        M2C_FIELD(temp_a2, f32 *, 0x10) = temp_fv0;
        M2C_FIELD(temp_a3, f32 *, 0x28) = (f32) (temp_fv0 + M2C_FIELD(&D_8002DF98, f32 *, 4));
        M2C_FIELD(temp_a2, s32 *, 0) = 1;
        M2C_FIELD(temp_a2, s8 *, 0xC) = 0;
        M2C_FIELD(temp_a3, s16 *, 0x7A) = 0;
        return;
    case 1:
        temp_a0 = M2C_FIELD(temp_a3, s16 *, 0x7A);
        if (temp_a0 == temp_v1) {
            if (M2C_FIELD(temp_a2, s32 *, 0x18) < 5) {
                func_802560E0(arg0, temp_a0, temp_a2, temp_a3);
                return;
            }
            M2C_FIELD(temp_a2, s32 *, 0x18) = (s32) temp_a0;
            M2C_FIELD(temp_a2, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_a3, s16 *, 0x7A) = 0;
            goto block_9;
        }
block_9:
        __repair_load_1C = M2C_FIELD(temp_a2, s32 *, 0x1C);
temp_v1_3 = M2C_FIELD(temp_a2, s32 *, 0x18);
        if (__repair_load_1C != temp_v1_3) {
            temp_fv0f = M2C_FIELD(temp_a2, f32 *, 0x10) + *((temp_v1_3 * 4) + &D_8002DF90);
            temp_fv1 = M2C_FIELD(temp_a3, f32 *, 0x28);
            if (temp_fv0f < temp_fv1) {
                func_80256148(temp_a0, temp_a2, temp_a3);
                return;
            }
            temp_fv0_2 = temp_fv1 + D_80074BC0;
            M2C_FIELD(temp_a3, f32 *, 0x28) = temp_fv0_2;
            if (temp_fv0f <= temp_fv0_2) {
                M2C_FIELD(temp_a3, f32 *, 0x28) = temp_fv0f;
                M2C_FIELD(temp_a2, s32 *, 0x1C) = (s32) M2C_FIELD(temp_a2, s32 *, 0x18);
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            M2C_FIELD(temp_a2, s8 *, 0xC) = (s8) (M2C_FIELD(temp_a2, s32 *, 0x1C) == M2C_FIELD(temp_a2, s32 *, 0x14));
            return;
        }
        M2C_FIELD(temp_a2, s8 *, 0xC) = (s8) (M2C_FIELD(temp_a2, s32 *, 0x1C) == M2C_FIELD(temp_a2, s32 *, 0x14));
        return;
    }
}
