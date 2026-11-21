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

s32 func_80103480();
s32 func_801133B0();
s32 func_8011360C();
s32 func_8011365C();
s32 func_80222860();
extern s32 D_8002C240;
extern char D_80052780[];
extern char D_800538C8[];
extern s32 D_80058E00;
extern s32 D_80058E04;
extern s32 D_80058E08;
extern s32 D_80058E0C;
extern s32 D_80058E10;
extern char D_80058E20[];
extern char D_80058E68[];
extern char D_80058EA8[];
extern void *D_8005EA2C;

void func_8021F064(void) {
    s32 sp10;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;

    D_80058E0C = 0;
    D_80058E08 = 0;
    D_80058E10 = 0;
    func_8011360C(&sp10);
    sp38 = *(f32 *)0x2000B0;
    func_8011365C(&sp10, D_80058E68);
    func_80222860(D_8005EA2C + 0x3C, &sp10);
    func_80103480(D_80058EA8, &sp10, 0x40);
    sp40 = M2C_FIELD(D_8005EA2C, f32 *, 0x60);
    sp44 = M2C_FIELD(D_8005EA2C, f32 *, 0x64) * M2C_FIELD(D_8005EA2C, f32 *, 0x104);
    sp48 = M2C_FIELD(D_8005EA2C, f32 *, 0x68);
    func_801133B0(&sp10, D_80052780, &sp10);
    func_801133B0(&sp10, (D_8002C240 * 0x1888) + D_800538C8);
    D_80058E00 = 0;
    D_80058E04 = 0;
}
