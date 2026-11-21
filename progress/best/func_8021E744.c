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

extern unsigned short D_80058E0A;
extern int D_80058E08;
extern char D_80056A00[];
extern void *D_80058E04;
extern s32 D_80058E0C;

void func_8021E744(void *arg0) {
    void *temp_a0;
    void *var_v0;

    var_v0 = D_80058E04;
    if (var_v0 != NULL) {
loop_1:
        if (var_v0 != arg0) {
            var_v0 = M2C_FIELD(var_v0, void **, 8);
            if (var_v0 != NULL) {
                goto loop_1;
            }
        }
        if (var_v0 == NULL) {
            /* Duplicate return node #4. Try simplifying control flow for better match */
            temp_a0 = D_80058E04;
            D_80058E04 = arg0;
            M2C_FIELD(arg0, void **, 8) = temp_a0;
            M2C_FIELD(arg0, u16 *, 2) = (u16) D_80058E0A;
            M2C_FIELD(arg0, s32 *, 0) &= 0xFF80FFFF;
            D_80058E0C += 7;
            M2C_FIELD(((D_80058E08 * 0x18) + D_80056A00), s32 *, 0x14) = 0;
            return;
        }
        M2C_FIELD(((D_80058E08 * 0x18) + D_80056A00), void **, 0x14) = (void *) ((M2C_FIELD(arg0, u16 *, 2) * 0x18) + D_80056A00);
        M2C_FIELD(arg0, u16 *, 2) = (u16) D_80058E0A;
        return;
    }
    temp_a0 = D_80058E04;
    D_80058E04 = arg0;
    M2C_FIELD(arg0, void **, 8) = temp_a0;
    M2C_FIELD(arg0, u16 *, 2) = (u16) D_80058E0A;
    M2C_FIELD(arg0, s32 *, 0) &= 0xFF80FFFF;
    D_80058E0C += 7;
    M2C_FIELD(((D_80058E08 * 0x18) + D_80056A00), s32 *, 0x14) = 0;
}
