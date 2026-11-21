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

extern int D_8007BDB8;
extern int D_8007BDBC;
extern int D_8007BDC0;
extern char D_80045930[];
extern char D_80075568[];

void *func_802D3F68(const void *arg0) {
    s32 __repair_store_0;
    s32 __repair_store_1;
    s32 __repair_store_2;
    void *temp_v1;

    temp_v1 = M2C_FIELD(((M2C_FIELD(arg0, const s32 *, 4) * 0x14) + D_80045930), void **, 8);
    __repair_store_0 = (s32) M2C_FIELD(arg0, const s32 *, 8);
    __repair_store_1 = (s32) M2C_FIELD(arg0, const f32 *, 0xC);
    __repair_store_2 = (s32) M2C_FIELD(arg0, const f32 *, 0x10);
    M2C_FIELD(temp_v1, s32 *, 0x24) = __repair_store_0;
    M2C_FIELD(temp_v1, s32 *, 0x28) = __repair_store_1;
    M2C_FIELD(temp_v1, s32 *, 0x2C) = __repair_store_2;
    if (temp_v1 == D_80075568) {
        D_8007BDB8 = (s32) M2C_FIELD(temp_v1, const s32 *, 0x24);
        D_8007BDBC = (s32) M2C_FIELD(temp_v1, const s32 *, 0x28);
        D_8007BDC0 = (s32) M2C_FIELD(temp_v1, const s32 *, 0x2C);
    }
    M2C_FIELD(temp_v1, f32 *, 0x18) = (f32) M2C_FIELD(arg0, const f32 *, 0x14);
    M2C_FIELD(temp_v1, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, const f32 *, 0x18);
    M2C_FIELD(temp_v1, f32 *, 0xC) = 0;
    M2C_FIELD(temp_v1, f32 *, 0x10) = 0;
    M2C_FIELD(temp_v1, f32 *, 0x14) = 0;
    M2C_FIELD(temp_v1, f32 *, 0x20) = (f32) M2C_FIELD(arg0, const f32 *, 0x1C);
    return arg0 + 0x20;
}
