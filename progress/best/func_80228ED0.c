/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80103878(s32, s32, s32);           /* extern */
s32 func_80104980(s16, s32, s32, s32 *);    /* extern */
s32 func_80104BC0(s32, s16);                        /* extern */
s32 func_80221E98(s32, s32, u16);                    /* extern */
s32 func_802D5B40();                            /* extern */
extern u16 D_8002C112;
extern s32 D_8002D18C;
extern s32 D_8004AE18;
extern s32 D_80059670;
extern s8 D_8007DB7E;

typedef struct { int field_0; int field_4; float field_8; int field_C; signed char field_10; } __repair_record___base_D_80059670;
void func_80228ED0(s32 arg0, s16 arg1) {
    s32 *__base_D_80059670;
    s32 temp_v0;
    u16 *__base_D_8002C112;

    __base_D_8002C112 = &D_8002C112;

    func_802D5B40();
    temp_v0 = func_80103878(func_80104BC0(arg0, arg1) + 1, 2, 0);
    __base_D_80059670 = &D_80059670;
    (((__repair_record___base_D_80059670*)__base_D_80059670)->field_4) = (int)temp_v0;
    (((__repair_record___base_D_80059670*)__base_D_80059670)->field_0) = temp_v0;
    func_80104980(arg1, temp_v0, arg0, &D_8004AE18);
    (((__repair_record___base_D_80059670*)__base_D_80059670)->field_10) = 0;
    (((__repair_record___base_D_80059670*)__base_D_80059670)->field_C) = 0;
    (((__repair_record___base_D_80059670*)__base_D_80059670)->field_4) = temp_v0;
    D_8007DB7E = 1;
    (((__repair_record___base_D_80059670*)__base_D_80059670)->field_8) = (f32) (*__base_D_8002C112);
    D_8002D18C = func_80221E98(arg0, 0x35, (*__base_D_8002C112));
}
