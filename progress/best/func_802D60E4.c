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

s32 func_8011BFB0();
s32 func_8011C070();
s32 func_802D5FA4();
s32 str_len();
extern char D_21B1B8[];
extern char D_21B1C0[];
extern char D_21B1C4[];
extern char D_21B1CC[];

void func_802D60E4(s32 arg0, s32 arg1) {
    s32 sp10;
    s8 sp14;
    s8 sp15;
    s32 temp_a3;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_4;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_5;
    void *temp_v0_6;

    temp_a3 = M2C_UNALIGNED32(M2C_FIELD(D_21B1B8, s32 *, 0));
    sp10 = temp_a3;
    sp14 = M2C_FIELD(D_21B1B8, s8 *, 4);
    sp15 = M2C_FIELD(D_21B1B8, s8 *, 5);
    temp_v0 = str_len(&sp10, temp_a3);
    temp_s3 = arg1 + 1;
    func_8011C070(&sp10 + temp_v0, temp_s3, 2);
    M2C_FIELD((temp_v0 + &sp10), s8 *, 2) = 0;
    temp_v0_2 = &sp10 + str_len(&sp10);
    M2C_FIELD(temp_v0_2, s8 *, 0) = (s8) M2C_FIELD(D_21B1C0, s8 *, 0);
    M2C_FIELD(temp_v0_2, s8 *, 1) = (s8) M2C_FIELD(D_21B1C0, s8 *, 1);
    temp_v0_3 = &sp10 + str_len(&sp10);
    M2C_FIELD(temp_v0_3, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(D_21B1C4, s32 *, 0));
    M2C_FIELD(temp_v0_3, s8 *, 4) = (s8) M2C_FIELD(D_21B1C4, s8 *, 4);
    M2C_FIELD(temp_v0_3, s8 *, 5) = (s8) M2C_FIELD(D_21B1C4, s8 *, 5);
    temp_v0_4 = str_len(&sp10);
    func_8011C070(&sp10 + temp_v0_4, arg1 + 3, 2);
    M2C_FIELD((temp_v0_4 + &sp10), s8 *, 2) = 0;
    temp_v0_5 = &sp10 + str_len(&sp10);
    M2C_FIELD(temp_v0_5, s8 *, 0) = (s8) M2C_FIELD(D_21B1C0, s8 *, 0);
    M2C_FIELD(temp_v0_5, s8 *, 1) = (s8) M2C_FIELD(D_21B1C0, s8 *, 1);
    func_8011BFB0(&sp10 + str_len(&sp10), temp_s3);
    temp_v0_6 = &sp10 + str_len(&sp10);
    M2C_FIELD(temp_v0_6, s32 *, 0) = M2C_UNALIGNED32(M2C_FIELD(D_21B1CC, s32 *, 0));
    M2C_FIELD(temp_v0_6, s8 *, 4) = (s8) M2C_FIELD(D_21B1CC, s8 *, 4);
    func_802D5FA4(&sp10);
}
