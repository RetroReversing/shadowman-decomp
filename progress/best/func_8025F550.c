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

extern int D_8002D200;
extern int D_8002D204;
s32 func_80104980();
s32 func_801186D0();
s32 func_8021F8CC();
s32 func_80221CE8();
s32 func_8025F7C0();
s32 func_8025F90C();
extern char D_100F80[];
extern char D_20B328[];
extern char D_20B32C[];
extern char D_20B3BC[];
extern char D_20B3C4[];
extern s32 D_8002C11C;
extern char D_80030610[];
extern char D_800309F0[];
extern u8 D_80030BD0;
extern char D_80030C34[];
extern char D_8004AE08[];
extern char D_8004AE18[];
extern s32 *D_80074C24;
extern s32 D_80074C28;
extern s32 D_80074C2C;
extern u8 D_80074C30;
extern u8 D_80074C31;
extern u8 D_80074C37;
extern u8 D_80074C38;
extern u8 D_80074C39;
extern u16 D_80075F48;
extern u8 D_8007DC06;

void func_8025F550(void) {
    s32 sp40;
    s32 sp140;
    s32 sp148;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fv0;
    s32 *temp_v1_2;
    s32 temp_t3;
    s32 temp_v1;
    s32 var_s3;
    s32 var_s5;
    s32 var_s7;
    u8 var_s0;
    u8 var_s1;
    void *var_s4;

    sp140 = M2C_UNALIGNED32(D_20B328);
    func_8021F8CC(0.0f, 0.0f, &D_8002C11C, 0, 0, D_8002D200, D_8002D204, 0x140, 0xF0, D_8002C11C + 0x200, D_8002C11C, 0, 1, 0xFF, 0xFF, 0xFF, 0xFF);
    if ((u8) D_80074C39 < 0x11U) {
        temp_v1 = D_80074C39 * 0x1C;
        if (M2C_FIELD((temp_v1 + D_800309F0), u8 *, 2) != 0) {
            temp_fs0 = *(f32 *)0x20B3C8;
            func_80221CE8(D_100F80, M2C_FIELD(((D_8007DC06 * 4) + temp_v1 + D_800309F0), s32 **, 4), 0xA0, 0xC2, 2, M2C_UNALIGNED32(sp140), temp_fs0, temp_fs0);
            func_801186D0(&sp40, D_20B32C, M2C_FIELD(((M2C_FIELD(((D_80074C39 * 0x1C) + D_800309F0), u8 *, 3) * 2) + D_80030610), u8 *, 1));
            func_80221CE8(D_100F80, &sp40, 0xCF, 0xBC, 2, M2C_UNALIGNED32(sp140), temp_fs0, temp_fs0);
            func_801186D0(&sp40, D_20B32C, *((M2C_FIELD(((D_80074C39 * 0x1C) + D_800309F0), u8 *, 3) * 2) + D_80030610));
            func_8025F7C0(D_100F80, &sp40, 0xDC, 0xD2, 2, M2C_UNALIGNED32(sp140), temp_fs0);
            return;
        }
        goto block_6;
    }
    if (D_80074C39 == 0x13) {
        temp_fv0 = *(f32 *)0x20B3CC;
        func_80221CE8(D_100F80, *((D_8007DC06 * 4) + D_80030C34), 0xA0, 0xC2, 2, M2C_UNALIGNED32(sp140), temp_fv0, temp_fv0);
block_6:
    }
    var_s1 = 0;
    var_s7 = 0x13;
    sp148 = 0;
    func_801186D0(&sp40, D_20B3BC, (u8) D_80075F48);
    temp_fs0_2 = *(f32 *)0x20B3D0;
    func_80221CE8(D_100F80, &sp40, 0xE9, 0xBC, 0, M2C_UNALIGNED32(sp140), temp_fs0_2, temp_fs0_2);
    func_80221CE8(D_100F80, D_20B3C4, 0xF6, 0xD2, 0, M2C_UNALIGNED32(sp140), temp_fs0_2, temp_fs0_2);
loop_8:
    var_s5 = 0;
    var_s4 = (var_s1 * 0x1C) + D_800309F0;
    var_s3 = 0xB4;
loop_9:
    if (var_s1 < 0x11U) {
        if (M2C_FIELD(var_s4, u8 *, 2) != 0) {
            var_s0 = var_s1;
            if ((var_s1 == 0) && (D_80030BD0 != 0)) {
                var_s0 = 0x11;
            }
            if (var_s1 == D_80074C39) {
                if (var_s0 != D_80074C30) {
                    D_80074C30 = var_s0;
                    if (D_80074C31 != 0) {
                        func_8025F90C();
                        return;
                    }
                    D_80074C28 += D_80074C2C;
                    D_80074C31 ^= 1;
                    func_80104980(D_80074C30 + 0x4D, D_80074C28, D_8004AE08, D_8004AE18);
                    goto block_20;
                }
block_20:
                func_8021F8CC(*(f32 *)0x20B3D4, *(f32 *)0x20B3D8, NULL, 0, D_8002D200, D_8002D204, 0x68, 0x46, D_80074C28 + 0x200, D_80074C28, 0, 1, 0xFF, 0xFF, 0xFF, 0xFF);
                goto block_21;
            }
block_21:
            temp_v1_2 = &D_80074C24[var_s0];
            func_8021F8CC((f32) var_s3, (f32) var_s7, NULL, 0, D_8002D200, D_8002D204, 0x18, 0x12, *temp_v1_2 + 0x200, *temp_v1_2, 0, 1, 0xFF, 0xFF, 0xFF, 0xFF);
            goto block_22;
        }
block_22:
        var_s3 += 0x1C;
        var_s5 += 1;
        var_s4 += 0x1C;
        var_s1 += 1;
        if (var_s5 >= 4) {
            var_s7 += 0x11;
            temp_t3 = sp148 + 1;
            sp148 = temp_t3;
            if (temp_t3 >= 5) {
                /* Duplicate return node #25. Try simplifying control flow for better match */
                func_8021F8CC((f32) ((D_80074C37 * 0x1C) + 0xB3), (f32) ((D_80074C38 * 0x11) + 0x11), D_80074C24, 0, 0, D_8002D200, D_8002D204, 0x20, 0x14, M2C_FIELD(D_80074C24, s32 *, 0x48) + 0x20, M2C_FIELD(D_80074C24, s32 *, 0x48), 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                return;
            }
            goto loop_8;
        }
        goto loop_9;
    }
    func_8021F8CC((f32) ((D_80074C37 * 0x1C) + 0xB3), (f32) ((D_80074C38 * 0x11) + 0x11), D_80074C24, 0, 0, D_8002D200, D_8002D204, 0x20, 0x14, M2C_FIELD(D_80074C24, s32 *, 0x48) + 0x20, M2C_FIELD(D_80074C24, s32 *, 0x48), 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
}
