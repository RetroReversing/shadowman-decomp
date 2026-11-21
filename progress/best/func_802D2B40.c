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

M2C_UNK func_8022F130();                            /* extern */
M2C_UNK func_8023040C(M2C_UNK);                     /* extern */
M2C_UNK func_80263C5C(s32);                         /* extern */
M2C_UNK func_802D1990();                            /* extern */
s32 func_802D1F64(M2C_UNK *, s16);                  /* extern */
M2C_UNK func_802D6260();                            /* extern */
extern s32 D_800458F4;
extern M2C_UNK D_80045B64;
extern M2C_UNK D_8004AE10;
extern s32 D_80074BB0;
extern s32 D_8007C2F8;
extern void *D_8007C324;
extern s8 D_8007C328;
extern u16 D_8007C32A;
extern s32 D_8007C33C;
extern s32 D_8007C440;
extern M2C_UNK D_8007DA70;

void func_802D2B40(s32 arg0) {
    s32 (*temp_a1)(void *, M2C_UNK);
    s32 *var_v0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 var_v1;
    void *temp_a0;

    func_8022F130();
    func_8023040C(0);
    D_8007C33C = 1;
    D_8007C328 = 0;
    if (arg0 >= 0) {
        D_8007C2F8 = 1;
        temp_v1 = (&D_80045B64)[D_80074BB0];
        temp_a0 = (arg0 * 0x14) + temp_v1;
        temp_a1 = M2C_FIELD(temp_a0, s32 (**)(void *, M2C_UNK), 0);
        D_8007C440 = temp_v1;
        if (temp_a1 != NULL) {
            D_8007C32A = M2C_FIELD(temp_a0, u16 *, 4);
            D_8007C324 = temp_a0;
            if (temp_a1(temp_a0, temp_a1) == 1) {
                var_v1 = 0x13;
                var_v0 = &D_8007DA70 + 0x4C;
                do {
                    *var_v0 = 0;
                    var_v1 -= 1;
                    var_v0 -= 4;
                } while (var_v1 >= 0);
                if (func_802D1F64(&D_8004AE10, (s16) D_8007C32A) != 0) {
                    temp_a0_2 = M2C_FIELD(((arg0 * 0x14) + D_8007C440), s32 *, 0xC);
                    if (temp_a0_2 != 0) {
                        func_80263C5C(temp_a0_2);
                    }
                    D_800458F4 = arg0;
                    func_802D1990();
                    D_8007C33C = 0;
                }
                func_802D6260();
            }
        }
    }
}
