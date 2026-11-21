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

M2C_UNK func_8029224C();                            /* extern */
extern s32 D_80036944;
extern void *D_8006A4FC;
extern void *D_8007AFF8;

typedef struct { unsigned char pad_0[36]; float field_24; float field_28; float field_2C; } __repair_record_D_8006A4FC;
void func_802703B0(s16 arg0) {
    void *temp_v0;

    func_8029224C();
    temp_v0 = ((arg0 & 0xFFFF) * 0x34) + D_80036944;
    ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_24 = (f32) M2C_FIELD(temp_v0, f32 *, 4);
    ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_28 = (f32) (M2C_FIELD(temp_v0, f32 *, 8) + *(f32 *)0x213F48);
    ((__repair_record_D_8006A4FC*)D_8006A4FC)->field_2C = (f32) M2C_FIELD(temp_v0, f32 *, 0xC);
    M2C_FIELD(D_8007AFF8, s16 *, 0x16) = arg0;
}
