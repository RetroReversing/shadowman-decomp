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

s32 func_802776D8();
extern s32 D_80036944;
extern void *D_8006A4FC;
extern void *D_8007AFF8;

typedef struct { unsigned char pad[72]; int value; } __repair_field_48;
void func_802759FC(void *arg0, s32 arg1, s16 arg2) {
    void **__base_D_8007AFF8;
    s32 temp_t0;
    u8 temp_v1_2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v1;

    temp_s1 = D_8006A4FC;
    temp_v1 = M2C_FIELD(arg0, void **, 0x6C);
    D_8006A4FC = arg0;
    __base_D_8007AFF8 = &D_8007AFF8;
    (*__base_D_8007AFF8) = temp_v1;
    temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 0x3B);
    if ((temp_v1_2 != 0) && (((s32) temp_v1_2 < 0) || ((s32) temp_v1_2 >= 0xF) || ((s32) temp_v1_2 < 0xD))) {
        temp_t0 = ((__repair_field_48 *)(*__base_D_8007AFF8))->value;
        if (!(temp_t0 & 0x800) && (M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x20) == -1)) {
            if (arg2 != 0) {
                M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x69) = 0x64;
                ((__repair_field_48 *)(*__base_D_8007AFF8))->value = (s32) (temp_t0 | 0x80000);
                temp_v0 = (arg2 * 0x34) + D_80036944;
                M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x16) = arg2;
                M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x1A) = arg2;
                M2C_FIELD((*__base_D_8007AFF8), s16 *, 0x20) = arg2;
                M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x70) = (f32) M2C_FIELD(temp_v0, f32 *, 4);
                M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x74) = (f32) M2C_FIELD(temp_v0, f32 *, 8);
                M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x78) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC);
                M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x70) = (f32) M2C_FIELD(temp_v0, f32 *, 4);
                M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x74) = (f32) M2C_FIELD(temp_v0, f32 *, 8);
                ((__repair_field_48 *)(*__base_D_8007AFF8))->value |= 0x200;
                M2C_FIELD((*__base_D_8007AFF8), s32 *, 0x44) |= 0x40;
                M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x3C) = 3;
                M2C_FIELD((*__base_D_8007AFF8), f32 *, 0x78) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC);
                func_802776D8(5);
                M2C_FIELD((*__base_D_8007AFF8), s8 *, 0x54) = 1;
            }
        }
        D_8006A4FC = temp_s1;
    }
}
