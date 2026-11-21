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

extern signed char D_800755D9;
extern float D_8007558C;
extern float D_800752D8;
extern float D_80074F70;
extern float D_80075590;
extern float D_800752DC;
extern float D_80074F74;
extern int D_80075580;
extern int D_80075588;
extern int D_80075574;
extern int D_80075578;
extern int D_8007557C;
extern int D_800755D0;
extern float D_80075594;
extern float D_800752E0;
extern float D_80074F78;
s32 func_80109D88();
s32 func_80237AA8();
s32 func_8023DF7C();
s32 func_802D0B28();
extern char D_209890[];
extern s32 D_8002D2B4;
extern s32 D_800305F8;
extern s32 D_800312C0;
extern s32 D_8005276C;
extern void *D_8005E9EC;
extern void *D_8005E9F0;
extern s32 D_8005EA14;
extern s32 D_8006973C;
extern s32 D_800698A0;
extern s32 D_80074BB0;
extern char D_80075518[];
extern char D_80075568[];

void func_80277800(s8 arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    s32 temp_a0;

    func_80109D88();
    D_8005276C = 1;
    func_802D0B28(D_8005EA14, arg0, 1);
    D_800755D9 = arg0;
    D_8002D2B4 = (s32) arg0;
    temp_fv0 = M2C_FIELD(D_8005E9EC, const f32 *, 0x24);
    D_8007558C = temp_fv0;
    D_800752D8 = temp_fv0;
    D_80074F70 = temp_fv0;
    temp_fv0_2 = M2C_FIELD(D_8005E9EC, const f32 *, 0x28);
    D_80075590 = temp_fv0_2;
    D_800752DC = temp_fv0_2;
    D_80074F74 = temp_fv0_2;
    temp_fv0_3 = M2C_FIELD(D_8005E9EC, const f32 *, 0x2C);
    D_800305F8 = 0;
    D_80075580 = 0;
    D_80075588 = 0;
    D_80075574 = 0;
    D_80075578 = 0;
    D_8007557C = 0;
    D_800755D0 = 0;
    D_80075594 = temp_fv0_3;
    D_800752E0 = temp_fv0_3;
    D_80074F78 = temp_fv0_3;
    if (M2C_FIELD(((D_80074BB0 * 0x34) + D_209890), s16 *, 8) == 1) {
        func_8023DF7C(D_80075568, D_80075518, 0, 0xA, 0, 2);
    }
    temp_a0 = M2C_FIELD(D_8005E9F0, const s32 *, 0x10);
    D_800312C0 = 0x64;
    if (temp_a0 != 0) {
        D_800698A0 = temp_a0;
        D_8006973C = (s32) M2C_FIELD(D_8005E9F0, const s16 *, 0x1C);
        func_80237AA8(temp_a0, D_8005E9F0);
    }
}
