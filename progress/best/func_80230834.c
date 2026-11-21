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

s32 func_80230698();
s32 func_80230898();
s32 func_80230D28();
extern s32 D_80052764;
extern char D_800598A0[];

void func_80230834(s16 arg0, s32 arg1) {
    s32 temp_a2;
    void *temp_v1;
    char *__base_D_800598A0;

    __base_D_800598A0 = D_800598A0;

    temp_a2 = arg0 * 0x28;
    temp_v1 = (arg0 * 0x28) + __base_D_800598A0;
    if (M2C_FIELD(temp_v1, u16 *, 0) & 1) {
        M2C_FIELD(temp_v1, s32 *, 4) = (s32) D_80052764;
        func_80230D28(temp_v1, arg1, (arg0 * 0x28), arg1);
        return;
    }
    func_80230698(arg0, (arg0 * 0x28) + (D_800598A0 + 8), (arg0 * 0x28), arg1);
    func_80230898();
}
