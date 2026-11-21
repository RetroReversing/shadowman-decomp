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

M2C_UNK func_80267F78(f32, void *, M2C_UNK, s32);   /* extern */
extern s32 D_8007BE5C;

void func_80251914(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 8);
    if (M2C_FIELD(M2C_FIELD(temp_a1, void **, 0x6C), u8 *, 8) != 0) {
        func_80267F78(*(f32 *)0x203294, temp_a1 + 0x24, 2, D_8007BE5C + 0x16);
    }
}
