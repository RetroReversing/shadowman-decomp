/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *func_80296BC0();
extern f32 D_80036AF4;
extern char D_80036CF0[];

typedef struct { s32 w[3]; } __repair_words3;
typedef struct { unsigned char pad_0[4]; float field_4; unsigned char pad_8[4]; float field_C; float field_10; int field_14; unsigned char pad_18[56]; float field_50; float field_54; unsigned char pad_58[4]; float field_5C; unsigned char pad_60[19]; signed char field_73; } __repair_record_temp_v0;
void func_802A0AA8(s32 arg0, void *arg1) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1f;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, 0, D_80036CF0);
    if (temp_v0 != NULL) {
        temp_fv1 = *(f32 *)0x215EEC;
        (*(__repair_words3 *)((char *)(temp_v0) + 0x18)) = *(__repair_words3 *) ((s8 *) arg1 + 0x0);
        ((__repair_record_temp_v0*)temp_v0)->field_73 = 0;
        ((__repair_record_temp_v0*)temp_v0)->field_14 = 0;
        temp_fv1f = ((D_80036AF4)) + ((*(f32 *)0x215EF0));
        ((__repair_record_temp_v0*)temp_v0)->field_54 = temp_fv1;
        temp_fv0 = temp_fv1 - D_80036AF4;
        ((__repair_record_temp_v0*)temp_v0)->field_5C = temp_fv1;
        ((__repair_record_temp_v0*)temp_v0)->field_10 = temp_fv1;
        ((__repair_record_temp_v0*)temp_v0)->field_50 = (f32) *(f32 *)0x215EF4;
        ((__repair_record_temp_v0*)temp_v0)->field_C = temp_fv1;
        D_80036AF4 = temp_fv1f;
        ((__repair_record_temp_v0*)temp_v0)->field_54 = temp_fv0;
        if (temp_fv1 < temp_fv1f) {
            D_80036AF4 = 0.0f;
        }
        ((__repair_record_temp_v0*)temp_v0)->field_4 -= *(f32 *)0x215EF8;
    }
}
