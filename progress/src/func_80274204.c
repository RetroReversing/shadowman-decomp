/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */

s32 func_80272100();
extern char D_212078[];
extern void *D_8007AFF8;

typedef struct { unsigned char pad[68]; int value; } __repair_field_44;
s32 func_80274204(s32 arg0) {
    char *__base_D_212078;
    if (!((((__repair_field_44 *)D_8007AFF8)->value) & 0x2000)) {
        __base_D_212078 = D_212078;
        (*(u16 *)((char *)(D_8007AFF8) + 0x5A)) = (u16) (*(u16 *)((char *)((((*(u8 *)((char *)(D_8007AFF8) + 0x40)) * 0x6C) + __base_D_212078)) + 6));
    }
    (((__repair_field_44 *)D_8007AFF8)->value) |= 0x2000;
    (*(s8 *)((char *)(D_8007AFF8) + 0x54)) = 0xA;
    return func_80272100(arg0 & 0xFF) & 0xFF;
}
