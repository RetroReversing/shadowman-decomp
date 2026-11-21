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

M2C_UNK func_8021E990(f32, f32, u8, u8, f32, f32, f32, f32, s32, s32, s32, s32, s32); /* extern */
s32 func_80296698(M2C_UNK);                         /* extern */
s32 func_80296738(M2C_UNK);                         /* extern */
extern s32 D_8002C1B0;
extern M2C_UNK D_80061A04;
extern M2C_UNK D_8007DB78;

void func_802987DC(void *arg0) {
    f32 __repair_store_0;
    f32 __repair_store_1;
    f32 __repair_store_2;
    f32 __repair_store_3;
    f32 __repair_store_4;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    s32 temp_v0;
    s32 temp_v1;
    M2C_UNK *__base_D_80061A04;

    __base_D_80061A04 = &D_80061A04;

    __repair_store_0 = (f32) (M2C_FIELD(arg0, const f32 *, 0x4C) * *(f32 *)0x2159D0);
    __repair_store_1 = (f32) (M2C_FIELD(arg0, const f32 *, 0x2C) + (M2C_FIELD(&D_8007DB78, f32 *, 0x14) * *(f32 *)0x2159CC));
    __repair_store_2 = (f32) (M2C_FIELD(arg0, const f32 *, 0) + (M2C_FIELD(arg0, const f32 *, 0x18) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    __repair_store_3 = (f32) (M2C_FIELD(arg0, const f32 *, 4) + (M2C_FIELD(arg0, const f32 *, 0x1C) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    __repair_store_4 = (f32) (M2C_FIELD(arg0, const f32 *, 8) + (M2C_FIELD(arg0, const f32 *, 0x20) * M2C_FIELD(&D_8007DB78, f32 *, 0x14)));
    M2C_FIELD(arg0, f32 *, 0x4C) = __repair_store_0;
    M2C_FIELD(arg0, f32 *, 0x2C) = __repair_store_1;
    M2C_FIELD(arg0, f32 *, 0) = __repair_store_2;
    M2C_FIELD(arg0, f32 *, 4) = __repair_store_3;
    M2C_FIELD(arg0, f32 *, 8) = __repair_store_4;
    temp_fv0 = M2C_FIELD(arg0, const f32 *, 0x54) - M2C_FIELD(&D_8007DB78, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
    temp_fv0f = M2C_FIELD(arg0, const f32 *, 0x58) + (M2C_FIELD(arg0, const f32 *, 0x5C) * M2C_FIELD(&D_8007DB78, f32 *, 0x14));
    temp_v1 = func_80296698(2) - 1;
    M2C_FIELD(arg0, f32 *, 0x58) = temp_fv0f;
    if ((temp_v1 != 0) && ((f32) temp_v1 < temp_fv0f)) {
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) ((s32) temp_fv0f % temp_v1);
    }
    temp_v0 = func_80296738(2);
    D_8002C1B0 = temp_v0;
    if (temp_v0 != 0) {
        temp_fv0_2 = M2C_FIELD(arg0, const f32 *, 0x4C) * *(f32 *)0x2159D8;
        func_8021E990(M2C_FIELD(arg0, const f32 *, 0), M2C_FIELD(arg0, const f32 *, 4), M2C_FIELD(__base_D_80061A04, const u8 *, 1), M2C_FIELD(__base_D_80061A04, const u8 *, 2), M2C_FIELD(arg0, const f32 *, 8), temp_fv0_2, temp_fv0_2, *(f32 *)0x2159D4, (s32) M2C_FIELD(__base_D_80061A04, const u8 *, 0), (s32) M2C_FIELD(__base_D_80061A04, const u8 *, 1), (s32) M2C_FIELD(__base_D_80061A04, const u8 *, 2), (s32) M2C_FIELD(__base_D_80061A04, const u8 *, 3), temp_v0 + ((s32) M2C_FIELD(arg0, const f32 *, 0x58) * 0x10));
    }
}
