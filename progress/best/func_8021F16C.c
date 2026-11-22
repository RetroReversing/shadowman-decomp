extern float D_8002D204;
extern char D_8002D200[];
extern long long D_80056A00;
extern s32 D_80058E08;
void func_8021F16C(s32 arg0)
{
  s32 var_a0;
  char *var_a1;
  char *var_v1;
  var_a1 = &D_80056A00;
  var_a0 = 0;
  if (D_80058E08 > 0)
  {
    var_v1 = D_80056A00 + 6;
    do
    {
      var_a0 = var_a0 + 1;
      do
      {
        if ((*((u8 *) var_a1)) == 0)
        {
          *((u8 *) var_v1) = (u16) ((*((u8 *) var_v1)) - ((s32) (D_8002D204 * ((f32) (((s32) (arg0 << 0x10)) >> 0xF)))));
        }
        var_v1 += 0x18;
      }
      while (0);
      var_a1 += 0x18;
    }
    while (var_a0 < D_80058E08);
  }
}

