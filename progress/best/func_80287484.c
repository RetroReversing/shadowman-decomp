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

extern int D_80034B90;
extern float D_80034B84;
s32 func_8023E724();
extern char D_80034B78[];
extern void *D_8007AFF8;
extern void *D_8007B1E0;

typedef struct { f32 __repair_v[3]; } __repair_vec3;
void func_80287484(void) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    void *temp_a0;
    void *temp_s0;
    void *temp_v1;

    (*(__repair_vec3 *) ((s8 *) (D_8007B1E0) + 0x164)) = (*(__repair_vec3 *) ((s8 *) (D_8007B1E0) + 0x14C));
    (*(__repair_vec3 *) ((s8 *) (D_8007B1E0) + 0x158)) = (*(__repair_vec3 *) ((s8 *) (D_8007B1E0) + 0x140));
    func_8023E724(M2C_FIELD(D_8007AFF8, void **, 0x10C), D_80034B90, D_80034B78, D_8007B1E0 + 0x140);
    temp_v1 = (D_80034B90 << 6) + M2C_FIELD(M2C_FIELD(D_8007AFF8, void **, 0x10C), s32 *, 0x40);
    temp_s0 = D_80034B78 + 0xC;
    temp_ft0f = M2C_FIELD(temp_s0, f32 *, 4);
    temp_ft0 = M2C_FIELD(temp_s0, f32 *, 8);
    M2C_FIELD(D_8007B1E0, f32 *, 0x14C) = (f32) ((D_80034B84 * M2C_FIELD(temp_v1, f32 *, 0)) + (temp_ft0f * M2C_FIELD(temp_v1, f32 *, 4)) + (temp_ft0 * M2C_FIELD(temp_v1, f32 *, 8)));
    temp_a0 = D_8007B1E0 + 0x14C;
    M2C_FIELD(temp_a0, f32 *, 4) = (f32) ((D_80034B84 * M2C_FIELD(temp_v1, f32 *, 0xC)) + (temp_ft0f * M2C_FIELD(temp_v1, f32 *, 0x10)) + (temp_ft0 * M2C_FIELD(temp_v1, f32 *, 0x14)));
    temp_fv0f = *(f32 *)0x214FF8;
    M2C_FIELD(temp_a0, f32 *, 8) = (f32) ((D_80034B84 * M2C_FIELD(temp_v1, f32 *, 0x18)) + (temp_ft0f * M2C_FIELD(temp_v1, f32 *, 0x1C)) + (temp_ft0 * M2C_FIELD(temp_v1, f32 *, 0x20)));
    temp_fv0 = M2C_FIELD(D_8007B1E0, f32 *, 0x14C) * temp_fv0f;
    temp_fv1 = M2C_FIELD(D_8007B1E0, f32 *, 0x150) * temp_fv0f;
    temp_fv1f = M2C_FIELD(D_8007B1E0, f32 *, 0x154) * temp_fv0f;
    M2C_FIELD(D_8007B1E0, f32 *, 0x14C) = temp_fv0;
    M2C_FIELD(D_8007B1E0, f32 *, 0x150) = temp_fv1;
    M2C_FIELD(D_8007B1E0, f32 *, 0x154) = temp_fv1f;
    M2C_FIELD(D_8007B1E0, f32 *, 0x14C) = (f32) (temp_fv0 + M2C_FIELD(D_8007B1E0, f32 *, 0x140));
    M2C_FIELD(D_8007B1E0, f32 *, 0x150) = (f32) (temp_fv1 + M2C_FIELD(D_8007B1E0, f32 *, 0x144));
    M2C_FIELD(D_8007B1E0, f32 *, 0x154) = (f32) (temp_fv1f + M2C_FIELD(D_8007B1E0, f32 *, 0x148));
}
