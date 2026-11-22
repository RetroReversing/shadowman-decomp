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

s32 func_80107900();
s32 func_80107908();
s32 func_801079E0();
s32 func_80107A60();
extern char D_8004B420[];
extern char D_80080000[];

void func_801077E0(void *arg0_in) {
  void * arg0;
    char *__base_D_8004B420;
    s32 temp_a0;
    s32 temp_a0_2;
    void *temp_v1;
    void *temp_v1_2;
  arg0 = arg0_in;

    if (M2C_FIELD(arg0, u8 *, 0xB) != 0xFF) {
        if (M2C_FIELD(arg0, u16 *, 8) & 1) {
char *__branch___base_D_8004B420;

            __branch___base_D_8004B420 = D_8004B420;
            M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0xB) * 4) + __branch___base_D_8004B420), u8 *, 0x1583) = 0xFF;
            temp_a0 = M2C_FIELD(arg0, u8 *, 0xB);
            temp_v1 = (temp_a0 * 4) + __branch___base_D_8004B420;
            if (M2C_FIELD(temp_v1, u8 *, 0x1582) != 0xFF) {
                func_80107900(temp_a0, 0, M2C_FIELD(temp_v1, u16 *, 0x1580) << 0xC, (s32) &D_80080000 & 0x03FFFFFF, -1);
                return;
            }
            /* Duplicate return node #6. Try simplifying control flow for better match */
            func_80107A60(M2C_FIELD(arg0, u8 *, 0xB), 0xFF);
            func_80107908();
            return;
        }
        M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0xB) * 4) + __base_D_8004B420), u8 *, 0x1582) = 0xFF;
        temp_a0_2 = M2C_FIELD(arg0, u8 *, 0xB);
        temp_v1_2 = (void *)((temp_a0_2 * 4)); temp_v1_2 = (void *)((char *)temp_v1_2 + (s32)(__base_D_8004B420));
        if (M2C_FIELD(temp_v1_2, u8 *, 0x1583) == 0xFF) {
            func_80107A60(M2C_FIELD(arg0, u8 *, 0xB), 0xFF);
            func_80107908();
            return;
        }
        func_801079E0(temp_a0_2, 0, M2C_FIELD(temp_v1_2, u16 *, 0x1580) << 0xC, -1, ((s32) &D_80080000 & 0x03FFFFFF) + (M2C_FIELD(temp_v1_2, u8 *, 0x1583) << 0xC), 7);
        M2C_FIELD(arg0, u8 *, 0xB) = 0xFFU;
    }
}
