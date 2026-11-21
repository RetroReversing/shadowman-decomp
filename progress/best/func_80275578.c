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

extern s16 D_800311F4;
extern s8 D_800311F8;
extern s8 D_800311FA;
extern s32 D_800311FC;
extern s32 D_80031200;
extern s32 D_80031204;
extern s32 D_80031208;
extern s32 D_8003120C;
extern s8 D_80031210;
extern f32 D_8007AF80;
extern s32 D_8007AF88;
extern s16 D_8007AF8C;
extern s32 D_8007AF90;
extern s32 D_8007AF94;
extern s32 D_8007AF9C;
extern s8 D_8007AFA4;
extern s8 D_8007AFBC;
extern M2C_UNK D_8007AFE0;
extern s8 D_8007AFE2;
extern f32 D_8007AFE4;
extern s16 D_8007AFFE;
extern s32 D_8007B000;
extern M2C_UNK D_8007B008;
extern f32 D_8007B010;
extern s16 D_8007B0A0;

void func_80275578(void) {
    D_800311F4 = -1;
    D_800311FA = 0;
    D_800311FC = -1;
    D_8007AF8C = 0;
    D_80031200 = -1;
    D_80031204 = 1;
    D_8007AFFE = 0;
    D_8007B000 = 0;
    D_8007AF94 = 0;
    D_8007AF90 = 0;
    D_8007AF9C = 0;
    D_8007AF88 = 2;
    M2C_FIELD(&D_8007B008, s8 *, 0) = 1;
    D_8007AFA4 = 1;
    D_8007AFBC = 1;
    D_8007AFE2 = 1;
    M2C_FIELD(&D_8007AFE0, s8 *, 1) = 1;
    M2C_FIELD(&D_8007AFE0, s8 *, 0) = 0;
    D_80031210 = 0;
    D_8003120C = 0xA;
    D_800311F8 = 0;
    D_8007B0A0 = 0;
    D_80031208 = 0x64;
    M2C_FIELD(&D_8007B008, f32 *, 4) = (f32) *(f32 *)0x214268;
    D_8007B010 = *(f32 *)0x21426C;
    D_8007AFE4 = *(f32 *)0x214270;
    D_8007AF80 = *(f32 *)0x214274;
}
