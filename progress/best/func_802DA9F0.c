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

M2C_UNK func_80220A84();                            /* extern */
M2C_UNK func_80220B14();                            /* extern */
M2C_UNK func_802DB808(s32, void *, M2C_UNK, M2C_UNK); /* extern */
extern void *D_80056998;

typedef struct { int field_0; int field_4; int field_8; } __repair_record_D_80056998;
void func_802DA9F0(s32 arg0) {
    s32 var_s0;
    void *temp_a1;
    void *temp_v0;

    var_s0 = arg0;
    func_80220B14(arg0);
    func_80220A84();
    if (!(var_s0 & 0xFF)) {
        var_s0 = 0xFF;
    }
    temp_v0 = D_80056998 + 8;
    ((__repair_record_D_80056998*)D_80056998)->field_0 = 0xE7000000;
    ((__repair_record_D_80056998*)D_80056998)->field_4 = 0;
    temp_a1 = temp_v0 + 8;
    M2C_FIELD(temp_v0, s32 *, 4) = 0x80000;
    D_80056998 = temp_v0;
    D_80056998 = temp_a1;
    D_80056998 = temp_v0 + 0x10;
    ((__repair_record_D_80056998*)D_80056998)->field_8 = 0xE3000C00;
    M2C_FIELD(temp_v0, s32 *, 8) = 0xFC121824;
    M2C_FIELD(temp_a1, s32 *, 4) = 0xFF33FFFF;
    func_802DB808(var_s0 & 0xFF, temp_a1, 0xE3000C00, 0xFF33FFFF);
}
