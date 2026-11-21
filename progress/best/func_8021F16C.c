/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_8002D200;
extern u8 D_80056A00;
extern s32 D_80058E08;

void func_8021F16C(s32 arg0) {
    s32 var_a0;
    u8 *var_a1;
    u8 *var_v1;
    s32 *__base_D_8002D200;

    __base_D_8002D200 = &D_8002D200;

    var_a1 = &D_80056A00;
    var_a0 = 0;
    if (D_80058E08 > 0) {
        var_v1 = &D_80056A00 + 6;
        do {
            var_a0 += 1;
            if (*var_a1 == 0) {
                *var_v1 = (u16) (*var_v1 - (s32) ((f32) ((s32) (arg0 << 0x10) >> 0xF) * (*(f32 *)((char *)(__base_D_8002D200) + 4))));
            }
            var_a1 += 0x18;
            var_v1 += 0x18;
        } while (var_a0 < D_80058E08);
    }
}
