extern s32 func_80108B30();
extern struct { s32 pad[4]; s32 state; s32 pad2[10]; s32 f3c; } D_8007C2A0;

void func_802D6990(void) {
    if (D_8007C2A0.state == 1 && D_8007C2A0.f3c == -1 && func_80108B30() == 0) {
        D_8007C2A0.state = 0;
    }
}
