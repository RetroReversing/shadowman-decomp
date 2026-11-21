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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023A154();
extern f32 D_80074BC0;
extern char D_8007C1AC[];
extern s32 D_8007C300;
extern s32 D_8007C304;
extern s32 D_8007C308;
extern s32 D_8007C30C;
extern s32 D_8007C310;
extern s32 D_8007C314;
extern char D_8007DB88[];

void func_802D2688(s32 arg0, s32 arg1) {
    union {
        unsigned char bytes[16];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[4]; f32 value; } view_sp1C;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
    } m2c_initial_frame;

             
    s32 temp_ft0f;
    s32 temp_ft0f_2;
    s32 temp_ft0f_3;
    void *temp_s0;

    { func_8023A154(D_8007C30C, D_8007C310, D_8007C314, &m2c_initial_frame.view_sp18.value, D_8007C1AC); }
    temp_s0 = D_8007C1AC - 0x254;
    M2C_FIELD(temp_s0, f32 *, 0x1F4) += (m2c_initial_frame.view_sp18.value * D_8007DB8C);
    M2C_FIELD(temp_s0, f32 *, 0x1FC) += (m2c_initial_frame.view_sp20.value * D_8007DB8C);
    M2C_FIELD(temp_s0, f32 *, 0x1F8) += (m2c_initial_frame.view_sp1C.value * D_8007DB8C);
    if (D_8007C300 > 0) {
        temp_ft0f = (s32) ((f32) D_8007C300 - D_80074BC0);
        D_8007C300 = temp_ft0f;
        if (temp_ft0f <= 0) {
            D_8007C30C = 0;
            D_8007C300 = 0;
        }
    }
    if (D_8007C304 > 0) {
        temp_ft0f_2 = (s32) ((f32) D_8007C304 - D_80074BC0);
        D_8007C304 = temp_ft0f_2;
        if (temp_ft0f_2 <= 0) {
            D_8007C310 = 0;
            D_8007C304 = 0;
        }
    }
    if (D_8007C308 > 0) {
        temp_ft0f_3 = (s32) ((f32) D_8007C308 - D_80074BC0);
        D_8007C308 = temp_ft0f_3;
        if (temp_ft0f_3 <= 0) {
            D_8007C314 = 0;
            D_8007C308 = 0;
        }
    }
}
