typedef struct { char pad[0x18]; f32 f; } S;
extern S D_80075568;
extern f32 D_80074BC0;
void func_802CC720(f32);
void func_802CC460(s32);

void func_802CCD30(void) {
    f32 v = D_80075568.f;
    D_80075568.f = v + (*(f32 *)0x218768 - v) * D_80074BC0 * *(f32 *)0x21876C;
    func_802CC720(*(f32 *)0x218770);
    func_802CC460(5);
}
