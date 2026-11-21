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

M2C_UNK func_8023A0DC(f32, f32, M2C_UNK, f32 *, void *); /* extern */
M2C_UNK func_8029C490(f32 *);                       /* extern */
extern M2C_UNK D_80073370;
extern M2C_UNK D_80073380;

void func_8025008C(void *arg0) {
    f32 __repair_store_0;
    f32 __repair_store_1;
    f32 __repair_store_2;
    f32 __repair_store_3;
    f32 __repair_store_4;
    f32 __repair_store_5;
    union {
        unsigned char bytes[16];
        struct { f32 value; } view_sp18;
        struct { unsigned char pad[4]; f32 value; } view_sp1C;
        struct { unsigned char pad[8]; f32 value; } view_sp20;
    } m2c_initial_frame;

             
             
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 8);
    __repair_store_0 = (f32) M2C_FIELD(&D_80073370, f32 *, 0);
    __repair_store_1 = (f32) M2C_FIELD(&D_80073370, f32 *, 4);
    __repair_store_2 = (f32) M2C_FIELD(&D_80073370, f32 *, 8);
    __repair_store_3 = (f32) M2C_FIELD(&D_80073380, f32 *, 0);
    __repair_store_4 = (f32) M2C_FIELD(&D_80073380, f32 *, 4);
    __repair_store_5 = (f32) M2C_FIELD(&D_80073380, f32 *, 8);
    M2C_FIELD(temp_v1, f32 *, 0x24) = __repair_store_0;
    M2C_FIELD(temp_v1, f32 *, 0x28) = __repair_store_1;
    M2C_FIELD(temp_v1, f32 *, 0x2C) = __repair_store_2;
    M2C_FIELD(temp_v1, f32 *, 0x18) = __repair_store_3;
    M2C_FIELD(temp_v1, f32 *, 0x1C) = __repair_store_4;
    M2C_FIELD(temp_v1, f32 *, 0x20) = __repair_store_5;
    func_8023A0DC(*(f32 *)0x2031A4, *(f32 *)0x2031A8, 0, &m2c_initial_frame.view_sp18.value, temp_v1 + 0x34);
    m2c_initial_frame.view_sp18.value = M2C_BITWISE(f64, (m2c_initial_frame.view_sp1C.value + M2C_FIELD(&D_80073370, f32 *, 4)));
    m2c_initial_frame.view_sp20.value += M2C_FIELD(&D_80073370, f32 *, 8);
    func_8029C490(&m2c_initial_frame.view_sp18.value);
}
