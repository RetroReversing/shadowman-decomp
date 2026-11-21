/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023A0DC(f32, f32, void *, u16, f32, f32 *, void *); /* extern */
extern void *D_8005EA2C;

s32 func_80231A5C(void *arg0) {
    union {
        unsigned char bytes[32];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[4]; f32 value; } view_sp1C;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
        struct { unsigned char pad[16]; f32 value; } view_sp28;
        struct { unsigned char pad[20]; f32 value; } view_sp2C;
        struct { unsigned char pad[24]; f32 value; } view_sp30;
    } m2c_initial_frame;

             
             
    f32 temp_fv0f;
    f32 temp_ft0_2;
    f32 temp_fs0;
    f32 temp_fv1;
    f32 temp_ft0;
    f32 temp_ft0f_2;
    register f32 temp_fa0;
    f32 temp_ft0f;
    f32 temp_fv1f;
    
    u16 temp_a1_2;
    void *temp_a0;
    void *temp_a1;
    union { void * pointer; s32 value; } __repair_phase_storage;

    __repair_phase_storage.pointer = (*(void **)((char *)(arg0) + 0x64));
    temp_fv1f = (f32) (*(s16 *)((char *)(__repair_phase_storage.pointer) + 0xC));
    temp_a0 = arg0 + 0x34;
    temp_a1 = __repair_phase_storage.pointer + 0xC;
    temp_ft0f = (f32) (*(s16 *)((char *)(temp_a1) + 2));
    temp_ft0 = (f32) (*(s16 *)((char *)(temp_a1) + 4));
    __repair_phase_storage.value = (u16)((*(u16 *)((char *)(__repair_phase_storage.pointer) + 0x12)));
    (*(f32 *)((char *)(&m2c_initial_frame.view_sp18.value) + 4)) = (f32) ((temp_fv1f * (*(f32 *)((char *)(temp_a0) + 0xC))) + (temp_ft0f * (*(f32 *)((char *)(temp_a0) + 0x10))) + (temp_ft0 * (*(f32 *)((char *)(temp_a0) + 0x14))) + (*(f32 *)((char *)(temp_a0) + 0x28)));
    temp_fa0 = (temp_fv1f * (*(f32 *)((char *)(arg0) + 0x34))) + (temp_ft0f * (*(f32 *)((char *)(temp_a0) + 4))) + (temp_ft0 * (*(f32 *)((char *)(temp_a0) + 8))) + (*(f32 *)((char *)(temp_a0) + 0x24));
    (*(f32 *)((char *)(&m2c_initial_frame.view_sp18.value) + 8)) = (f32) ((temp_fv1f * (*(f32 *)((char *)(temp_a0) + 0x18))) + (temp_ft0f * (*(f32 *)((char *)(temp_a0) + 0x1C))) + (temp_ft0 * (*(f32 *)((char *)(temp_a0) + 0x20))) + (*(f32 *)((char *)(temp_a0) + 0x2C)));
    m2c_initial_frame.view_sp18.value = temp_fa0;
    temp_fs0 = (f32) __repair_phase_storage.value;
    func_8023A0DC(temp_fa0 - (*(f32 *)((char *)(D_8005EA2C) + 0)), m2c_initial_frame.view_sp1C.value - (*(f32 *)((char *)(D_8005EA2C) + 4)), temp_a0, __repair_phase_storage.value, m2c_initial_frame.view_sp20.value - (*(f32 *)((char *)(D_8005EA2C) + 8)), &m2c_initial_frame.view_sp28.value, D_8005EA2C + 0x3C);
    __repair_phase_storage.value = 1;
    if (!((m2c_initial_frame.view_sp30.value + temp_fs0) <= 0.0f)) {
        temp_fs0 = temp_fs0 * *(f32 *)0x202294;
        temp_ft0f_2 = fabsf(m2c_initial_frame.view_sp28.value);
        if (!(m2c_initial_frame.view_sp30.value < (temp_ft0f_2 - temp_fs0))) {
            temp_ft0_2 = temp_fs0 * ((*(f32 *)((char *)(D_8005EA2C) + 0xCC)) / (*(f32 *)((char *)(D_8005EA2C) + 0xD0)));
            temp_fv0f = fabsf(m2c_initial_frame.view_sp2C.value);
            __repair_phase_storage.value = 1;
            if (!(m2c_initial_frame.view_sp30.value < (temp_fv0f - temp_ft0_2))) {
                __repair_phase_storage.value = 2;
                if (!(m2c_initial_frame.view_sp30.value < (temp_ft0f_2 + temp_fs0)) && !(m2c_initial_frame.view_sp30.value < (temp_fv0f + temp_ft0_2))) {
                    __repair_phase_storage.value = 4;
                }
            }
        }
    }
    return __repair_phase_storage.value;
}
