extern struct { s32 a; s32 *p; u8 pad[0x368]; s32 v; } D_8007BF58;

s32 func_802D5220(s32 arg0) {
    D_8007BF58.v = *D_8007BF58.p;
    return arg0 + 4;
}
