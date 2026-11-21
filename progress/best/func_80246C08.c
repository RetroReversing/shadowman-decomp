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

M2C_UNK func_802295D4(M2C_UNK *, s32, void **);     /* extern */
s32 func_80229F98();                                /* extern */
M2C_UNK func_8022F084();                            /* extern */
M2C_UNK func_8023C450();                            /* extern */
M2C_UNK func_80246CCC(M2C_UNK *, void **);          /* extern */
M2C_UNK func_80246D38();                            /* extern */
extern s32 D_8002D424;
extern M2C_UNK D_800596B0;
extern void *D_80072BB0;
extern void *D_80072BB4;

typedef struct { unsigned char pad_0[12]; unsigned short field_C; unsigned short field_E; } __repair_record_D_80072BB4;
void func_80246C08(void) {
    s32 var_v1;
    u16 temp_v0;
    u16 temp_v0_2;

    func_8022F084();
    func_8023C450();
    if (D_8002D424 & 4) {
        temp_v0 = ((__repair_record_D_80072BB4*)D_80072BB4)->field_C - 1;
        ((__repair_record_D_80072BB4*)D_80072BB4)->field_C = temp_v0;
        if (temp_v0 & 0x8000) {
            ((__repair_record_D_80072BB4*)D_80072BB4)->field_C = (u16) (M2C_FIELD(D_80072BB0, u16 *, 2) - 1);
        }
        func_80246CCC(&D_800596B0, &D_80072BB4);
        return;
    }
    if (D_8002D424 & 8) {
        temp_v0_2 = ((__repair_record_D_80072BB4*)D_80072BB4)->field_C + 1;
        ((__repair_record_D_80072BB4*)D_80072BB4)->field_C = temp_v0_2;
        if ((s16) temp_v0_2 >= M2C_FIELD(D_80072BB0, s32 *, 0)) {
            ((__repair_record_D_80072BB4*)D_80072BB4)->field_C = 0U;
        }
        func_802295D4(&D_800596B0, M2C_FIELD(D_80072BB0, s32 *, 8) + ((s16) ((__repair_record_D_80072BB4*)D_80072BB4)->field_C * 0x28), &D_80072BB0);
    }
    var_v1 = 0x2700;
    if (((__repair_record_D_80072BB4*)D_80072BB4)->field_E & 1) {
        var_v1 = 0x2000;
    }
    if ((var_v1 & D_8002D424) || (func_80229F98() == 0)) {
        func_80246D38();
    }
}
