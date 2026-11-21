/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_8005E9EC;
extern char D_8005EA80[];
extern s32 D_8006196C;
extern void *D_80061A10;

void func_80234F44(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 *__base_D_8006196C;
    union { char * pointer; s32 value; } __repair_phase_storage;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_ft1f;
    f32 temp_ft2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    s32 var_a3;
    s32 var_t0;
    
    void **var_t1;
    void *temp_v0;
    register void *var_a0;
    void *var_a1;

    temp_ft0 = (*(f32 *)((char *)(arg1) + 0xC));
    temp_fv1f = (f32) (*(u16 *)((char *)(arg0) + 6));
    temp_ft2 = temp_ft0 * temp_ft0 * *(f32 *)0x2023A4;
    temp_ft1f = (*(f32 *)((char *)(arg1) + 0));
    temp_fv0f = (f32) (*(s16 *)((char *)(arg0) + 0)) - temp_ft1f;
    temp_ft1 = (*(f32 *)((char *)(arg1) + 4));
    temp_fv1 = (f32) (*(s16 *)((char *)(arg0) + 2)) - temp_ft1;
    temp_ft0f = (*(f32 *)((char *)(arg1) + 8));
    temp_fv0 = (f32) (*(s16 *)((char *)(arg0) + 4)) - temp_ft0f;
    if (((temp_fv0f * temp_fv0f) + (temp_fv1 * temp_fv1) + (temp_fv0 * temp_fv0)) < ((temp_fv1f * temp_fv1f) + temp_ft2)) {
        var_a3 = arg3 - 1;
        __base_D_8006196C = &D_8006196C;
        var_t0 = (*__base_D_8006196C);
        __repair_phase_storage.pointer = D_8005EA80;
        var_t1 = (var_t0 * 0xC) + __repair_phase_storage.pointer;
        __repair_phase_storage.value = (*(s32 *)((char *)(D_80061A10) + 0x14)) + (arg2 * 0x12);
        if (var_a3 != -1) {
            var_a0 = __repair_phase_storage.value + 0xE;
            var_a1 = var_t1 + 4;
loop_3:
            if (!((*(u8 *)((char *)(var_a0) + -0xD)) & 1) && (temp_v0 = (*(s32 *)((char *)(D_80061A10) + 0x1C)) + ((*(u16 *)((char *)(var_a0) + -6)) * 0x10), (fabsf(((*(f32 *)((char *)(temp_v0) + 0)) * temp_ft1f) + ((*(f32 *)((char *)(temp_v0) + 4)) * temp_ft1) + ((*(f32 *)((char *)(temp_v0) + 8)) * temp_ft0f) + (*(f32 *)((char *)(temp_v0) + 0xC))) < temp_ft0)) && (temp_fv1f_2 = (f32) (*(u16 *)((char *)(var_a0) + 2)), temp_fv0f_2 = temp_ft1f - (f32) (*(s16 *)((char *)(var_a0) + -4)), temp_fv1_2 = temp_ft1 - (f32) (*(s16 *)((char *)(var_a0) + -2)), temp_fv0_2 = temp_ft0f - (f32) (*(s16 *)((char *)(var_a0) + 0)), (((temp_fv0f_2 * temp_fv0f_2) + (temp_fv1_2 * temp_fv1_2) + (temp_fv0_2 * temp_fv0_2)) < ((temp_fv1f_2 * temp_fv1f_2) + (temp_ft0 * temp_ft0 * *(f32 *)0x2023A4))))) {
                if (var_t0 < 0x3E8) {
                    (*(s32 *)((char *)(var_a1) + 4)) = __repair_phase_storage.value;
                    *var_t1 = D_80061A10;
                    (*(s32 *)((char *)(var_a1) + 0)) = (s32) D_8005E9EC;
                    var_a1 += 0xC;
                    var_t1 += 0xC;
                    ++var_t0;
                    goto block_8;
                }
            } else {
block_8:
                var_a0 += 0x12;
                var_a3 -= 1;
                __repair_phase_storage.value += 0x12;
                if (var_a3 == -1) {

                } else {
                    goto loop_3;
                }
            }
        }
        (*__base_D_8006196C) = var_t0;
    }
}
