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

extern float D_8007C14C;
extern float D_8007C150;
extern float D_8007C154;
extern float D_8007C164;
extern float D_8007C168;
extern float D_8007C16C;
extern s32 D_80030C74;
extern char D_8007BF58[];

void *func_802D3FF8(void *arg0) {
    void *temp_v0;

    temp_v0 = (M2C_FIELD(arg0, s32 *, 4) * 0x18) + D_8007BF58;
    D_8007C14C = (f32) M2C_FIELD(temp_v0, f32 *, 8);
    D_8007C150 = (f32) M2C_FIELD(temp_v0, f32 *, 0xC);
    D_8007C154 = (f32) M2C_FIELD(temp_v0, f32 *, 0x10);
    D_8007C164 = (f32) M2C_FIELD(temp_v0, f32 *, 0x14);
    D_8007C168 = (f32) M2C_FIELD(temp_v0, f32 *, 0x18);
    D_8007C16C = (f32) M2C_FIELD(temp_v0, f32 *, 0x1C);
    D_80030C74 = 2;
    return arg0 + 8;
}
