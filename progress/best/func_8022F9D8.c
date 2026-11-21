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

M2C_UNK func_801186D0(M2C_UNK *, M2C_UNK *, s32, u32, s32); /* extern */
M2C_UNK func_8022F7F8(s32);                         /* extern */
M2C_UNK func_8022FA38(s32);                         /* extern */
M2C_UNK func_8022FBA0(M2C_UNK);                     /* extern */
u32 func_8022FF14(M2C_UNK);                         /* extern */
s32 func_8022FFB8();                                /* extern */
M2C_UNK func_802300F8();                            /* extern */
extern M2C_UNK D_20220C;
extern s32 D_80059870;
extern s32 D_8005987C;
extern u16 D_80059880;

void func_8022F9D8(void *arg0) {
    s32 *__base_D_8005987C;
    char sp18[0x100];
    M2C_UNK var_a0;
    s32 temp_a0;
    s32 temp_s1_2;
    u32 temp_s0;
    u32 temp_s1;
    u32 var_s2;

    var_s2 = 0;
loop_1:
    temp_a0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0 != 0) {
        func_8022FA38(temp_a0);
        return;
    }
    func_8022F7F8(D_80059870 + (M2C_FIELD(arg0, u16 *, 6) << 5));
    __base_D_8005987C = &D_8005987C;
    if ((*__base_D_8005987C) != 0) {
        var_a0 = 1;
        if (var_s2 < 0x32U) {
            var_a0 = 0;
        }/*__repair_loop_weight*/do {
        var_s2 += 1;} while (0);
        /*__repair_pointer_balance*/if ((unsigned long)__base_D_8005987C & 0x100) {
func_8022FBA0(var_a0);
} else {
func_8022FBA0(var_a0);
}
        func_802300F8();
        if (var_s2 >= 0x65U) {
            temp_s1 = (D_80059880 << 8) - func_8022FF14(0);
            temp_s0 = func_8022FF14(1) >> 0xA;
            temp_s1_2 = (temp_s1 >> 0xA) - temp_s0;
            func_801186D0(sp18, &D_20220C, temp_s1_2, temp_s0, func_8022FFB8());
        }
        if ((*__base_D_8005987C) == 0) {

        } else {
            goto loop_1;
        }
    }
}
