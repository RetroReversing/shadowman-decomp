/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s16 D_80030630;
extern s8 D_80074C34;
extern s8 D_80074C35;
extern s8 D_80074C36;

void func_8025F15C(s32 arg0) {
    s8 *__base_D_80074C36;
    register s8 *__base_D_80074C35;
    s8 *__base_D_80074C34;
    char *var_a1;
    register u8 var_a2;

    var_a2 = 0;
    var_a1 = &D_80030630;
loop_1:
    if (*(s16 *)var_a1 != arg0) {
        var_a2 += 1;
        var_a1 += 0x20;
        if (var_a2 >= 0x1E) {
            __base_D_80074C36 = &D_80074C36;
            (*__base_D_80074C36) = 0;
            __base_D_80074C35 = &D_80074C35;
            (*__base_D_80074C35) = 0;
            (*__base_D_80074C34) = 0;
            __base_D_80074C34 = &D_80074C34;
            return;
        }
        goto loop_1;
    }
    (*__base_D_80074C36) = var_a2;
    (*__base_D_80074C34) = var_a2 % 5;
    (*__base_D_80074C35) = var_a2 / 5;
}
