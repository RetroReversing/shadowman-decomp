/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern float D_8007558C;
extern float D_80075590;
extern float D_80075594;
void *func_80239730();
extern s32 D_80030C58;
extern void *D_80072CAC;
extern char D_80075568[];

typedef struct { int value; } __repair_field_0;
void func_80250C2C(void *arg0, void *arg1) {
    s32 __repair_store_0;
    s32 __repair_store_1;
    s32 __repair_store_2;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;

    (*(s32 **)((char *)(arg1) + 4)) = D_80075568;
    (*(f32 *)((char *)(arg1) + 0x24)) = (f32) (D_8007558C - (*(f32 *)((char *)(arg0) + 0x24)));
    var_s0 = NULL;
    (*(f32 *)((char *)(arg1) + 0x28)) = (f32) (D_80075590 - (*(f32 *)((char *)(arg0) + 0x28)));
    (*(f32 *)((char *)(arg1) + 0x2C)) = (f32) (D_80075594 - (*(f32 *)((char *)(arg0) + 0x2C)));
    temp_v0 = func_80239730(*(s32 *)(((*(s8 *)((char *)(arg0) + 0x71)) * 4) + D_80030C58), 2, 0x21F);
    if (temp_v0 != NULL) {
        var_s0 = (*(void **)((char *)(temp_v0) + 8));
        temp_a0 = (*(void **)((char *)(var_s0) + 0x6C));
        D_80072CAC = var_s0;
        if (((__repair_field_0 *)temp_a0)->value != 0) {
            ((__repair_field_0 *)temp_a0)->value = 0;
            (*(s32 *)((char *)(temp_a0) + 0x18)) = 0;
            __repair_store_0 = (s32) (*(s32 *)((char *)(temp_a0) + 0xC));
            __repair_store_1 = (s32) (*(s32 *)((char *)(temp_a0) + 0x10));
            __repair_store_2 = (s32) (*(s32 *)((char *)(temp_a0) + 0x14));
            (*(s32 *)((char *)(var_s0) + 0x24)) = __repair_store_0;
            (*(s32 *)((char *)(var_s0) + 0x28)) = __repair_store_1;
            (*(s32 *)((char *)(var_s0) + 0x2C)) = __repair_store_2;
        }
    }
    (*(void **)((char *)((arg1 + (1 * 4))) + 4)) = var_s0;
    (*(f32 *)((char *)(temp_v0_2) + 0x24)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x24)) - (*(f32 *)((char *)(arg0) + 0x24)));
    temp_v0_2 = arg1 + (1 * 0xC);
    (*(f32 *)((char *)(temp_v0_2) + 0x28)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x28)) - (*(f32 *)((char *)(arg0) + 0x28)));
    (*(f32 *)((char *)(temp_v0_2) + 0x2C)) = (f32) ((*(f32 *)((char *)(var_s0) + 0x2C)) - (*(f32 *)((char *)(arg0) + 0x2C)));
}
