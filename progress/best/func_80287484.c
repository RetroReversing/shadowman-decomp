/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_80034B90;
extern float D_80034B84;
s32 func_8023E724();
extern char D_80034B78[];
extern void *D_8007AFF8;
extern void *D_8007B1E0;

typedef struct { f32 __repair_v[3]; } __repair_vec3;
void func_80287484(void) {
    f32 temp_ft0;
    register f32 temp_ft0f;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    void *temp_a0;
    f32 temp_fv1f;
    void *temp_s0;
    void *temp_v1;

    (*(__repair_vec3 *) ((s8 *) (D_8007B1E0) + 0x164)) = (*(__repair_vec3 *) ((s8 *) (D_8007B1E0) + 0x14C));
    (*(__repair_vec3 *) ((s8 *) (D_8007B1E0) + 0x158)) = (*(__repair_vec3 *) ((s8 *) (D_8007B1E0) + 0x140));
    func_8023E724((*(void **)((char *)(D_8007AFF8) + 0x10C)), D_80034B90, D_80034B78, D_8007B1E0 + 0x140);
    temp_v1 = (D_80034B90 << 6) + (*(s32 *)((char *)((*(void **)((char *)(D_8007AFF8) + 0x10C))) + 0x40));
    temp_s0 = D_80034B78 + 0xC;
    temp_ft0f = (*(f32 *)((char *)(temp_s0) + 4));
    temp_ft0 = (*(f32 *)((char *)(temp_s0) + 8));
    (*(f32 *)((char *)(D_8007B1E0) + 0x14C)) = (f32) ((D_80034B84 * (*(f32 *)((char *)(temp_v1) + 0))) + (temp_ft0f * (*(f32 *)((char *)(temp_v1) + 4))) + (temp_ft0 * (*(f32 *)((char *)(temp_v1) + 8))));
    temp_a0 = D_8007B1E0 + 0x14C;
    (*(f32 *)((char *)(temp_a0) + 4)) = (f32) ((D_80034B84 * (*(f32 *)((char *)(temp_v1) + 0xC))) + (temp_ft0f * (*(f32 *)((char *)(temp_v1) + 0x10))) + (temp_ft0 * (*(f32 *)((char *)(temp_v1) + 0x14))));
    temp_fv0f = *(f32 *)0x214FF8;
    (*(f32 *)((char *)(temp_a0) + 8)) = (f32) ((D_80034B84 * (*(f32 *)((char *)(temp_v1) + 0x18))) + (temp_ft0f * (*(f32 *)((char *)(temp_v1) + 0x1C))) + (temp_ft0 * (*(f32 *)((char *)(temp_v1) + 0x20))));
    temp_fv0 = (*(f32 *)((char *)(D_8007B1E0) + 0x14C)) * temp_fv0f;
    temp_fv1 = (*(f32 *)((char *)(D_8007B1E0) + 0x150)) * temp_fv0f;
    temp_fv1f = (*(f32 *)((char *)(D_8007B1E0) + 0x154)) * temp_fv0f;
    (*(f32 *)((char *)(D_8007B1E0) + 0x14C)) = temp_fv0;
    (*(f32 *)((char *)(D_8007B1E0) + 0x150)) = temp_fv1;
    (*(f32 *)((char *)(D_8007B1E0) + 0x154)) = temp_fv1f;
    (*(f32 *)((char *)(D_8007B1E0) + 0x14C)) = (f32) (temp_fv0 + (*(f32 *)((char *)(D_8007B1E0) + 0x140)));
    (*(f32 *)((char *)(D_8007B1E0) + 0x154)) = (f32) (temp_fv1f + (*(f32 *)((char *)(D_8007B1E0) + 0x148)));
    (*(f32 *)((char *)(D_8007B1E0) + 0x150)) = (f32) (temp_fv1 + (*(f32 *)((char *)(D_8007B1E0) + 0x144)));
}
