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

s32 func_80109318();
void *func_802D55E0();
void *func_802D55E4();
void *func_802D55F0();
extern char D_80045930[];
extern void *D_8005EA2C;
extern s32 D_80074BB0;

void *func_802D54EC(void *arg0) {
int __repair_literal;

    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v1 != 1) {
__repair_literal = 2;

        if (temp_v1 < __repair_literal) {
            if (temp_v1 != 0) {
                return func_802D55F0();
            }
            M2C_FIELD(arg0, f32 *, 8) += M2C_FIELD(D_8005EA2C, f32 *, 0);
            M2C_FIELD(arg0, f32 *, 0xC) += M2C_FIELD(D_8005EA2C, f32 *, 4);
            M2C_FIELD(arg0, f32 *, 0x10) += M2C_FIELD(D_8005EA2C, f32 *, 8);
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return func_802D55E0(M2C_FIELD(arg0, s16 *, 6));
        }
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                return func_802D55F0();
            }
            if ((u32) (D_80074BB0 - 0x10) < 4U) {
                func_80109318(M2C_FIELD(arg0, s16 *, 6), M2C_FIELD(((M2C_BITWISE(s32, M2C_FIELD(arg0, f32 *, 8)) * 0x14) + D_80045930), s32 *, 8), 0);
            }
            return arg0 + 0x18;
        }
        if (M2C_FIELD(arg0, s32 *, 4) == 0xBA) {
            return func_802D55E4(M2C_FIELD(arg0, s16 *, 6), 0);
        }
        return func_802D55E4(M2C_FIELD(arg0, s16 *, 6), 0);
    }
    return func_802D55E0(M2C_FIELD(arg0, s16 *, 6));
}
