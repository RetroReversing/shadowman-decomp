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

M2C_UNK func_802A6808();                            /* extern */
M2C_UNK func_802A7D38(void *, M2C_UNK);             /* extern */
M2C_UNK func_802B339C(void *);                      /* extern */
extern M2C_UNK D_8007DB88;

typedef struct { s32 w[3]; } __repair_words3;
void func_802B28E4(void *arg0) {
    M2C_UNK *__base_D_8007DB88;
    s32 __repair_store_0;
    s32 __repair_store_1;
    s32 __repair_store_2;
    f32 *var_v0;
    f32 temp_fv0;
    s32 var_a0;
    s32 var_v1;
    u32 temp_v0_5;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_s0 = M2C_FIELD(arg0, void **, 0xC);
    func_802A6808();
    func_802A7D38(arg0, 0x3F7FC3B5);
    __base_D_8007DB88 = &D_8007DB88;
    var_v0 = __base_D_8007DB88 + 4;
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) (M2C_FIELD(arg0, f32 *, 0x8C) + (M2C_FIELD(arg0, f32 *, 0x98) * M2C_FIELD(__base_D_8007DB88, f32 *, 4)));
    if (temp_s0 != NULL) {
        var_a0 = 0x1F;
        var_v1 = 0x174;
        do {
            temp_v0 = var_v1 + M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), void **, 0);
            M2C_FIELD(temp_v0, s32 *, 0) = (s32) M2C_FIELD(temp_v0, s32 *, -0xC);
            M2C_FIELD(temp_v0, s32 *, 4) = (s32) M2C_FIELD(temp_v0, s32 *, -8);
            M2C_FIELD(temp_v0, s32 *, 8) = (s32) M2C_FIELD(temp_v0, s32 *, -4);
            var_a0 -= 1;
            temp_v0_2 = var_v1 + M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), void **, 4);
            M2C_FIELD(temp_v0_2, s32 *, 0) = (s32) M2C_FIELD(temp_v0_2, s32 *, -0xC);
            M2C_FIELD(temp_v0_2, s32 *, 4) = (s32) M2C_FIELD(temp_v0_2, s32 *, -8);
            M2C_FIELD(temp_v0_2, s32 *, 8) = (s32) M2C_FIELD(temp_v0_2, s32 *, -4);
            var_v1 -= 0xC;
        } while (var_a0 != 0);
        temp_v0_3 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), void **, 0);
        __repair_store_0 = (s32) M2C_FIELD(arg0, s32 *, 0x54);
        __repair_store_1 = (s32) M2C_FIELD(arg0, s32 *, 0x58);
        __repair_store_2 = (s32) M2C_FIELD(arg0, s32 *, 0x5C);
        M2C_FIELD(temp_v0_3, s32 *, 0) = __repair_store_0;
        M2C_FIELD(temp_v0_3, s32 *, 4) = __repair_store_1;
        M2C_FIELD(temp_v0_3, s32 *, 8) = __repair_store_2;
        temp_v0_4 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), void **, 4);
        M2C_FIELD(temp_v0_4, __repair_words3 *, 0x0) = *(__repair_words3 *) ((s8 *) arg0 + 0x6C);
        temp_v0_5 = M2C_FIELD(temp_s0, u32 *, 0) + 1;
        M2C_FIELD(temp_s0, u32 *, 0) = temp_v0_5;
        var_v0 = __base_D_8007DB88 + 4;
        if (temp_v0_5 >= 0x21U) {
            M2C_FIELD(temp_s0, u32 *, 0) = 0x20U;
            var_v0 = __base_D_8007DB88 + 4;
        }
    }
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x30) - *var_v0;
    M2C_FIELD(arg0, f32 *, 0x30) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
    }
    if (M2C_FIELD(arg0, f32 *, 0x30) <= 0.0f) {
        func_802B339C(arg0);
    }
}
