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

s32 func_80104C50();
s32 func_80104DE0();
s32 func_80104EC4();
s32 func_801186D0();
s32 func_80228FE0();
s32 func_80229178();
s32 func_802D5F24();
extern char D_201450[];
extern char D_21B1A0[];
extern char D_8004AE40[];
extern s32 D_8007C8F4;
extern u32 D_8007C900;
extern s32 D_8007DA60;

void func_802D5FA4(s32 arg0) {
    u32 *__base_D_8007C900;
    char sp10[0x40];
    u32 sp50;
    u32 sp54;
    s32 temp_s0;
    s32 temp_v0;
    char *var_s1;
    u32 temp_v0_2;
    u32 var_s0;

    func_801186D0(sp10, D_21B1A0, arg0);
    temp_s0 = func_80228FE0(sp10, D_201450) & 0xFFFF;
    if (temp_s0 != 0xFFFF) {
        func_80229178(0, sp10, 1, 0x7F);
        temp_v0 = func_80104C50(D_8004AE40, temp_s0);
        func_80104EC4(&sp50, 4, 1, temp_v0);
        func_802D5F24(temp_v0, 0x45564157);
        func_802D5F24(temp_v0, 0x4D41524B);
        func_80104EC4(&sp54, 4, 1, temp_v0);
        var_s0 = 0;
        temp_v0_2 = sp54 >> 2;
        sp54 = temp_v0_2;
        if (temp_v0_2 != 0) {
            __base_D_8007C900 = &D_8007C900;
            var_s1 = __base_D_8007C900;
            do {
                func_80104EC4(var_s1, 4, 1, temp_v0);
                var_s0 += 1;
                var_s1 += 4;
            } while (var_s0 < sp54);
        }
        (__base_D_8007C900)[var_s0] = -1U;
        func_80104DE0(temp_v0);
        D_8007C8F4 = 0;
        D_8007DA60 = 0;
    }
}
