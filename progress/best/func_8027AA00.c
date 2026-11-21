typedef struct { unsigned char pad_0[68]; int flags; unsigned char pad_48[88]; short f_A0; unsigned char pad_A2[4]; short f_A6; unsigned char pad_A8[28]; int f_C4; unsigned char pad_C8[8]; float f_D0; float f_D4; unsigned char pad_D8[48]; int f_108; } Rec;
extern void *D_8006A4FC;
extern Rec *D_8007AFF8;
s32 func_80109918(void *, s32, s32);
void func_8027003C(void);
void func_8027006C(void);
void func_80270090(s32);
void func_8027AA00(void) {
    s32 t;
    Rec *p;
    func_8027003C();
    D_8007AFF8->flags &= ~2;
    D_8007AFF8->f_D4 = *(f32 *)((char *)D_8006A4FC + 0x28);
    func_80270090(0x14);
    D_8007AFF8->f_D0 = *(f32 *)0x2144B8;
    t = func_80109918((char *)D_8006A4FC + 0x24, 0x7F, 0x51);
    p = D_8007AFF8;
    p->f_108 = t;
    p->flags |= 4;
    p->f_A0 = 6;
    p->f_C4 = 0;
    p->f_A6 = 0x96;
    p->flags |= 0x4000;
    func_8027006C();
}
