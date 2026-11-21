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

void *func_80233CD8(M2C_UNK **, s32);               /* extern */
extern void *D_8005E9EC;
extern M2C_UNK **D_8005EA14;
extern s32 D_80061A10;

s32 func_80233DC4(void) {
    M2C_UNK ***__base_D_8005EA14;
    M2C_UNK *var_s0;
    void *temp_v0;

    __base_D_8005EA14 = &D_8005EA14;
    var_s0 = *(*__base_D_8005EA14);
    if (*var_s0 != NULL) {
        __repair_rows: {
            temp_v0 = func_80233CD8((*__base_D_8005EA14), *M2C_FIELD(M2C_FIELD(var_s0, void **, 8), s32 **, 0x6C));
            var_s0 = M2C_FIELD(var_s0, M2C_UNK **, 0);
            D_80061A10 = M2C_FIELD(temp_v0, s32 *, 0x64);
            D_8005E9EC = temp_v0;
            return D_8005E9EC;
        }
if (*var_s0 != NULL) goto __repair_rows;
    }
}
