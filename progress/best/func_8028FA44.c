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

M2C_UNK func_8027003C();                            /* extern */
M2C_UNK func_8027006C();                            /* extern */
M2C_UNK func_80270E0C(f32, void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern void *D_8007AFF8;

typedef struct { unsigned char pad[68]; int value; } __repair_field_44;
typedef struct { unsigned char pad_0[158]; short field_9E; unsigned char pad_A0[4]; short field_A4; } __repair_record_D_8007AFF8;
void func_8028FA44(void) {
    func_8027003C();
    ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_A4 = 1;
    ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_9E = 0x19;
    ((__repair_field_44 *)D_8007AFF8)->value = (s32) (((__repair_field_44 *)D_8007AFF8)->value | 0x08000008 | 0x20004 | 0x10080);
    func_80270E0C(*(f32 *)0x21560C, D_8007AFF8, 0x20004, 0x10080, 0x08000008);
    func_8027006C();
}
