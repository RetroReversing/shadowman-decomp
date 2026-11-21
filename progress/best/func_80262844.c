/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void *func_801043F8(s32, s32, s32);     /* extern */
s32 func_80239398(s32, void *, s32, s32 *, s32); /* extern */
s32 func_80242ED8();                            /* extern */
s32 func_8026D7D0(s32 *);                       /* extern */
u32 func_8029EB04(s32 *, s32);            /* extern */
s32 func_802D0B28(s32, s16, s32);           /* extern */
extern s32 D_20DD14;
extern s32 D_253024;
extern s32 D_8002D490;
extern s32 D_8002D4A4;
extern s32 D_8005EA14;

typedef struct { unsigned char pad[24]; int value; } __repair_field_18;
typedef struct { unsigned char pad[20]; int value; } __repair_field_14;
s32 func_80262844(void *arg0, s32 arg1) {
    f32 sp18[3];
    f32 sp28[3];
    s32 *var_s3;
    void *temp_v0;
    u32 var_s4;
    long var_s2;

    func_802D0B28(D_8005EA14, (*(s16 *)((char *)(arg0) + 0x24)), 1);
    var_s2 = 0;
    sp18[0] = (*(f32 *)((char *)(arg0) + 4));
    var_s3 = NULL;
    sp18[1] = (*(f32 *)((char *)(arg0) + 8));
    sp18[2] = (*(f32 *)((char *)(arg0) + 0xC));
    sp28[0] = (f32) (*(s32 *)((char *)(arg0) + 0x10));
    sp28[1] = (f32) ((__repair_field_14 *)arg0)->value;
    sp28[2] = 0;
    if ((arg1 == 0xD) && (func_8026D7D0(&D_20DD14) == (*(s32 *)((char *)(arg0) + 0x20)))) {
        func_80242ED8();
        if (D_8002D4A4 < (*(s32 *)((char *)(arg0) + 0x1C))) {
            var_s3 = &D_253024;
            var_s4 = func_8029EB04(sp18, 0x40200000);
            var_s2 = (s32)var_s4 > 0U;
        }
    }
    if (var_s2 != 0) {
        temp_v0 = func_801043F8(0x1C, 2, 0);
        (*(f32 *)((char *)(temp_v0) + 0)) = sp18[0];
        (*(f32 *)((char *)(temp_v0) + 4)) = sp18[1];
        (*(f32 *)((char *)(temp_v0) + 8)) = sp18[2];
        ((__repair_field_14 *)temp_v0)->value = (s32) ((__repair_field_18 *)arg0)->value;
        (*(u32 *)((char *)(temp_v0) + 0x10)) = var_s4;
        ((__repair_field_18 *)temp_v0)->value = (s32) (*(s32 *)((char *)(arg0) + 0x1C));
        func_80239398(D_8002D490, temp_v0, 0, var_s3, 0);
    }
    return 1;
}
