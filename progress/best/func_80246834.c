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

M2C_UNK func_80109318(s16, void *, M2C_UNK);   /* extern */
M2C_UNK func_802468A8(u16, void *, s32);            /* extern */
extern void *D_8006A4FC;

void func_80246834(void *arg0, void *arg1) {
    union { void * pointer; s32 value; } __repair_phase_storage;

    M2C_UNK (*temp_a0_3)(M2C_UNK);
    s16 temp_a0_2;
    
    u16 temp_a0;
    void *temp_a2;
    void *temp_s0;

    temp_a2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x28);
    __repair_phase_storage.pointer = M2C_FIELD(arg0, void **, 0x10);
    if (temp_a2 != NULL) {
        temp_s0 = M2C_FIELD(temp_a2, s32 *, 4) + (M2C_FIELD(arg0, s16 *, 0x14) * 0xC);
        D_8006A4FC = arg1;
        temp_a0 = (u16) M2C_FIELD(arg0, s16 *, 0x14);
        if (M2C_FIELD(__repair_phase_storage.pointer, s32 *, 0) & 4) {
            func_802468A8(temp_a0, temp_a2, (s32) M2C_FIELD(M2C_FIELD(arg1, void **, 0x6C), f32 *, 0xC));
            return;
        }
        __repair_phase_storage.value = M2C_FIELD(arg0, s32 *, 0);
        if (((s16) temp_a0 < M2C_FIELD(temp_a2, s16 *, 0)) && (__repair_phase_storage.value >= M2C_FIELD(temp_s0, s16 *, 0))) {
            temp_a0_2 = M2C_FIELD(temp_s0, s16 *, 2);
            if (temp_a0_2 != -1) {
                func_80109318(temp_a0_2, arg1 + 0x24, 0);
            }
            temp_a0_3 = M2C_FIELD(temp_s0, M2C_UNK (**)(M2C_UNK), 4);
            if (temp_a0_3 != NULL) {
                temp_a0_3(temp_a0_3);
            }
            M2C_FIELD(arg0, s16 *, 0x14) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x14) + 1);
        }
    }
}
