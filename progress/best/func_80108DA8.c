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

M2C_UNK func_80108EDC();                            /* extern */
M2C_UNK func_80239A3C(f32);                         /* extern */
M2C_UNK func_80239FCC(f32 *, void *, M2C_UNK *);    /* extern */
extern M2C_UNK D_8002D390;
extern void *D_8005EA2C;
extern s32 D_800753E4;
extern M2C_UNK D_80075568;

typedef struct { f32 __repair_v[3]; } __repair_vec3;
void func_80108DA8(void *arg0, void *arg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_fv1f;
    void *temp_v0;

    if (D_8005EA2C != NULL) {
        temp_v0 = D_8005EA2C + 0x3C;
        if (D_800753E4 != 0) {
            temp_fv1f = M2C_FIELD(arg1, f32 *, 0);
            temp_ft0f = M2C_FIELD(arg1, f32 *, 4);
            temp_ft0 = M2C_FIELD(arg1, f32 *, 8);
            M2C_FIELD(arg0, f32 *, 0) = (f32) ((temp_fv1f * M2C_FIELD(D_8005EA2C, f32 *, 0x3C)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 4)) + (temp_ft0 * M2C_FIELD(temp_v0, f32 *, 8)) + M2C_FIELD(temp_v0, f32 *, 0x24));
            M2C_FIELD(arg0, f32 *, 4) = (f32) ((temp_fv1f * M2C_FIELD(temp_v0, f32 *, 0xC)) + (temp_ft0f * M2C_FIELD(temp_v0, f32 *, 0x10)) + (temp_ft0 * M2C_FIELD(temp_v0, f32 *, 0x14)) + M2C_FIELD(temp_v0, f32 *, 0x28));
            func_80108EDC();
            return;
        }
        sp10 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(&D_80075568, f32 *, 0x24);
        sp14 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(&D_80075568, f32 *, 0x28);
        sp18 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(&D_80075568, f32 *, 0x2C);
        func_80239A3C(M2C_FIELD(&D_80075568, f32 *, 0x1C));
        func_80239FCC(&sp10, arg0, &D_8002D390);
        func_80108EDC();
        return;
    }
    (*(__repair_vec3 *) ((s8 *) (arg0) + 0)) = (*(__repair_vec3 *) ((s8 *) (arg1) + 0));
}
