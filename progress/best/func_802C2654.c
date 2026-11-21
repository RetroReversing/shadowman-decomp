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

extern int D_8007BE74;
s32 func_80239480();
s32 func_8023959C();
s32 func_802C1EB4();
f32 func_802C24F0();
extern char D_2C1E7C[];
extern s32 D_8002D420;
extern s32 D_8002DBD4;
extern s32 D_8002DBE4;
extern f32 D_80044E9C;
extern s32 D_8004588C;
extern s32 D_80045890;
extern s32 D_80045894;
extern s32 D_800752D0;
extern s16 D_80075518;
extern s16 D_8007551A;
extern void *D_8007BDE8;
extern void *D_8007BDEC;
extern char D_8007BE70[];
extern void *D_8007BE98;
extern void *D_8007BE9C;
extern f32 D_8007BEB4;

void func_802C2654(void) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    s32 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = D_80045894 + 1;
    D_80045894 = temp_v0;
    if (temp_v0 >= 5) {
        D_80045894 = 0;
    }
    D_80045890 = D_80045894;
    *(s32 *)(void * *)(D_8007BE98 + 0) = *(s32 *)(void * *)(D_8007BDE8 + 0);
    *(s32 *)(void * *)(D_8007BE98 + 4) = (void *) *(void * *)(D_8007BDE8 + 4);
    if ((*(s32 *)(void * *)(D_8007BDE8 + 0) != NULL) && (M2C_FIELD(M2C_FIELD(*(s32 *)(void * *)(D_8007BDE8 + 0), void **, 0x88), s16 *, 0x16) == 0x10)) {
        *(s32 *)(void * *)(D_8007BE98 + 0) = NULL;
    }
    if (*(s32 *)(void * *)(D_8007BE98 + 4) != NULL) {
        if (M2C_FIELD(M2C_FIELD(*(s32 *)(void * *)(D_8007BE98 + 4), void **, 0x88), s16 *, 0x16) == 0x10) {
            *(s32 *)(void * *)(D_8007BE98 + 4) = NULL;
        }
    }
    *(void * *)(D_8007BDE8 + 0) = NULL;
    *(s32 *)(void * *)(D_8007BDE8 + 4) = NULL;
    if (D_800752D0 == 0) {
        if ((D_80075518 != -1) && (D_8004588C = 0, D_8007BE74 = 0, temp_fv0 = func_802C24F0(D_8002DBD4, &D_8007BE98), temp_fv0_2 = temp_fv0 * temp_fv0, D_8007BEB4 = temp_fv0_2, (temp_fv0_2 > 0.0f))) {
            D_80044E9C = *(f32 *)0x218378;
            if (*(s32 *)(void * *)(D_8007BE98 + 0) != NULL) {
                temp_a0 = M2C_FIELD(*(s32 *)(void * *)(D_8007BE98 + 0), void **, 0x88);
                func_802C1EB4(temp_a0, M2C_FIELD(temp_a0, s32 *, 8));
            }
            if (!(D_8002D420 & 0x01800020) || (*(s32 *)(void * *)(D_8007BDE8 + 0) == NULL)) {
                func_8023959C(D_2C1E7C);
                func_80239480(D_2C1E7C);
            }
        }
        if ((D_8007551A != -1) && (D_8004588C = 1, D_8007BE74 = 0, temp_fv0_3 = func_802C24F0(D_8002DBE4), temp_fv0_4 = temp_fv0_3 * temp_fv0_3, D_80044E9C = *(f32 *)0x21837C, D_8007BEB4 = temp_fv0_4, (temp_fv0_4 > 0.0f))) {
            if (D_8007BE9C != NULL) {
                temp_a0_2 = M2C_FIELD(D_8007BE9C, void **, 0x88);
                func_802C1EB4(temp_a0_2, M2C_FIELD(temp_a0_2, s32 *, 8));
            }
            if (!(D_8002D420 & 0x01800020) || (*(s32 *)(void * *)(D_8007BDE8 + 4) == NULL) || (*(s32 *)(void * *)(D_8007BDE8 + 0) == *(s32 *)(void * *)(D_8007BDE8 + 4))) {
                func_8023959C(D_2C1E7C);
                func_80239480(D_2C1E7C);
            }
        }
    }
    if ((*(s32 *)(void * *)(D_8007BE98 + 0) != NULL) && (M2C_FIELD(M2C_FIELD(*(s32 *)(void * *)(D_8007BE98 + 0), void **, 0x88), s32 *, 0x18) == 1)) {
        temp_v0_2 = M2C_FIELD(*(s32 *)(void * *)(D_8007BE98 + 0), void **, 0x6C);
        M2C_FIELD(temp_v0_2, s32 *, 0x48) &= ~1;
    }
    if ((D_8007BE9C != NULL) && (M2C_FIELD(M2C_FIELD(D_8007BE9C, void **, 0x88), s32 *, 0x18) == 1)) {
        temp_v0_3 = M2C_FIELD(D_8007BE9C, void **, 0x6C);
        M2C_FIELD(temp_v0_3, s32 *, 0x48) &= ~1;
    }
    if ((*(s32 *)(void * *)(D_8007BDE8 + 0) != NULL) && (M2C_FIELD(M2C_FIELD(*(s32 *)(void * *)(D_8007BDE8 + 0), void **, 0x88), s32 *, 0x18) == 1)) {
        temp_v1 = M2C_FIELD(*(s32 *)(void * *)(D_8007BDE8 + 0), void **, 0x6C);
        M2C_FIELD(temp_v1, s32 *, 0x48) |= 1;
    }
    if ((D_8007BDEC != NULL) && (M2C_FIELD(M2C_FIELD(D_8007BDEC, void **, 0x88), s32 *, 0x18) == 1)) {
        temp_v1_2 = M2C_FIELD(D_8007BDEC, void **, 0x6C);
        M2C_FIELD(temp_v1_2, s32 *, 0x48) |= 1;
    }
}
