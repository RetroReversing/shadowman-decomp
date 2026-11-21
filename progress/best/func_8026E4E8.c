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

void *func_80233CD8(s32, u8);                       /* extern */
M2C_UNK func_8026E634(s32, void *);                 /* extern */
M2C_UNK func_8026E63C(s32, void *);                 /* extern */
s32 func_8026E698();                                /* extern */
extern void *D_8005E9F0;
extern s32 D_8005EA14;
extern s32 D_80074BB0;
extern u16 D_80075F80;

typedef struct { short field_0; short field_2; short field_4; unsigned char pad_6[2]; unsigned char field_8; } __repair_record_temp_a1;
void func_8026E4E8(void *arg0, s8 arg1) {
    s32 temp_fv1;
    u16 temp_v1;
    u8 temp_s1;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;

    if (func_8026E698() == -1) {
        temp_v1 = D_80075F80;
        temp_s1 = M2C_FIELD(D_8005E9F0, u8 *, 3);
        D_80075F80 = temp_v1 + 1;
        temp_v0 = func_80233CD8(D_8005EA14, temp_s1);
        temp_a1 = (void *)(((s16) temp_v1 * 0xA)); temp_a1 = (void *)((char *)temp_a1 + (s32)(&D_80075F80));
        ((__repair_record_temp_a1*)temp_a1)->field_0 = (s16) ((s32) M2C_FIELD(arg0, f32 *, 0) - (s32) M2C_FIELD(temp_v0, f32 *, 0x24));
        temp_fv1 = (s32) M2C_FIELD(temp_v0, f32 *, 0x28);
        ((__repair_record_temp_a1*)temp_a1)->field_2 = (s16) ((s32) M2C_FIELD(arg0, f32 *, 4) - temp_fv1);
        ((__repair_record_temp_a1*)temp_a1)->field_8 = temp_s1;
        ((__repair_record_temp_a1*)temp_a1)->field_4 = (s16) ((s32) M2C_FIELD(arg0, f32 *, 8) - (s32) M2C_FIELD(temp_v0, f32 *, 0x2C));
        if (D_80074BB0 != 2) {
            if (D_80074BB0 < 3) {
                if (D_80074BB0 != 1) {
                    func_8026E63C(temp_fv1, temp_a1);
                    return;
                }
                func_8026E634(temp_fv1, temp_a1);
                return;
            }
            if (D_80074BB0 != 3) {
                if (D_80074BB0 != 0x10) {
                    func_8026E63C(temp_fv1, temp_a1);
                    return;
                }
                temp_v0_2 = ((s16) temp_v1 * 0xA) + &D_80075F80;
                M2C_FIELD(temp_v0_2, s8 *, 6) = 0;
                M2C_FIELD(temp_v0_2, s8 *, 7) = arg1;
            } else {
                func_8026E634(temp_fv1, temp_a1);
            }
        } else {
            func_8026E634(temp_fv1, temp_a1);
        }
    }
}
