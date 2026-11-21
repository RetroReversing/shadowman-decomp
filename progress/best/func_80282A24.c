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
M2C_UNK func_8027006C(void *);                      /* extern */
extern M2C_UNK D_80045930;
extern void *D_8007AFF8;

typedef struct { unsigned char pad_0[24]; int field_18; int field_1C; int field_20; float field_24; float field_28; float field_2C; } __repair_record_arg0;
typedef struct { unsigned char pad[68]; int value; } __repair_field_44;
typedef struct { unsigned char pad_0[156]; short field_9C; unsigned char pad_9E[110]; int field_10C; } __repair_record_D_8007AFF8;
void func_80282A24(void *arg0) {
    do { func_8027003C(); } while (0);
    M2C_FIELD(&D_80045930, void **, 0x30) = arg0;
    M2C_FIELD(&D_80045930, s32 *, 0x34) = (s32) ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_10C;
    ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_9C = 0;
    ((__repair_field_44 *)D_8007AFF8)->value = (s32) (((__repair_field_44 *)D_8007AFF8)->value | 0x80);
    ((__repair_record_arg0*)arg0)->field_24 = (f32) *(f32 *)0x214C24;
    ((__repair_record_arg0*)arg0)->field_28 = (f32) *(f32 *)0x214C28;
    ((__repair_record_arg0*)arg0)->field_2C = (f32) *(f32 *)0x214C2C;
    ((__repair_record_arg0*)arg0)->field_18 = 0;
    ((__repair_record_arg0*)arg0)->field_1C = 0;
    ((__repair_record_arg0*)arg0)->field_20 = 0;
    func_8027006C(D_8007AFF8);
}
