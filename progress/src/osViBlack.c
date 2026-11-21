/* identical to osViBlack in TWINE (local match library) (matched), with its names changed by decompdecomp */
/* identical to osViBlack in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 func_80118330(s32 a0);
void func_80118350(s32 a0);
extern u16 *D_80027784;

/* Turns the VI blank bit (0x20 in the VI control word at D_80027784) on when
 * active is non-zero, off otherwise. Interrupts are disabled around the update. */
void osViBlack(s32 active)
{
    s32 saved_int;
    u16 *ctrl;

    saved_int = func_80118330(active);
    if (active & 0xFF) {
        ctrl = D_80027784;
        *ctrl = *ctrl | 0x20;
    } else {
        ctrl = D_80027784;
        *ctrl = *ctrl & 0xFFDF;
    }
    func_80118350(saved_int);
}
