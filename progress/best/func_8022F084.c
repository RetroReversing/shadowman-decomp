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

extern s32 D_800458F0;
extern s32 D_8004AEB0;
extern s32 D_8004AEB4;
extern s32 D_80052764;
extern s32 D_8005276C;
extern M2C_UNK D_80052770;
extern s32 D_8005277C;
extern f32 D_80074BC0;
extern M2C_UNK D_8007DB78;

void func_8022F084(void) {
    f32 temp_fv0;
    s32 temp_a0;

    D_80052764 += 1;
    D_8005276C += 1;
    M2C_FIELD(&D_80052770, s32 *, 4) = (s32) D_8004AEB0;
    if (D_8004AEB0 >= 7) {
        M2C_FIELD(&D_80052770, s32 *, 4) = 6;
    }
    temp_a0 = D_8004AEB4;
    D_8004AEB4 = 0;
    D_8004AEB0 = 0;
    D_8005277C = temp_a0;
    if (D_800458F0 != 0) {
        M2C_FIELD(&D_80052770, s32 *, 4) = temp_a0;
    }
    temp_fv0 = (f32) M2C_FIELD(&D_80052770, s32 *, 4);
    D_80074BC0 = temp_fv0;
    M2C_FIELD(&D_8007DB78, f32 *, 0x14) = temp_fv0;
    if (temp_fv0 < 0.0f) {
        M2C_FIELD(&D_8007DB78, f32 *, 0x14) = (f32) *(f32 *)0x202150;
    }
}
