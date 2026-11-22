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

void *func_801043F8();
s32 func_80104C50();
s32 func_80104DE0();
s32 func_80104EC4();
s32 func_802364D0();

typedef struct { unsigned short field_0; unsigned char pad_2[2]; void * field_4; unsigned short field_8; } __repair_record_temp_s4;
void func_80230EEC(void *arg0) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    u16 *temp_s0_2;
    void *temp_s0;
    void *temp_s4;
    void *temp_v0_2;

    
    temp_s4 = func_801043F8(0xC, 2, 0);
    temp_v0 = func_80104C50(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s16 *, 0x14));
    func_802364D0((var_s2 = 0, temp_v0));
    func_80104EC4(&sp10, 2, 1, temp_v0);
    ((__repair_record_temp_s4*)temp_s4)->field_0 = sp10;
    func_80104EC4(&sp12, 2, 1, temp_v0);
    ((__repair_record_temp_s4*)temp_s4)->field_8 = sp12;
    temp_s0 = func_801043F8(sp10 * 4, 2, 0);
    temp_v0_2 = func_801043F8(sp10 << 6, 2, 0);
    ((__repair_record_temp_s4*)temp_s4)->field_4 = temp_s0;
    if (sp10 != 0) {
        do {
            func_80104EC4(&sp14, 2, 1, temp_v0);
            temp_v0_3 = var_s2 & 0xFFFF;
            var_s2 += 1;
            *(s32 *)((temp_v0_3 * 4) + temp_s0) = temp_v0_2 + (temp_v0_3 << 6);
        } while ((u32) (var_s2 & 0xFFFF) < sp10);
        var_s2_2 = 0;
        if (sp10 != 0) {
do {
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)), 2, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 4, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 8, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0xC, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0x10, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0x14, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0x18, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0x1C, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0x20, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0x24, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0x28, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0x2C, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0x30, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0x34, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0x38, 4, 1, temp_v0);
                func_80104EC4((temp_v0_2 + ((var_s2_2 & 0xFFFF) << 6)) + 0x3C, 4, 1, temp_v0);
                var_s2_2 += 1;
            } while ((u32) (var_s2_2 & 0xFFFF) < sp10);
        }
    }
    M2C_FIELD(arg0, void **, 8) = temp_s4;
    func_80104DE0(temp_v0);
}
