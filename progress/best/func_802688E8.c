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

extern float D_80075634;
extern float D_80075638;
extern float D_8007563C;
extern float D_8007562C;
extern int D_80075690;
s32 func_8011365C();
s32 func_8021D4C0();
s32 func_80222860();
s32 func_80223F4C();
s32 func_80232908();
s32 func_802397D0();
s32 func_8023981C();
s32 func_802398C8();
s32 func_8023B094();
s32 func_802D0B28();
extern s32 D_8002C1B0;
extern s32 D_8002D2B4;
extern s32 D_800305A0;
extern void *D_8005387C;
extern s32 D_8005E6F0;
extern void *D_8005E9F0;
extern s32 D_8005EA14;
extern void *D_8005EA2C;
extern char D_80075610[];
extern u8 D_8007DB98;

typedef struct { int field_0; int field_4; int field_8; } __repair_record_D_8005387C;
void func_802688E8(void) {
    s32 sp10;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    if ((D_800305A0 != 0) && (D_8007DB98 == 0)) {
        func_802D0B28(D_8005EA14, D_8002D2B4, 0);
        temp_v0 = func_80232908(D_8005EA2C);
        D_8005E6F0 = temp_v0;
        if ((((s32) *(s32 *)(M2C_FIELD(D_8005E9F0, s32 *, 0x18) + (temp_v0 >> 3)) >> (temp_v0 & 7)) & 1) && (func_80222860(D_8005EA2C + 0x3C, &sp10) != 0)) {
            temp_v0_2 = func_8021D4C0();
            if (temp_v0_2 != 0) {
                func_8011365C(&sp10, temp_v0_2);
                ((__repair_record_D_8005387C*)D_8005387C)->field_0 = 0xD9FFFFFF;
                ((__repair_record_D_8005387C*)D_8005387C)->field_4 = 0x200004;
                temp_v0_3 = D_8005387C + 8;
                ((__repair_record_D_8005387C*)D_8005387C)->field_8 = 0xE200001C;
                M2C_FIELD(temp_v0_3, s32 *, 4) = 0x0F0A4000;
                D_8005387C = temp_v0_3;
                D_80075634 = (f32) M2C_FIELD(D_8005EA2C, f32 *, 0);
                D_80075638 = (f32) M2C_FIELD(D_8005EA2C, f32 *, 4);
                D_8005387C = temp_v0_3 + 8;
                D_8007563C = (f32) M2C_FIELD(D_8005EA2C, f32 *, 8);
                D_8007562C = (f32) (D_8007562C + *(f32 *)0x20E1D4);
                func_8023B094(D_80075610, 0xE200001C, 0x200004);
                func_802397D0(D_8005EA2C + 0x3C);
                temp_a0 = D_8005EA2C + 0x3C;
                func_802398C8(temp_a0, D_80075610 + 0x34, temp_a0);
                D_8002C1B0 = D_80075690;
                func_80223F4C(D_80075610, 1);
                func_8023981C(D_8005EA2C + 0x3C);
                temp_a0_2 = D_8005387C;
                temp_v0_4 = D_8005387C + 8;
                M2C_FIELD(temp_a0_2, s32 *, 0) = 0xE7000000;
                D_8005387C = temp_v0_4;
                D_8005387C = temp_v0_4 + 8;
                M2C_FIELD(temp_a0_2, s32 *, 4) = 0;
                ((__repair_record_D_8005387C*)D_8005387C)->field_8 = 0xD9FFFFFF;
                M2C_FIELD(temp_v0_4, s32 *, 4) = 1;
            }
        }
    }
}
