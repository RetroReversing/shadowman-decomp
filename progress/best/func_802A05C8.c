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

extern float D_8007DB8C;
s32 func_80109318();
f32 func_8022EC3C();
s32 func_80232BD8();
void *func_80296BC0();
s32 func_802A06A4();
extern char D_80036D10[];
extern char D_8007DB88[];

typedef struct { unsigned char pad_0[76]; float field_4C; unsigned char pad_50[4]; float field_54; int field_58; float field_5C; } __repair_record_temp_v0;
void func_802A05C8(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    void *temp_v0;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x54);
    if (!(temp_fv0 <= D_8007DB8C)) {
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (temp_fv0 - D_8007DB8C);
        return;
    }
    if (func_80232BD8(arg0, 0x42C80000, 0) != 0) {
        func_80109318(0x10E, arg0, 0);
        temp_v0 = func_80296BC0(arg0, 0, D_80036D10);
        if (temp_v0 != NULL) {
            temp_fv0_2 = func_8022EC3C(*(f32 *)0x215EA4);
            ((__repair_record_temp_v0*)temp_v0)->field_58 = 0;
            ((__repair_record_temp_v0*)temp_v0)->field_54 = (f32) *(f32 *)0x215EAC;
            ((__repair_record_temp_v0*)temp_v0)->field_5C = (f32) *(f32 *)0x215EB0;
            ((__repair_record_temp_v0*)temp_v0)->field_4C = (f32) (temp_fv0_2 + *(f32 *)0x215EA8);
        }
    }
    func_8022EC3C(*(f32 *)0x215EB4);
    func_802A06A4(arg0);
}
