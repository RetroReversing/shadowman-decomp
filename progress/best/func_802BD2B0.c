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

extern M2C_UNK D_80044EB0;
extern s32 D_8007BE5C;
extern s32 D_8007BE60;

typedef struct { unsigned char pad_0[28]; void * field_1C; void * field_20; void * field_24; } __repair_record_var_s0;
void func_802BD2B0(void) {
    M2C_UNK (*temp_a1_2)(void *, M2C_UNK, void *);
    M2C_UNK *var_s0;
    M2C_UNK *var_s2;
    s32 var_s1;
    s32 var_s3;
    void *temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_v1;

    var_s3 = 0;
    var_s2 = &D_80044EB0;
    do {
        if ((M2C_FIELD(var_s2, s32 *, 0) != 0) && (M2C_FIELD(var_s2, s16 *, 0x16) != 0)) {
            var_s1 = 0;
            var_s0 = var_s2;
loop_4:
            temp_a1 = ((__repair_record_var_s0*)var_s0)->field_1C;
            if (temp_a1 != (void *)-1) {
                temp_a2 = ((__repair_record_var_s0*)var_s0)->field_20;
                if (temp_a2 != NULL) {
                    temp_v1 = M2C_FIELD(temp_a2, void **, 0x88);
                    if ((temp_v1 != NULL) && (M2C_FIELD(temp_v1, s32 *, 0x18) == 2)) {
                        temp_a0 = M2C_FIELD(temp_v1, void **, 0xC);
                        if (M2C_FIELD(temp_a0, M2C_UNK (**)(void *, M2C_UNK, void *), 0x24) != NULL) {
                            D_8007BE5C = var_s3;
                            temp_a1_2 = M2C_FIELD(temp_a0, M2C_UNK (**)(void *, M2C_UNK, void *), 0x24);
                            D_8007BE60 = M2C_FIELD(temp_a1, s32 *, 0x1C) + (M2C_FIELD(((__repair_record_var_s0*)var_s0)->field_24, u16 *, 8) * 0x10);
                            temp_a1_2(M2C_FIELD(temp_a2, void **, 0x88), temp_a1_2, temp_a2);
                        }
                    }
                }
                var_s1 += 1;
                var_s0 += 3;
                if (var_s1 < 5) {
                    goto loop_4;
                }
            }
        }
        var_s3 += 1;
        var_s2 += 22;
    } while (var_s3 < 0xF);
}
