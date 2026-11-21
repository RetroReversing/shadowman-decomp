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

s32 func_801099B0();
s32 func_80109A04();
void *func_80239398();
s32 func_80261408();
extern char D_1096B0[];
extern s32 D_8002E0A0;
extern s32 D_8005EA0C;
extern u8 D_8005EA0F;

void func_80109918(s32 arg0, s32 arg1, u16 arg2) {
    s32 *__base_D_8005EA0C;
    void *temp_a1;
    void *temp_v0;

    if (((u32) arg2 >= 0x1FFU) || (arg0 == 0)) {
        func_80109A04();
        return;
    }
    __base_D_8005EA0C = &D_8005EA0C;
    if ((*__base_D_8005EA0C) == -1) {
        /*__repair_pointer_balance*/if ((unsigned long)__base_D_8005EA0C & 0x100) {
func_801099B0(D_8002E0A0, 0, 0);
} else {
func_801099B0(D_8002E0A0, 0, 0);
}
        return;
    }
    temp_v0 = func_80239398(*(s32 *)(((*__base_D_8005EA0C) * 4) + func_80261408(0)), 0, 0, D_1096B0, 0x10);
    temp_a1 = temp_v0 + 8;
    M2C_FIELD(temp_v0, s32 *, 8) = arg0;
    M2C_FIELD(temp_a1, s32 *, 4) = 0;
    M2C_FIELD(temp_a1, s32 *, 4) = (s32) ((s32) M2C_FIELD(temp_a1, s32 *, 4) & 0xFF7FFFFF);
    M2C_FIELD(temp_a1, u16 *, 6) = arg2;
    M2C_FIELD(temp_a1, s32 *, 4) = (s32) (((s32) M2C_FIELD(temp_a1, s32 *, 4) & 0xFF80FFFF) | ((D_8005EA0F & 0x7F) << 0x10));
}
