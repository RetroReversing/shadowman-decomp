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

extern int D_8006A588;
extern float D_8006A594;
s32 func_802403D4(s32, s32, f32, s32);
s32 func_80273868();
f32 func_80273BB0();
extern char D_212078[];
extern void *D_8006A4FC;
extern char D_8006A510[];
extern void *D_8007AFF8;

typedef struct { unsigned char pad_0[216]; float field_D8; int field_DC; short field_E0; } __repair_record_D_8007AFF8;
f32 func_80273A60(s32 arg0, f32 arg1, s32 arg2) {
    s32 sp10;
    f32 sp14;
    s32 sp18;
    s32 sp20;
    f32 sp24;
    s32 sp28;
    s32 temp_a3;
    f32 temp_fs0;

    temp_a3 = M2C_FIELD(D_8006A4FC, const s32 *, 0x24);
    sp10 = temp_a3;
    sp14 = M2C_FIELD(D_8006A4FC, const f32 *, 0x28);
    sp18 = M2C_FIELD(D_8006A4FC, const s32 *, 0x2C);
    sp20 = sp10;
    sp14 += M2C_FIELD(((M2C_FIELD(D_8007AFF8, const u8 *, 0x40) * 0x6C) + D_212078), f32 *, 0x38);
    sp28 = sp18;
    sp24 = arg1 - *(f32 *)0x214138;
    func_802403D4(&sp10, &sp20, 1.0f, temp_a3);
    if (D_8006A588 != 0) {
        ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_DC = (s32) (M2C_FIELD(M2C_FIELD(D_8006A510, void **, 0x8C), s32 *, 0x1C) + (M2C_FIELD(M2C_FIELD(D_8006A510, void **, 0x90), u16 *, 8) * 0x10));
        ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_D8 = (f32) D_8006A594;
        ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_E0 = (s16) M2C_FIELD(M2C_FIELD(D_8006A510, void **, 0x90), u8 *, 2);
        M2C_FIELD(D_8006A4FC, f32 *, 0x28) = (f32) (D_8006A594 - M2C_FIELD(((M2C_FIELD(D_8007AFF8, const u8 *, 0x40) * 0x6C) + D_212078), f32 *, 0x30));
        func_80273868(D_8007AFF8, D_8006A510);
        return func_80273BB0();
    }
    temp_fs0 = *(f32 *)0x21413C;
    ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_DC = 0;
    ((__repair_record_D_8007AFF8*)D_8007AFF8)->field_D8 = temp_fs0;
    return temp_fs0;
}
