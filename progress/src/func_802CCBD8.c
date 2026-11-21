extern void func_80265348();
extern f32 D_80074BC0;
extern struct { f32 pad[6]; f32 x; } D_80075568;

void func_802CCBD8(void) {
    if (D_80075568.x < *(f32 *)0x218758) {
        do {
            D_80075568.x += *(f32 *)0x21875C;
        } while (D_80075568.x < *(f32 *)0x218758);
    }
    D_80075568.x = D_80075568.x - D_80075568.x * (D_80074BC0 * *(f32 *)0x218760);
    func_80265348();
}
