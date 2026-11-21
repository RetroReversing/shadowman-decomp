/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_801043F8();
s32 func_80104C50();
s32 func_80104DE0();
s32 func_8023646C();
s16 func_8023648C();
f32 func_80236544();
extern char D_800312B4[];

void func_8026ED38(s32 arg0, s16 arg1) {
int __repair_literal;

    char *__base_D_800312B4;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    void *var_s0;

    if ((arg0 != 0)) {
        if ((arg1 != -1)) {
            temp_v0 = func_80104C50(arg0, arg1);
            temp_s2 = func_8023646C(temp_v0) & 0xFF;
            var_s2 = temp_s2 - 1;
            temp_s3 = func_801043F8(temp_s2 * 0x38, 2, 0);
            if (temp_s2 != 0) {
                var_s0 = temp_s3 + 0x34;
                do {
                    temp_v0_2 = func_8023646C(temp_v0) & 0xFF;
                    if (temp_v0_2 != 0) {
                        __base_D_800312B4 = D_800312B4;
__repair_literal = 4;

                        (*(s32 *)((char *)(var_s0) + -0x2C)) = (s32) *(((temp_v0_2 - 1) * __repair_literal) + __base_D_800312B4);
                    }
                    (*(f32 *)((char *)(var_s0) + -0x28)) = func_80236544(temp_v0);
                    (*(f32 *)((char *)(var_s0) + -0x24)) = func_80236544(temp_v0);
                    (*(f32 *)((char *)(var_s0) + -0x20)) = func_80236544(temp_v0);
                    (*(f32 *)((char *)(var_s0) + -0x1C)) = func_80236544(temp_v0);
                    (*(f32 *)((char *)(var_s0) + -0x18)) = func_80236544(temp_v0);
                    (*(f32 *)((char *)(var_s0) + -0x10)) = func_80236544(temp_v0);
                    (*(f32 *)((char *)(var_s0) + -0x14)) = func_80236544(temp_v0);
                    (*(s16 *)((char *)(var_s0) + -8)) = func_8023648C(temp_v0);
                    (*(s16 *)((char *)(var_s0) + -6)) = func_8023648C(temp_v0);
                    (*(s16 *)((char *)(var_s0) + -4)) = func_8023648C(temp_v0);
                    (*(s16 *)((char *)(var_s0) + 0)) = func_8023648C(temp_v0);
                    var_s0 += 0x38;
                    var_s2 -= 1;
                } while (var_s2 != 0);
            }
            func_80104DE0(temp_v0);
        }
    }
}
