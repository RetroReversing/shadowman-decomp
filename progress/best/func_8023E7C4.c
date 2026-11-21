static __inline__ int __repair_inline(s32 a, s32 b) { return a > b; }
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023A154(f32, f32, void *, f32, f32 *, void *); /* extern */

void func_8023E7C4(void *arg0, void *arg1) {
    union {
        unsigned char bytes[20];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[4]; f32 value; } view_sp1C;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
    } m2c_initial_frame;

             
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    void *var_a0;
    f32 var_fv1;
    f32 var_ft0f;
    f32 var_ft1;
    f32 var_fv0f;
    f32 var_ft0;
    f32 var_fv1f;
    s32 temp_v1;
    s32 var_a3;
    void *temp_a2;
    void *temp_s0;
    f32 temp_fv0_4;

    var_a0 = arg0;
    if (var_a0 != NULL) {
        var_a3 = 1;
        temp_a2 = (*(void **)((char *)(var_a0) + 0x40));
        temp_s0 = (*(s32 *)((char *)(arg1) + 0x64)) + 0xC;
        temp_v1 = (*(s16 *)((char *)(var_a0) + 0x3E)) - 1;
        var_ft0 = (*(f32 *)((char *)(temp_a2) + 0x24));
        var_ft0f = (*(f32 *)((char *)(temp_a2) + 0x28));
        var_ft1 = (*(f32 *)((char *)(temp_a2) + 0x2C));
        var_fv1 = var_ft0;
        var_fv0f = var_ft0f;
        var_fv1f = var_ft1;
        if (__repair_inline(temp_v1, 1)) {
            var_a0 = temp_a2 + 0x2C + 0x40;
            do {
                temp_fv0 = (*(f32 *)((char *)(var_a0) + -8));
                if (temp_fv0 < var_ft0) {
                    var_ft0 = temp_fv0;
                }
                if (var_fv1 < temp_fv0) {
                    var_fv1 = temp_fv0;
                }
                temp_fv0_2 = (*(f32 *)((char *)(var_a0) + -4));
                if (temp_fv0_2 < var_ft0f) {
                    var_ft0f = temp_fv0_2;
                }
                if (var_fv0f < temp_fv0_2) {
                    var_fv0f = temp_fv0_2;
                }
                temp_fv0_3 = (*(f32 *)((char *)(var_a0) + 0));
                if (temp_fv0_3 < var_ft1) {
                    var_ft1 = temp_fv0_3;
                }
                if (var_fv1f < temp_fv0_3) {
                    var_fv1f = temp_fv0_3;
                }/*__repair_loop_weight*/do {do {do {
                var_a3 += 1;} while (0);} while (0);} while (0);
                var_a0 += 0x40;
            } while (var_a3 < temp_v1);
        }
        temp_fv0_4 = *(f32 *)0x202630;
        func_8023A154((var_ft0 + ((var_fv1 - var_ft0) * temp_fv0_4)) - (*(f32 *)((char *)(arg1) + 0x24)), (var_ft0f + ((var_fv0f - var_ft0f) * temp_fv0_4)) - (*(f32 *)((char *)(arg1) + 0x28)), var_a0, (var_ft1 + ((var_fv1f - var_ft1) * temp_fv0_4)) - (*(f32 *)((char *)(arg1) + 0x2C)), &m2c_initial_frame.view_sp18.value, arg1 + 0x34);
        (*(s16 *)((char *)(temp_s0) + 0)) = (s16) (s32) m2c_initial_frame.view_sp18.value;
        (*(s16 *)((char *)(temp_s0) + 2)) = (s16) (s32) m2c_initial_frame.view_sp1C.value;
        (*(s16 *)((char *)(temp_s0) + 4)) = (s16) (s32) m2c_initial_frame.view_sp20.value;
    }
}
