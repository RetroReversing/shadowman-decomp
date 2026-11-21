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

f32 func_8022EBE8(f32);                             /* extern */
f32 func_8022EC3C(f32);                             /* extern */
void *func_80296BC0(f32 *, f32 *, M2C_UNK *);       /* extern */
extern M2C_UNK D_80036D78;

typedef struct { unsigned char pad_0[76]; float field_4C; float field_50; float field_54; float field_58; } __repair_record_temp_v0;
s32 func_8029C490(void *arg0) {
    f32 sp10[3];
    f32 sp20[3];
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fv0;
    u32 var_s1;
    void *temp_v0;

    temp_fs0 = *(f32 *)0x215C18;
    temp_fs0f = *(f32 *)0x215C1C;
    var_s1 = 0;
    do {
        sp10[0] = func_8022EBE8(temp_fs0);
        sp10[1] = func_8022EBE8(*(f32 *)0x215C20) + temp_fs0;
        sp10[2] = func_8022EBE8(temp_fs0);
        sp20[0] = M2C_FIELD(arg0, f32 *, 0);
        sp20[1] = M2C_FIELD(arg0, f32 *, 4);
        sp20[2] = M2C_FIELD(arg0, f32 *, 8);
        sp20[0] += func_8022EBE8(temp_fs0f);
        sp20[1] += func_8022EBE8(temp_fs0f);
        sp20[2] += func_8022EBE8(temp_fs0f);
        temp_v0 = func_80296BC0(sp20, sp10, &D_80036D78);
        if (temp_v0 != NULL) {
            ((__repair_record_temp_v0*)temp_v0)->field_4C = (f32) (func_8022EC3C(temp_fs0) + *(f32 *)0x215C24);
            temp_fv0 = func_8022EC3C(*(f32 *)0x215C28) + *(f32 *)0x215C2C;
            ((__repair_record_temp_v0*)temp_v0)->field_58 = (f32) *(f32 *)0x215C30;
            ((__repair_record_temp_v0*)temp_v0)->field_54 = temp_fv0;
            ((__repair_record_temp_v0*)temp_v0)->field_50 = temp_fv0;
        }
        var_s1 += 1;
    } while (var_s1 < 0x20U);
    return 0;
}
