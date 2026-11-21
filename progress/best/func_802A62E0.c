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

M2C_UNK func_802A630C();                            /* extern */
extern void *D_8007BD60;

void func_802A62E0(void *arg0) {
    void **__base_D_8007BD60;
    void **temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = M2C_FIELD(arg0, void ***, 4);
    M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) & 0xFE);
    if (temp_v1 == NULL) {
        func_802A630C();
        return;
    }
    *temp_v1 = M2C_FIELD(arg0, void **, 0);
    temp_v1_2 = M2C_FIELD(arg0, void **, 0);
    if (temp_v1_2 != NULL) {
        M2C_FIELD(temp_v1_2, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    }
    __base_D_8007BD60 = &D_8007BD60;
    temp_v1_3 = (*__base_D_8007BD60);
    (*__base_D_8007BD60) = arg0;
    M2C_FIELD(arg0, void **, 0) = temp_v1_3;
}
