extern u8 D_80075F20[2];
extern char D_21A15C[];
void func_802D3C90(s32 arg0)
{
  char *base = D_21A15C;
  char *p = base + (arg0 * 0x14);
  u8 a = p[3];
  u8 b = p[7];
  D_80075F20[0] = a;
 do { D_80075F20[1] = b; } while (0);
}
