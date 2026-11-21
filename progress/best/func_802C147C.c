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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern int D_8002DBD4;
extern int D_80045680;
extern int D_80045684;
extern int D_80045688;
extern signed char D_800755D9;
s32 func_8023DF7C();
s32 func_80266BA4();
extern char D_2C1034[];
extern char D_8002DBD0[];
extern s32 D_80030C58;
extern f32 D_80044E9C;
extern s32 D_80045678;
extern s32 D_8004567C;
extern char D_8004568C[];
extern char D_80075518[];
extern char D_80075568[];
extern f32 D_8007BDA0;

void func_802C147C(s32 arg0) {
    s32 *__base_D_80045678;
    char *var_s0;
    s32 temp_a3;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = D_8004568C;
    __repair_rows: {
        if ((M2C_FIELD(var_s0, u8 *, 8) == 0) && (D_8002DBD4 == M2C_FIELD(var_s0, s32 *, 0))) {
            temp_a3 = M2C_FIELD(var_s0, s32 *, 4);
            D_80045680 = (s32) M2C_FIELD(var_s0, s32 *, 0xC);
            D_80045684 = (s32) M2C_FIELD(var_s0, s32 *, 0x10);
            D_80045688 = (s32) M2C_FIELD(var_s0, s32 *, 0x14);
            __base_D_80045678 = &D_80045678;
            (*__base_D_80045678) = 0;
            D_80044E9C = M2C_FIELD(var_s0, f32 *, 0x1C);
            D_8004567C = temp_a3;
            D_8007BDA0 = M2C_FIELD(var_s0, f32 *, 0x20);
            func_80266BA4(*(s32 *)*(s32 *)((D_800755D9 * 4) + D_80030C58), 2, D_2C1034, temp_a3);
            if (((*__base_D_80045678) != 0) && (arg0 != 0)) {
                func_8023DF7C(D_80075568, D_80075518, M2C_FIELD(var_s0, s32 *, 0x18), 0xA, 0x28, 2);
            }
        }
        var_s1 += 1;
        var_s0 += 0x24;
    }
if (var_s1 < 0xEU) goto __repair_rows;
}
