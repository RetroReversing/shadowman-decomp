/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_8002D174;
extern s32 D_8002D178;

void func_80229114(s32 arg0) {
    s32 *__base_D_8002D174;
    f32 temp_fv0;
    f32 temp_fv0f;

    if (arg0 >= 0) {
        temp_fv0 = (f32) arg0 * (*(f32 *)((char *)(&D_8002D178) + 4));
        temp_fv0f = *(f32 *)0x201D78;
        if (!(temp_fv0f <= temp_fv0)) {
            (*__base_D_8002D174) = (s32) temp_fv0;
            __base_D_8002D174 = &D_8002D174;
            return;
        }
        (*__base_D_8002D174) = (s32) (temp_fv0 - temp_fv0f) | 0x80000000;
    }
}
