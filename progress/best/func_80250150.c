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

M2C_UNK func_80109918(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_80230EC0(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_80236A18(M2C_UNK *, M2C_UNK *, void *); /* extern */
M2C_UNK func_80239A3C(f32);                         /* extern */
M2C_UNK func_8023A0DC(M2C_UNK, f32, f32, f32 *, M2C_UNK *); /* extern */
M2C_UNK func_80250348();                            /* extern */
M2C_UNK func_80263D48(M2C_UNK *);                   /* extern */
extern M2C_UNK D_8002D390;
extern M2C_UNK D_8002DC88;
extern s32 D_8002DCA0;
extern M2C_UNK D_8002DCA4;
extern s32 D_8002DCB8;
extern M2C_UNK D_8004AEA0;
extern M2C_UNK D_80073370;
extern M2C_UNK D_80073380;
extern M2C_UNK D_80075568;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x48, 0x4c], gap at: 0x40. */
void func_80250150(void *arg0) {
    union {
        unsigned char bytes[16];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[4]; f32 value; } view_sp1C;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
    } m2c_initial_frame;

             
    M2C_UNK *temp_s3;
    f32 temp_fa1;
    f32 temp_fs0f;
    s32 temp_v0;
    void *temp_s4;

    temp_s4 = M2C_FIELD(arg0, void **, 8);
    temp_s3 = &D_8002DC88 + 4;
    if (M2C_FIELD(arg0, s16 *, 0x16) == 0) {
        temp_v0 = func_80230EC0(&D_8004AEA0, 0x135);
        D_8002DCA0 = temp_v0;
        D_8002DCB8 = temp_v0;
        M2C_FIELD(arg0, s16 *, 0x16) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x16) + 1);
        func_80109918(temp_s4 + 0x24, 0x7F, 0x145);
        func_80250348();
        return;
    }
    func_80263D48(temp_s3);
    func_80263D48(&D_8002DCA4);
    M2C_FIELD(temp_s4, f32 *, 0x24) = (f32) M2C_FIELD(&D_8002DC88, f32 *, 4);
    temp_fs0f = *(f32 *)0x2031B0;
    M2C_FIELD(temp_s4, f32 *, 0x28) = (f32) ((M2C_FIELD(temp_s3, f32 *, 4) - *(f32 *)0x2031AC) + temp_fs0f);
    M2C_FIELD(temp_s4, f32 *, 0x2C) = (f32) M2C_FIELD(temp_s3, f32 *, 8);
    func_80236A18(temp_s3, &D_8002DCA4, temp_s4 + 0x18);
    M2C_FIELD(&D_80075568, f32 *, 0x18) = (f32) M2C_FIELD(temp_s4, f32 *, 0x18);
    M2C_FIELD(&D_80075568, f32 *, 0x1C) = (f32) M2C_FIELD(temp_s4, f32 *, 0x1C);
    M2C_FIELD(&D_80075568, f32 *, 0x20) = (f32) M2C_FIELD(temp_s4, f32 *, 0x20);
    func_80239A3C(M2C_FIELD(temp_s4, f32 *, 0x1C));
    func_8023A0DC(0, *(f32 *)0x2031B4, 170.0f, &m2c_initial_frame.view_sp18.value, &D_8002D390);
    temp_fa1 = *(f32 *)0x2031B8;
    M2C_FIELD(&D_80075568, f32 *, 0x24) = (f32) (M2C_FIELD(&D_8002DC88, f32 *, 4) + m2c_initial_frame.view_sp18.value);
    M2C_FIELD(&D_80075568, f32 *, 0x2C) = (f32) (M2C_FIELD(temp_s3, f32 *, 8) + m2c_initial_frame.view_sp20.value);
    M2C_FIELD(&D_80075568, f32 *, 0x28) = (f32) (M2C_FIELD(temp_s3, f32 *, 4) + m2c_initial_frame.view_sp1C.value + temp_fs0f);
    func_8023A0DC(0, temp_fa1, temp_fa1, &m2c_initial_frame.view_sp18.value, &D_8002D390);
    M2C_FIELD(&D_80073370, f32 *, 0) = (f32) (M2C_FIELD(&D_8002DC88, f32 *, 4) + m2c_initial_frame.view_sp18.value);
    M2C_FIELD(&D_80073370, f32 *, 8) = (f32) (M2C_FIELD(temp_s3, f32 *, 8) + m2c_initial_frame.view_sp20.value);
    M2C_FIELD(&D_80073370, f32 *, 4) = (f32) (M2C_FIELD(temp_s3, f32 *, 4) + m2c_initial_frame.view_sp1C.value + temp_fs0f);
    M2C_FIELD(temp_s4, f32 *, 0x1C) = (f32) (M2C_FIELD(temp_s4, f32 *, 0x1C) + *(f32 *)0x2031BC);
    M2C_FIELD(&D_80073380, f32 *, 0) = (f32) M2C_FIELD(temp_s4, f32 *, 0x18);
    M2C_FIELD(&D_80073380, f32 *, 4) = (f32) M2C_FIELD(temp_s4, f32 *, 0x1C);
    M2C_FIELD(&D_80075568, f32 *, 0xC) = 0.0f;
    M2C_FIELD(&D_80075568, f32 *, 0x10) = 0.0f;
    M2C_FIELD(&D_80075568, f32 *, 0x14) = 0.0f;
    M2C_FIELD(&D_80073380, f32 *, 8) = (f32) M2C_FIELD(temp_s4, f32 *, 0x20);
}
