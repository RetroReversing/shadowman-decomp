extern s32 D_800458F0;
extern s32 D_8007C8FC;
extern s32 D_8007C2F8;
extern s32 D_8007C2F4;
extern s32 D_8007C2F0;
extern s32 D_80045AC0;
extern s32 D_80052774;
s32 func_8011BEDC();
void func_8022EEC4(s32, s32);

void func_802D2180(s32 arg0) {
    if (D_800458F0 != 0 && D_8007C8FC == arg0) {
        if (D_8007C2F8 == 1) {
            D_8007C2F4 -= D_80052774;
            if (D_8007C2F4 < 0) {
                D_8007C2F4 = D_80045AC0;
                D_8007C2F0 = func_8011BEDC() & 3;
                func_8022EEC4(arg0, (u8)(D_8007C2F0 + 1));
            }
            return;
        }
    }
    func_8022EEC4(arg0, 1);
}
