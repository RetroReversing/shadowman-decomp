/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_80073318;
extern s32 D_80073350;
extern s32 D_80073364;

typedef struct { int value; } __repair_field_0;
typedef struct { unsigned char pad_0[4]; int field_4; int field_8; } __repair_record_arg1;
void func_802478C0(void *arg0, void *arg1) {
    D_80073364 = 1;
    (*(s32 *)((char *)(&D_80073350) + 0)) = (s32) ((__repair_field_0 *)arg0)->value;
    (*(s32 *)((char *)(&D_80073350) + 4)) = (s32) (*(s32 *)((char *)(arg0) + 4));
    (*(s32 *)((char *)(&D_80073350) + 8)) = (s32) (*(s32 *)((char *)(arg0) + 8));
    (*(s32 *)((char *)(&D_80073318) + 0)) = (s32) ((__repair_field_0 *)arg1)->value;
    (*(s32 *)((char *)(&D_80073318) + 8)) = (s32) ((__repair_record_arg1*)arg1)->field_8;
    (*(s32 *)((char *)(&D_80073318) + 4)) = (s32) ((__repair_record_arg1*)arg1)->field_4;
}
