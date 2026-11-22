extern s32 D_800458F0;
extern s32 D_80074BB0;
volatile long long func_802B6E08(void)
{
  s32 var_v0;
  var_v0 = 0;
  if ((*((s32 *) (((char *) (&D_800458F0)) + 0))) == 1)
  {
    var_v0 = 0;
    if (D_80074BB0 == 8)
    {
      var_v0 = (unsigned short) 1;
      if (((u32) ((*((s32 *) (((char *) (&D_800458F0)) + 4))) - 0xF)) >= 2U)
      {
        var_v0 = 0;
      }
    }
  }
  return var_v0;
}

