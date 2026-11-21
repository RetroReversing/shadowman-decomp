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

M2C_UNK func_80246F50(s16, M2C_UNK);                /* extern */
s32 func_8025FE34(s16);                             /* extern */
M2C_UNK func_802C074C(s16, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK D_8002DBD0;
extern M2C_UNK D_80075F58;

void func_802C0D88(s32 arg0, s32 arg1) {
    M2C_UNK *__base_D_80075F58;
    M2C_UNK *__base_D_8002DBD0;
    s32 temp_s2;
    s32 temp_s3;

    if ((arg1 != 1) || (M2C_FIELD((__base_D_80075F58 = &D_80075F58), s16 *, 0) != 0)) {
        __base_D_8002DBD0 = &D_8002DBD0;
        temp_s2 = M2C_FIELD(__base_D_8002DBD0, s32 *, 4);
        if (temp_s2 == -1) {
            if (func_8025FE34(M2C_FIELD(__base_D_80075F58, s16 *, 8)) != 0) {
                /*__repair_pointer_balance*/if ((unsigned long)__base_D_8002DBD0 & 0x100) {
func_80246F50(M2C_FIELD(__base_D_80075F58, s16 *, 8), 0);
} else {
func_80246F50(M2C_FIELD(__base_D_80075F58, s16 *, 8), 0);
}
                func_802C074C(M2C_FIELD(__base_D_80075F58, s16 *, 8), 0, 0x50);
            }
            temp_s3 = M2C_FIELD(__base_D_8002DBD0, s32 *, 4);
            if ((temp_s3 == temp_s2) && (arg0 != 0) && (M2C_FIELD(__base_D_8002DBD0, s32 *, 0x14) != 7) && (M2C_FIELD(__base_D_80075F58, s16 *, 0xA) != 7)) {
                do { func_80246F50(7, 0); } while (0);
                func_802C074C(7, 0, 0x50);
                if (M2C_FIELD(__base_D_80075F58, s16 *, 0xA) == 7) {
                    M2C_FIELD(__base_D_80075F58, s16 *, 0xA) = (s16) temp_s3;
                }
            }
        }
    }
}
