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

void *func_80103878();
void *func_80296BC0();
extern char D_80036C30[];

void *func_8029C7DC(s32 arg0, s32 arg1, void *arg2, s32 arg3, void *arg4, void *arg5, f32 arg6) {
    s32 __repair_store_0;
    s32 __repair_store_1;
    s32 __repair_store_2;
    s32 __repair_store_3;
    s32 __repair_store_4;
    s32 __repair_store_5;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_80296BC0(arg0, arg1);
    if (temp_v0 != NULL) {
        temp_v0_2 = func_80103878(0x18, 2, 0);
        M2C_FIELD(temp_v0, void **, 0x44) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 0x6C) = 0x11;
            M2C_FIELD(temp_v0, s8 *, 0x72) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x24) = (s32) M2C_FIELD(arg2, s32 *, 0);
            M2C_FIELD(temp_v0, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 4);
            M2C_FIELD(temp_v0, s32 *, 0x2C) = (s32) M2C_FIELD(arg2, s32 *, 8);
            M2C_FIELD(temp_v0, s32 *, 0x58) = 0;
            M2C_FIELD(temp_v0, f32 *, 0x50) = arg6;
            M2C_FIELD(temp_v0, f32 *, 0x54) = arg6;
            __repair_store_0 = (s32) M2C_FIELD(arg4, s32 *, 0);
            __repair_store_1 = (s32) M2C_FIELD(arg4, s32 *, 4);
            __repair_store_2 = (s32) M2C_FIELD(arg4, s32 *, 8);
            __repair_store_3 = (s32) M2C_FIELD(arg5, s32 *, 0);
            __repair_store_4 = (s32) M2C_FIELD(arg5, s32 *, 4);
            __repair_store_5 = (s32) M2C_FIELD(arg5, s32 *, 8);
            M2C_FIELD(temp_v0_2, s32 *, 0) = __repair_store_0;
            M2C_FIELD(temp_v0_2, s32 *, 4) = __repair_store_1;
            M2C_FIELD(temp_v0_2, s32 *, 8) = __repair_store_2;
            M2C_FIELD(temp_v0_2, s32 *, 0xC) = __repair_store_3;
            M2C_FIELD(temp_v0_2, s32 *, 0x10) = __repair_store_4;
            M2C_FIELD(temp_v0_2, s32 *, 0x14) = __repair_store_5;
        }
    }
    return temp_v0;
}
