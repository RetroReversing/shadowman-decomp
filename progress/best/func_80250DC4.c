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

extern void *D_80072CAC;
extern s32 *D_80072D10;
extern s32 D_80074BB0;
extern s8 D_80075F21;

void func_80250DC4(void) {
    s32 __repair_store_0;
    s32 __repair_store_1;
    s32 __repair_store_2;
    void *temp_v0;

    if ((((u32) (D_80074BB0 - 6) < 3U) || (D_80074BB0 == 0xA)) && (D_80075F21 == 1)) {
        *D_80072D10 = 0;
        if (D_80072CAC != NULL) {
            temp_v0 = M2C_FIELD(D_80072CAC, void **, 0x6C);
            M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
            M2C_FIELD(temp_v0, s32 *, 0) = 0;
            __repair_store_0 = (s32) M2C_FIELD(temp_v0, s32 *, 0xC);
            __repair_store_1 = (s32) M2C_FIELD(temp_v0, s32 *, 0x10);
            __repair_store_2 = (s32) M2C_FIELD(temp_v0, s32 *, 0x14);
            M2C_FIELD(D_80072CAC, s32 *, 0x24) = __repair_store_0;
            M2C_FIELD(D_80072CAC, s32 *, 0x28) = __repair_store_1;
            M2C_FIELD(D_80072CAC, s32 *, 0x2C) = __repair_store_2;
        }
    }
}
