/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80246F50(s16, s32);                /* extern */
s32 func_8025FE34(s16);                             /* extern */
s32 func_802C074C(s16, s32, s32);       /* extern */
extern s32 D_8002DBD0;
extern s32 D_80075F58;
extern s16 D_80075F5A;

void func_802C0C90(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_s3;

    if ((arg1 != 1) || ((u32)D_80075F5A != 0)) {
        temp_s2 = (*(s32 *)((char *)(&D_8002DBD0) + 0x14));
        if (temp_s2 == -1) {
            if (func_8025FE34((*(s16 *)((char *)(&D_80075F58) + 0xA))) != 0) {
                func_802C074C((*(s16 *)((char *)(&D_80075F58) + 0xA)), 1, 0x50);
                func_80246F50((*(s16 *)((char *)(&D_80075F58) + 0xA)), 1);
            }
            temp_s3 = (*(s32 *)((char *)(&D_8002DBD0) + 0x14));
            if ((temp_s3 == temp_s2) && (arg0 != 0) && ((*(s32 *)((char *)(&D_8002DBD0) + 4)) != 7) && ((*(s16 *)((char *)(&D_80075F58) + 8)) != 7)) {
                do { func_80246F50(7, 1); } while (0);
                func_802C074C(7, 1, 0x50);
                if ((*(s16 *)((char *)(&D_80075F58) + 8)) == 7) {
                    (*(s16 *)((char *)(&D_80075F58) + 8)) = (s16) temp_s3;
                }
            }
        }
    }
}
