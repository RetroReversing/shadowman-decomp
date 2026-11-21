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

extern int D_8007558C;
extern int D_80075590;
extern int D_80075594;
extern int D_8007BDB8;
extern int D_8007BDBC;
extern int D_8007BDC0;
extern signed char D_800755D9;
extern int D_80045680;
extern float D_80045684;
extern float D_80045688;
s32 func_80109318();
s32 func_80237AA8();
s32 func_80266BA4();
s32 func_802D0B28();
extern char D_2C1034[];
extern s32 D_8002D2B4;
extern s32 D_80030C58;
extern s32 D_80030C74;
extern s32 D_80030E34;
extern s32 D_80030E3C;
extern f32 D_80044E9C;
extern s32 D_80045678;
extern s32 D_8004567C;
extern void *D_8005E9F0;
extern s32 D_8005EA0C;
extern s32 D_8005EA14;
extern s32 D_8006973C;
extern s32 D_800698A0;
extern s32 D_80074BFC;
extern void *D_80075510;

void func_802BD3C8(void *arg0, s32 arg1) {
    s32 temp_v1;

    func_802D0B28(D_8005EA14, 1);
    D_8002D2B4 = arg1;
    func_80109318(0x1FB, &D_8007558C, 0);
    D_80030C74 = 5;
    M2C_FIELD(D_80075510, s16 *, 0x16) = 2;
    D_8007558C = (s32) M2C_FIELD(arg0, s32 *, 0);
    D_80075590 = (s32) M2C_FIELD(arg0, s32 *, 4);
    D_80075594 = (s32) M2C_FIELD(arg0, s32 *, 8);
    D_8007BDB8 = (s32) M2C_FIELD(arg0, s32 *, 0);
    D_8007BDBC = (s32) M2C_FIELD(arg0, s32 *, 4);
    D_8007BDC0 = (s32) M2C_FIELD(arg0, s32 *, 8);
    D_800755D9 = (s8) arg1;
    temp_v1 = M2C_FIELD(D_8005E9F0, s32 *, 0x10);
    D_80030E34 = D_80030E3C;
    if (temp_v1 != 0) {
        D_800698A0 = temp_v1;
        D_8006973C = (s32) M2C_FIELD(D_8005E9F0, s16 *, 0x1C);
        func_80237AA8(D_8005E9F0);
    }
    D_80074BFC = 1;
    D_80045678 = 0;
    D_80045680 = 0;
    D_80045684 = (f32) *(f32 *)0x218138;
    D_80045688 = (f32) *(f32 *)0x21813C;
    D_8004567C = 0x1F7;
    D_80044E9C = *(f32 *)0x218140;
    func_80266BA4(*(s32 *)*(s32 *)((D_8005EA0C * 4) + D_80030C58), 2, D_2C1034);
    D_80030E34 = D_80030E3C;
}
