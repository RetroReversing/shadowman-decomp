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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8011BA20();
s32 func_802BC4F0();
s32 func_802BCA10();
extern char D_80075518[];
extern char D_80075580[];
extern s32 D_800755F8;
extern char D_8007BDE8[];

void func_802BC8F0(s32 arg0) {
    char *__base_D_8007BDE8;
    s32 *__base_D_80075518;
    char sp20[0x10];
    s32 var_a0;
    s16 temp_v1;
    s32 *temp_v1_2;

    func_8011BA20(sp20, 0, 0xC);
    var_a0 = 0xA;
    if (arg0 == 0) {
        var_a0 = 6;
    }
    __base_D_80075518 = D_80075518;
    if (((u32) (M2C_FIELD(__base_D_80075518, u16 *, 4) - 0x72) >= 4U) && ((s16) M2C_FIELD(__base_D_80075518, u16 *, 4) != 0x28)) {
        temp_v1 = *((arg0 * 2) + __base_D_80075518);
        if (temp_v1 != -1) {
            if (!(M2C_FIELD(((temp_v1 * 0x38) + M2C_FIELD(__base_D_80075518, s32 *, 0x30)), u16 *, 4) & 8)) {/*__repair_call_balance*/if(var_a0){
                /* Duplicate return node #7. Try simplifying control flow for better match */
                func_802BCA10(var_a0, 0, __base_D_80075518, 0, D_80075580, D_80075580 + 0xC);}else{
                /* Duplicate return node #7. Try simplifying control flow for better match */
                func_802BCA10(var_a0, 0, __base_D_80075518, 0, D_80075580, D_80075580 + 0xC);}
                return;
            }
            __base_D_8007BDE8 = D_8007BDE8;
            temp_v1_2 = (arg0 * 4) + __base_D_8007BDE8;
            if ((*temp_v1_2 == 0) || (D_800755F8 != 0)) {
                func_802BCA10(var_a0, 1, __base_D_80075518, 0, D_80075580, D_80075580 + 0xC);
                return;
            }
            func_802BC4F0(var_a0, 1, __base_D_80075518, *temp_v1_2, D_80075580, D_80075580 + 0xC, 0);
            return;
        }
    }
    func_802BCA10(var_a0, 0, D_80075518, 0, D_80075580, D_80075580 + 0xC);
}
