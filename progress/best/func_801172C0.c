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

M2C_UNK func_80117354();                            /* extern */
M2C_UNK func_80117370(s32, void *);                 /* extern */
M2C_UNK func_80117E1C(M2C_UNK);                     /* extern */
s32 func_80118330();                                /* extern */
M2C_UNK func_80118350(s32);                         /* extern */
extern void *D_800285E0;

typedef struct { unsigned char pad[8]; int value; } __repair_field_8;
void func_801172C0(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;
    u16 var_v1;
u16 __repair_result_var_v1;

    var_v1 = 4;
    temp_s1 = func_80118330();
    if (arg0 != NULL) {
        __repair_result_var_v1 = M2C_FIELD(arg0, u16 *, 0x10);
    }
    temp_v1 = __repair_result_var_v1 & 0xFFFF;
    if (temp_v1 != 4) {
        if (temp_v1 < 5) {
            if (temp_v1 != 2) {
                func_80117354();
                return;
            }
            /* Duplicate return node #12. Try simplifying control flow for better match */
            M2C_FIELD(arg0, u16 *, 0x10) = 1U;
            func_80117370(((__repair_field_8 *)arg0)->value, arg0);
            func_80118350(temp_s1);
            return;
        }
        if (temp_v1 != 8) {
            func_80117354(arg0);
            return;
        }
        M2C_FIELD(arg0, u16 *, 0x10) = 1U;
        func_80117370(((__repair_field_8 *)arg0)->value, arg0);
        func_80118350(temp_s1);
        return;
    }
    M2C_FIELD(D_800285E0, s16 *, 0x10) = 1;
    func_80117E1C(0);
    func_80117354();
}
