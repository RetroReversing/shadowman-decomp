extern unsigned char D_8007DB99;
extern int D_8007558C;
extern int D_80075590;
extern int D_80075594;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *func_80296BC0();
s32 func_80296CE0();
extern char D_80036D58[];
extern char D_80075568[];
extern char D_8007DB78[];

typedef struct { int field_0; int field_4; int field_8; unsigned char pad_C[28]; int field_28; unsigned char pad_2C[36]; float field_50; float field_54; unsigned char pad_58[26]; unsigned char field_72; } __repair_record_var_v1;
void *func_8029A6B8(void) {
    void *var_v1;
    f32 temp_fv0;

    var_v1 = NULL;
    if ((!D_8007DB99) && ((D_8007DB99 = 1U, var_v1 = func_80296BC0(0, 0, D_80036D58), (var_v1 != NULL)) || (func_80296CE0(1), var_v1 = func_80296BC0(0, 0, D_80036D58), (var_v1 != NULL)))) {
        ((__repair_record_var_v1*)var_v1)->field_28 = 0;
        ((__repair_record_var_v1*)var_v1)->field_54 = temp_fv0;
        temp_fv0 = *(f32 *)0x215AC4;
        ((__repair_record_var_v1*)var_v1)->field_50 = temp_fv0;
        ((__repair_record_var_v1*)var_v1)->field_0 = (s32) D_8007558C;
        ((__repair_record_var_v1*)var_v1)->field_4 = (s32) D_80075590;
        ((__repair_record_var_v1*)var_v1)->field_8 = (s32) D_80075594;
        ((__repair_record_var_v1*)var_v1)->field_72 = (u8) (((__repair_record_var_v1*)var_v1)->field_72 | 8);
    }
    return var_v1;
}
