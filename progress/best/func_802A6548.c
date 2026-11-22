s32 func_80109318(s16, s32, s32);
extern short D_216BC4;
unsigned short func_802A6548(s32 arg0, s32 arg1)
{
  s16 temp_a0;
  temp_a0 = *((arg1 * 2) + (&D_216BC4));
  if (temp_a0 != (-1))
  {
    func_80109318(temp_a0, arg0, 0);
  }
}

