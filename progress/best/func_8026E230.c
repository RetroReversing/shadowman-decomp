extern unsigned char D_80075F68[];
s32 func_8026E230(s32 arg0_in)
{
  s32 arg0;
  s32 idx = arg0;
  s32 mask;
  arg0 = arg0_in;
  if (arg0 < 0)
  {
    idx = arg0 + 7;
    if (1)
    {
    }
  }
  idx >>= 3;
  mask = 1 << (arg0 - (idx * 8));
 do { return D_80075F68[idx & 0xFF] & mask; } while (0);
}
