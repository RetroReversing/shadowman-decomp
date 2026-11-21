/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_800619D4;

s32 func_80225484(void *arg0, void *arg1) {
    f32 temp_fv0f;
    f32 temp_fv1;
    
    void *temp_a2;
    union { void * pointer; s32 value; } __repair_phase_storage;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = (*(s32 *)((char *)(arg0) + 0x20)) + ((*(u16 *)((char *)(arg1) + 6)) * 6);
    temp_a2 = ((*(u16 *)((char *)(temp_v1) + 0)) * 6) + D_800619D4;
    __repair_phase_storage.pointer = ((*(u16 *)((char *)(temp_v1) + 6)) * 6) + D_800619D4;
    temp_fv0f = (f32) (*(s16 *)((char *)(__repair_phase_storage.pointer) + 0));
    temp_v1_2 = ((*(u16 *)((char *)((temp_v1 + 6)) + 6)) * 6) + D_800619D4;
    temp_fv1 = (f32) (*(s16 *)((char *)(__repair_phase_storage.pointer) + 2));
    __repair_phase_storage.value = 1;
    if (!((((temp_fv0f - (f32) (*(s16 *)((char *)(temp_a2) + 0))) * ((f32) (*(s16 *)((char *)(temp_v1_2) + 2)) - temp_fv1)) - (((f32) (*(s16 *)((char *)(temp_v1_2) + 0)) - temp_fv0f) * (temp_fv1 - (f32) (*(s16 *)((char *)(temp_a2) + 2))))) >= 0.0f)) {
        __repair_phase_storage.value = 0;
    }
    return __repair_phase_storage.value;
}
