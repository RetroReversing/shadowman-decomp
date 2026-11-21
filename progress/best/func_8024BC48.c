/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80107D8C(s32, s32, s32, s32); /* extern */
s32 func_80109318(s32, s32 *, s32); /* extern */
s32 func_80109918(void *, s32, s32);    /* extern */
s32 func_80266BA4(s32, s32, s32 *);     /* extern */
s32 func_8026E26C(s32);                     /* extern */
s32 func_8026E2F4(s32);                         /* extern */
extern s32 D_24BC14;
extern s32 D_8002DC5C;
extern void *D_80030C58;
extern s32 D_8007558C;

void func_8024BC48(void *arg0) {
    s32 *__base_D_8002DC5C;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 var_fv0;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = (*(void **)((char *)(arg0) + 8));
    if (((*(s16 *)((char *)(temp_s0) + 0x7A)) == 1) || (func_8026E2F4(0xA4) != 0)) {
        func_8026E26C(0xA4);
        __base_D_8002DC5C = &D_8002DC5C;
        if ((*__base_D_8002DC5C) == 0) {
            func_80107D8C(0x1E, 0x1D, 1, 0x7F);
            func_80109318(0xF5, &D_8007558C, 0);
            func_80109918(temp_s0 + 0x24, 0x7F, 0x17C);
            func_80266BA4(*(*(s32 **)((char *)(D_80030C58) + 0x10)), 2, &D_24BC14);
            (*__base_D_8002DC5C) = 1;
        }
        var_fv0 = (*(f32 *)((char *)(temp_s0) + 0x1C));
        temp_fv0f = *(f32 *)0x202E88;
        temp_v0 = (*(void **)((char *)((*(void **)((char *)(temp_s0) + 0x68))) + 0x10));
        if (var_fv0 < temp_fv0f) {
            __repair_rows: {
                var_fv0 += *(f32 *)0x202E8C;
                (*(f32 *)((char *)(temp_s0) + 0x1C)) = var_fv0;
            }
if (var_fv0 < temp_fv0f) goto __repair_rows;
            var_fv0 = (*(f32 *)((char *)(temp_s0) + 0x1C));
        }
        temp_fv0f_2 = *(f32 *)0x202E90;
        if (temp_fv0f_2 < var_fv0) {
            do {
                var_fv0 -= temp_fv0f_2;
                (*(f32 *)((char *)(temp_s0) + 0x1C)) = var_fv0;
            } while (temp_fv0f_2 < var_fv0);
        }
        if (!((*(f32 *)((char *)(temp_s0) + 0x1C)) > 0.0f)) {
            (*(f32 *)((char *)(temp_v0) + 0x18)) = 0.0f;
            return;
        }
        (*(f32 *)((char *)(temp_v0) + 0x18)) = (f32) *(f32 *)0x202E94;
    }
}
