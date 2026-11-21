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

extern int D_80036B1C;
extern int D_80036B20;
extern int D_80036B24;
void *func_80103878();
void *func_80296BC0();
void *func_802A17C4();
extern char D_80036CE0[];
extern u32 D_8007BAE0;

typedef struct { s32 w[3]; } __repair_words3;
void *func_802A16D4(void *arg0, s32 arg1, f32 arg2) {
    u32 *__base_D_8007BAE0;
    void *ret;
    f32 temp_fv0;
    s32 temp_a3;
    void *temp_v0;
    void *temp_v0_2;

    __base_D_8007BAE0 = &D_8007BAE0;
    if ((u32) (*__base_D_8007BAE0) < 8U) {
        temp_v0 = func_80296BC0(arg0, D_80036CE0);
        if (temp_v0 != NULL) {
            temp_fv0 = *(f32 *)0x215F88;
            M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0;
            M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0;
            (*__base_D_8007BAE0) += 1;
            M2C_FIELD(temp_v0, s8 *, 0x73) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x24) = (s32) D_80036B1C;
            M2C_FIELD(temp_v0, s32 *, 0x28) = (s32) D_80036B20;
            M2C_FIELD(temp_v0, s32 *, 0x2C) = (s32) D_80036B24;
            M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x6C) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x58) = 0;
            M2C_FIELD(temp_v0, f32 *, 0x4C) = (f32) *(f32 *)0x215F8C;
            M2C_FIELD(temp_v0, __repair_words3 *, 0xC) = *(__repair_words3 *) ((s8 *) arg0 + 0x0);
            M2C_FIELD(temp_v0, f32 *, 0x54) = arg2;
            M2C_FIELD(temp_v0, f32 *, 0x50) = arg2;
            temp_v0_2 = func_80103878(0x9C, 2, 0, M2C_FIELD(temp_v0, s32 *, 0x10));
            M2C_FIELD(temp_v0, void **, 0x44) = temp_v0_2;
            if (temp_v0_2 != NULL) {
                M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
                M2C_FIELD(temp_v0_2, s32 *, 0) = 0;
                M2C_FIELD(temp_v0_2, s32 *, 0x98) = 0;
            }
        }
        ret = temp_v0;
    } else {
        ret = func_802A17C4();
    }
    return ret;
}
