/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_8007BF58;
extern f32 D_8007C85C;
extern s32 D_8007C878;

void *func_802D4E84(void *arg0) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_fv0;
    f32 temp_fv1f;

    if ((*(u8 *)((char *)(&D_8007BF58) + 0x388)) != 0) {
        (*(f32 *)((char *)(&D_8007BF58) + 0x2FC)) = (f32) (*(f32 *)((char *)(&D_8007BF58) + 0x314));
        (*(f32 *)((char *)(&D_8007BF58) + 0x300)) = (f32) (*(f32 *)((char *)(&D_8007BF58) + 0x318));
        (*(f32 *)((char *)(&D_8007BF58) + 0x304)) = (f32) (*(f32 *)((char *)(&D_8007BF58) + 0x31C));
    }
    temp_fv1f = (*(f32 *)((char *)(arg0) + 4));
    (*(f32 *)((char *)(&D_8007BF58) + 0x314)) = temp_fv1f;
    temp_ft0 = (*(f32 *)((char *)(arg0) + 8));
    (*(f32 *)((char *)(&D_8007BF58) + 0x318)) = temp_ft0;
    temp_ft0f = (*(f32 *)((char *)(arg0) + 0xC));
    temp_fv0 = 2.0f * (*(f32 *)((char *)(arg0) + 0x10));
    (*(f32 *)((char *)(&D_8007BF58) + 0x31C)) = temp_ft0f;
    (*(f32 *)((char *)(&D_8007BF58) + 0x338)) = temp_fv0;
    (*(f32 *)((char *)(&D_8007C878) + 0)) = (f32) (*(f32 *)((char *)(arg0) + 4));
    (*(f32 *)((char *)(&D_8007C878) + 4)) = (f32) (*(f32 *)((char *)(arg0) + 8));
    (*(f32 *)((char *)(&D_8007C878) + 8)) = (f32) (*(f32 *)((char *)(arg0) + 0xC));
    D_8007C85C = (*(f32 *)((char *)(arg0) + 0x10));
    (*(f32 *)((char *)(&D_8007BF58) + 0x32C)) = (f32) ((temp_fv1f - (*(f32 *)((char *)(&D_8007BF58) + 0x2FC))) / temp_fv0);
    (*(f32 *)((char *)(&D_8007BF58) + 0x330)) = (f32) ((temp_ft0 - (*(f32 *)((char *)(&D_8007BF58) + 0x300))) / temp_fv0);
    (*(f32 *)((char *)(&D_8007BF58) + 0x334)) = (f32) ((temp_ft0f - (*(f32 *)((char *)(&D_8007BF58) + 0x304))) / temp_fv0);
    return arg0 + 0x14;
}
