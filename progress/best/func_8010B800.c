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

s32 func_8010B764();
s32 func_8010B900();
s32 func_8026F6BC();
extern char D_209890[];
extern char D_212078[];
extern char D_800273F8[];
extern char D_80027400[];
extern char D_80027408[];
extern s32 D_80074BB0;
extern void *D_8007AFF8;

void func_8010B800(void *arg0) {
    char *__base_D_800273F8;
    char *__base_D_212078;
    s16 temp_v1;
    u16 temp_a2;
    s32 temp_v0;
    char *__base_D_209890;

    __base_D_209890 = D_209890;

    temp_a2 = M2C_FIELD(arg0, u16 *, 0x50);
    if (!(temp_a2 & 2) && (M2C_FIELD(arg0, u16 *, 0x54) != 0)) {
        if (M2C_FIELD(((D_80074BB0 * 0x34) + __base_D_209890), s16 *, 8) == 1) {
            __base_D_212078 = D_212078;
            temp_v0 = M2C_FIELD(((M2C_FIELD(D_8007AFF8, u8 *, 0x40) * 0x6C) + __base_D_212078), u16 *, 6);
            if (M2C_FIELD(D_8007AFF8, s16 *, 0x5A) < ((s32) ((s16) temp_v0 + ((u32) (temp_v0 << 0x10) >> 0x1F)) >> 1)) {
                M2C_FIELD(arg0, u16 *, 0x50) = (u16) (temp_a2 | 2);
                func_8026F6BC(M2C_FIELD(arg0, u8 *, 0x57));
            }
        }
        temp_v1 = M2C_FIELD(D_8007AFF8, s16 *, 0x5A);
        if (temp_v1 >= 0x50) {
            __base_D_800273F8 = D_800273F8;
            func_8010B900(arg0, (__base_D_800273F8+16));
            return;
        }
        if (temp_v1 >= 0x3C) {
            func_8010B900(arg0, (D_80027400+8));
            return;
        }
        func_8010B764(arg0, D_80027408);
    }
}
