/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

s32 func_80106C34();
s32 func_80106E34();
s32 func_80106F38();
s32 func_80107018();
s32 func_80107200();
s32 func_80107204();
s32 func_80116D80();
extern char D_8004B44C[];

void func_801071D4(void) {
    s16 *sp10;
    s16 temp_v1;

    func_80116D80(D_8004B44C, &sp10, 1);
    temp_v1 = *sp10;
    if (temp_v1 != 1) {
        if (temp_v1 < 2) {
            if (temp_v1 != 0) {
                func_80107204(D_8004B44C);
                return;
            }
            func_80106C34(D_8004B44C);
            func_80107200();
            return;
        }
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                func_80107200(sp10);
                return;
            }
            func_80106F38(sp10);
            func_80107200();
            return;
        }
        func_80107018(sp10);
        func_80107200();
        return;
    }
    func_80106E34(sp10);
    func_80107200();
}
