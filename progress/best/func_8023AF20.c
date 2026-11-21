/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802244AC(void *, s32);             /* extern */
s32 func_802383C0();                            /* extern */
s32 func_802397D0(s32);                         /* extern */
s32 func_8023981C(s32);                         /* extern */
s32 func_802398C8(s32, void *, s32);            /* extern */
s32 func_8023AFA4(void *);                      /* extern */
s32 func_8023B83C(void *);                      /* extern */
extern s32 D_8002C1B0;
extern s32 D_8005EA2C;

typedef struct { unsigned char pad_0[100]; void * field_64; unsigned char pad_68[16]; unsigned short field_78; unsigned char pad_7A[6]; int field_80; } __repair_record_arg0;
void func_8023AF20(void *arg0) {
    s32 *__base_D_8005EA2C;
    s32 temp_a0;

    if ((*(u16 *)((char *)((((__repair_record_arg0*)arg0)->field_64)) + 0x3C)) & 8) {
        func_802383C0();
    }
    __base_D_8005EA2C = &D_8005EA2C;
    func_802397D0((*__base_D_8005EA2C) + 0x3C);
    temp_a0 = (*__base_D_8005EA2C); temp_a0 += 0x3C;
    /*__repair_pointer_balance*/if ((unsigned long)__base_D_8005EA2C & 0x100) {
func_802398C8(((*__base_D_8005EA2C) + 0x3C), arg0 + 0x34, ((*__base_D_8005EA2C) + 0x3C));
} else {
func_802398C8(((*__base_D_8005EA2C) + 0x3C), arg0 + 0x34, ((*__base_D_8005EA2C) + 0x3C));
}
    func_8023B83C(arg0);
    D_8002C1B0 = (((__repair_record_arg0*)arg0)->field_80);
    if ((((__repair_record_arg0*)arg0)->field_78) & 2) {
        func_8023AFA4(arg0);
        return;
    }
    func_8023981C((*(&D_8005EA2C)) + 0x3C);
    func_802244AC(arg0, 0);
}
