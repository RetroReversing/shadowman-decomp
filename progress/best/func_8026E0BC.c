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

s32 func_80104C50();
s32 func_80104DE0();
s16 func_8023646C();
s16 func_8023648C();
s32 func_8026DC18();
s32 func_8026DE6C();
s32 func_8026DF44();
s32 func_8026DFDC();
s32 func_8026E1A4();

void func_8026E0BC(s32 arg0, s16 arg1, s32 arg2, s16 arg3, s32 arg4) {
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_v0_5;
    s16 var_s1;
    s32 var_s3;
    s32 temp_v0;
    s32 temp_v0_4;

    if ((arg0 != 0)) {
        if ((arg1 != -1)) {
            var_s3 = 0;
            temp_v0 = func_80104C50(arg0, arg1);
            temp_v0_2 = func_8023648C(temp_v0);
            if (temp_v0_2 > 0) {
    for (;;) {
        temp_v0_3 = func_8023648C(temp_v0);
        var_s1 = 1;
        if (temp_v0_3 & 0x8000) {
            var_s1 = func_8023646C(temp_v0);
        }
        temp_v0_4 = func_8026DC18(temp_v0_3 & 0x7FFF, arg2, arg3, arg4);
        if (temp_v0_4 == 0) {
            func_8026DE6C(temp_v0, var_s1);
            func_8026E1A4();
            return;
        }
        func_8026DF44(temp_v0, var_s1, temp_v0_4);
        func_8026DFDC(temp_v0_4);
        temp_v0_5 = var_s3 + 1;
        var_s3 = temp_v0_5;
        if (temp_v0_5 >= temp_v0_2) {
            goto block_10;
        }
        continue;
        break;
    }
            }
    block_10:
            func_80104DE0(temp_v0);
        }
    }
}
