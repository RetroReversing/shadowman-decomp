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

extern unsigned char D_8007DC06;
extern int D_80075F4C;
s32 func_80229470();
s32 func_802294D4();
void *func_8022ADB0();
s32 func_8023040C();
s32 func_80246E18();
s32 func_80246EF4();
extern char D_202C28[];
extern char D_202C3C[];
extern char D_246C08[];
extern s8 D_8002C1BC;
extern char D_8002DBB0[];
extern char D_8004ADF8[];
extern s32 *D_80052778;
extern char D_800596B0[];
extern void *D_80072BB0;
extern void *D_80072BB4;
extern char D_80075F20[];
extern char D_8007DB78[];

typedef struct { unsigned char pad[8]; int value; } __repair_field_8;
void func_80246DA8(void *arg0) {
    unsigned char *__base_D_8007DC06;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    f32 temp_fv0;
    f32 temp_fv0f;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;

    sp10 = M2C_FIELD(D_202C28, s32 *, 0);
    sp14 = M2C_FIELD(D_202C28, s32 *, 4);
    sp18 = ((__repair_field_8 *)D_202C28)->value;
    sp1C = M2C_FIELD(D_202C28, s32 *, 0xC);
    sp20 = M2C_FIELD(D_202C28, s32 *, 0x10);
    func_8023040C(0);
    if (M2C_FIELD(arg0, u16 *, 0xE) & 2) {
        func_80246E18();
        return;
    }
    sp10 = 0;
    D_8002C1BC = 1;
    D_80052778 = D_246C08;
    __base_D_8007DC06 = &D_8007DC06;
    temp_v0 = func_8022ADB0(D_8004ADF8, *(s32 *)(arg0 + ((*__base_D_8007DC06) * 2)), &sp10);
    D_80072BB0 = temp_v0;
    func_80229470(((__repair_field_8 *)temp_v0)->value);
    func_802294D4(D_800596B0);
    if (arg0 == D_8002DBB0) {
        var_a0 = M2C_FIELD(((__repair_field_8 *)D_80072BB0)->value, void **, 4);
        if (var_a0 != NULL) {
            temp_fv0f = *(f32 *)0x202C44;
            for (;;) {
                temp_v0_2 = M2C_FIELD(var_a0, void **, 0x28);
                if (temp_v0_2 != NULL) {
                    temp_fv0 = M2C_FIELD(temp_v0_2, f32 *, 0xC);
                    if (temp_fv0f <= temp_fv0) {
                        if (!(D_80075F4C & ((s32) (temp_fv0 - temp_fv0f) | 0x80000000))) {
                            M2C_FIELD(var_a0, void **, 0x28) = NULL;
                            *(s32 *)(var_a0 + ((*(&D_8007DC06)) * 4)) = D_202C3C;
                        }
                        goto block_14;
                    }
                    func_80246EF4(var_a0, D_202C3C, D_8007DB78, 0x80000000);
                    return;
                }
block_14:
                var_a0 = M2C_FIELD(var_a0, void **, 0x34);
                if (var_a0 == NULL) {
                    /* Duplicate return node #15. Try simplifying control flow for better match */
                    M2C_FIELD(arg0, s16 *, 0xC) = 0;
                    D_80072BB4 = arg0;
                    return;
                }
                continue;
                break;
            }
        }
    }
    M2C_FIELD(arg0, s16 *, 0xC) = 0;
    D_80072BB4 = arg0;
}
