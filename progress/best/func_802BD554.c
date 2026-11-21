/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern unsigned char D_8007BE64;
extern unsigned char D_8005E9E4;
extern unsigned char D_8007BE65;
extern unsigned char D_8005E9E5;
extern unsigned char D_8007BE66;
extern unsigned char D_8005E9E6;
extern float D_80075594;
extern float D_8007558C;
extern float D_80075590;
extern float D_8007BE84;
extern float D_8007BD9C;
s32 func_80240418();
s32 func_802BD66C();
extern f32 D_8002D2C8;
extern f32 D_8002D2CC;
extern f32 D_8002D2D0;
extern f32 D_80074BC0;
extern char D_80075568[];
extern char D_8007BD98[];
extern f32 D_8007BDE0;
extern char D_8007BE80[];
extern f32 D_8007BE90;

void func_802BD554(void) {
    char *__base_D_80075568;
    unsigned char *__base_D_8007BE65;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 temp_fs0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 temp_fv1f_2;

    temp_fv1f = *(f32 *)0x218144;
    D_8007BE64 = (u8) D_8005E9E4;
    __base_D_8007BE65 = &D_8007BE65;
    (*__base_D_8007BE65) = (u8) D_8005E9E5;
    D_8007BE66 = (u8) D_8005E9E6;
    sp18 = (D_8002D2D0 * temp_fv1f) + (u32)D_80075594;
    sp10 = (D_8007558C) + ((D_8002D2C8 * temp_fv1f));
    temp_fs0 = D_80074BC0 * *(f32 *)0x218148;
    sp14 = (D_8002D2CC * temp_fv1f) + D_80075590;
    __base_D_80075568 = D_80075568;
    if (func_80240418(__base_D_80075568 + 0x24, &sp10, 0x41000000) != 0) {
        if (D_8007BE90 > 0.0f) {
            D_8007BE90 -= temp_fs0;
        }
        func_802BD66C();
        return;
    }
    temp_fv0f = *(f32 *)0x21814C;
    if (temp_fv0f > D_8007BE90) {
        D_8007BE90 += temp_fs0;
    }
    if (temp_fv0f < D_8007BE90) {
        D_8007BE90 = temp_fv0f;
    }
    temp_fv1f_2 = (f32) D_8007BE64 * D_8007BE90;
    temp_fv1 = (f32) (*__base_D_8007BE65) * D_8007BE90;
    temp_fv0f_2 = (f32) D_8007BE66 * D_8007BE90;
    D_8007BDE0 = temp_fv1;
    D_8007BE84 = temp_fv1f_2;
    D_8007BD9C = temp_fv0f_2;
    D_8005E9E4 = (u8) (s32) temp_fv1f_2;
    D_8005E9E5 = (u8) (s32) temp_fv1;
    D_8005E9E6 = (u8) (s32) temp_fv0f_2;
}
