extern s32 D_80072C18;
extern void *D_80075560;
extern void *D_800755CC;
inline static int inline_fn(int arg0)
{
  return arg0;
}

void func_802BFAE8(f32 arg0_in)
{
  f32 arg0;
  char *var_a0;
  void *temp_a3;
  s32 var_a2;
  void *var_v1;
  var_a2 = 0;
  arg0 = arg0_in;
  temp_a3 = (*((s32 *) (((char *) D_80075560) + 8))) + (D_80072C18 * 0xC);
  var_a0 = inline_fn((*((s32 *) (((char *) D_800755CC) + 0x18))) + ((*((u16 *) (((char *) temp_a3) + 8))) * 6));
  if ((*((u16 *) (((char *) temp_a3) + 4))) != 0)
  {
    var_v1 = var_a0 + 4;
    __repair_rows:
    {
      *((s16 *) var_a0) = (s16) ((s32) (((f32) (*((s16 *) var_a0))) * arg0));
      var_a2 += 1;
      var_a0 += 6;
      *((s16 *) (((char *) var_v1) + (-2))) = (s16) ((s32) (((f32) (*((s16 *) (((char *) var_v1) + (-2))))) * arg0));
      *((s16 *) (((char *) var_v1) + 0)) = (s16) ((s32) (((f32) (*((s16 *) (((char *) var_v1) + 0)))) * arg0));
      var_v1 += 6;
    }

    if (var_a2 < ((s32) (*((u16 *) (((char *) temp_a3) + 4)))))
    {
      goto __repair_rows;
    }
  }
}

