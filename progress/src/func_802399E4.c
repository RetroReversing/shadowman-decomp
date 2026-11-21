extern f32 func_801132A0(f32);
extern f32 func_80113BE0(f32);
extern f32 D_8002D360[];

void func_802399E4(f32 arg0) {
    f32 a;
    f32 s;
    f32 c;

    a = arg0 * *(f32 *)0x202494;
    s = func_80113BE0(a);
    c = func_801132A0(a);
    D_8002D360[4] = c;
    D_8002D360[5] = -s;
    D_8002D360[7] = s;
    D_8002D360[8] = c;
}
