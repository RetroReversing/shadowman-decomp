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

M2C_UNK func_8023567C(void *, M2C_UNK);             /* extern */
M2C_UNK func_80273E14(f32 *, f32 *, void **, f32 *); /* extern */
extern void *D_8006A4FC;
extern void *D_8007AF98;
extern f32 D_8007AFEC;
extern f32 D_8007AFF0;
extern f32 D_8007AFF4;
extern void *D_8007AFF8;

typedef struct { unsigned char pad_0[12]; float field_C; float field_10; float field_14; unsigned char pad_18[12]; float field_24; float field_28; float field_2C; } __repair_record_D_8006A4FC;
void func_80273C5C(void) {
    f32 temp_fv1f;
    u16 temp_a1;
    void *temp_a0;
    void *temp_a0_2;
    
    f32 *__base_D_8007AFEC;

    __base_D_8007AFEC = &D_8007AFEC;

    temp_a0 = M2C_FIELD(D_8007AFF8, void **, 0x10C);
    temp_a1 = M2C_FIELD(temp_a0, u16 *, 0x1C);
    if (!(temp_a1 & 0x80)) {
        temp_a0 = M2C_FIELD(D_8007AFF8, void **, 0x114);
        temp_a0_2 = M2C_FIELD(temp_a0, void **, 0x2C);
        D_8007AF98 = temp_a0_2;
        if (M2C_FIELD(temp_a0, s32 *, 0x28) >= 2) {
            D_8007AF98 = temp_a0_2 + 0x58;
            M2C_FIELD(temp_a0_2, s32 *, 0x58) = 1;
            if (M2C_FIELD(D_8007AFF8, u8 *, 0x3C) == 3) {
                M2C_FIELD(temp_a0_2, s32 *, 0x58) = 0;
            }
        }
        M2C_FIELD(temp_a0, f32 *, 4) = (f32) ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_24;
        M2C_FIELD(temp_a0, f32 *, 8) = (f32) ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_28;
        M2C_FIELD(temp_a0, f32 *, 0xC) = (f32) ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_2C;
        M2C_FIELD(temp_a0, f32 *, 0x10) = (f32) ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_C;
        M2C_FIELD(temp_a0, f32 *, 0x14) = (f32) ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_10;
        M2C_FIELD(temp_a0, f32 *, 0x18) = (f32) ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_14;
        func_8023567C(temp_a0, 0);
        (*(&D_8007AFEC)) = M2C_FIELD(temp_a0, f32 *, 0x54);
        D_8007AFF0 = M2C_FIELD(temp_a0, f32 *, 0x58);
        D_8007AFF4 = M2C_FIELD(temp_a0, f32 *, 0x5C);
        M2C_FIELD(D_8007AFF8, u8 *, 0x39) = (u8) M2C_FIELD(temp_a0, u8 *, 0x45);
        ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_C = (f32) (*__base_D_8007AFEC);
        ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_10 = (f32) D_8007AFF0;
        ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_14 = (f32) D_8007AFF4;
        M2C_FIELD(D_8007AFF8, s8 *, 0x3A) = (s8) (s32) M2C_FIELD(temp_a0, f32 *, 0x40);
        ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_24 = (f32) M2C_FIELD(temp_a0, f32 *, 0x48);
        ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_28 = (f32) M2C_FIELD(temp_a0, f32 *, 0x4C);
        func_80273E14(&D_8007AFF4, &D_8007AFF0, &D_8007AFF8, __base_D_8007AFEC);
        return;
    }
    temp_fv1f = M2C_FIELD(((M2C_FIELD(temp_a0, s16 *, 4) * 0x38) + M2C_FIELD(temp_a0, s32 *, 0x30)), f32 *, 0x24);
    if (temp_a1 & 0x20) {
        ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_C = (f32) (((__repair_record_D_8006A4FC*)D_8006A4FC)->field_C * temp_fv1f);
        ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_10 = M2C_BITWISE(f64, (((__repair_record_D_8006A4FC*)D_8006A4FC)->field_14 * temp_fv1f));
    }
    ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_24 = M2C_BITWISE(f64, (((__repair_record_D_8006A4FC*)D_8006A4FC)->field_28 + ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_10));
    ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_2C = (f32) (((__repair_record_D_8006A4FC*)D_8006A4FC)->field_2C + ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_14);
}
