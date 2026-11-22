s32 func_8023A0DC(f32, f32, s16 *, s32, f32, s32 *, void *);
void func_802534E0(void *arg0, void *arg1)
{
  int __repair_literal;
  s32 sp18;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 var_fs0;
  f32 var_fs0f;
  f32 var_fs1;
  f32 var_fs1f;
  f32 var_fs2;
  f32 var_fs2f;
  s16 *var_a0;
  s32 var_a1;
  u16 temp_v1_2;
  void *temp_s0;
  void *temp_v1;
  void *var_v1;
  temp_s0 = *((void **) (((char *) arg0) + 8));
  temp_v1 = *((void **) (((char *) temp_s0) + 0x64));
  var_a0 = *((s16 **) (((char *) temp_v1) + 0x18));
  var_a1 = 1;
  temp_v1_2 = *((u16 *) (((char *) temp_v1) + 0x32));
  var_fs1 = (f32) (*((s16 *) (((char *) var_a0) + 0)));
  var_fs0 = var_fs1;
  var_fs2 = (f32) (*((s16 *) (((char *) var_a0) + 2)));
  var_fs0f = var_fs2;
  var_fs2f = (f32) (*((s16 *) (((char *) var_a0) + 4)));
  var_fs1f = var_fs2f;
  __repair_literal = 1;
  if (((s32) temp_v1_2) > __repair_literal)
  {
    var_v1 = (void *) (4 + ((s32) var_a0));
    var_a0 += 3;
    do
    {
      temp_fv0 = (f32) (*var_a0);
      var_v1 += 6;
      if (temp_fv0 < var_fs0)
      {
        var_fs0 = temp_fv0;
      }
      if (var_fs1 < temp_fv0)
      {
        var_fs1 = temp_fv0;
      }
      temp_fv0_2 = (f32) (*((s16 *) (((char *) var_v1) + (-2))));
      if (temp_fv0_2 < var_fs0f)
      {
        var_fs0f = temp_fv0_2;
      }
      if (var_fs2 < temp_fv0_2)
      {
        var_fs2 = temp_fv0_2;
      }
      temp_fv0_3 = (f32) (*((s16 *) (((char *) var_v1) + 0)));
      if (temp_fv0_3 < var_fs1f)
      {
        var_fs1f = temp_fv0_3;
      }
      if (var_fs2f < temp_fv0_3)
      {
        var_fs2f = temp_fv0_3;
      }
      var_a1 += 1;
      var_a0 += 3;
    }
    while (var_a1 < ((s32) temp_v1_2));
  }
  if (temp_fv0_3)
  {
    func_8023A0DC(var_fs0, var_fs0f, var_a0, var_a1, var_fs1f, &sp18, temp_s0 + 0x34);
    *((f32 *) (((char *) arg1) + 0)) = (f32) (var_fs0 + (*((f32 *) (((char *) temp_s0) + 0x58))));
    *((f32 *) (((char *) arg1) + 4)) = (f32) (var_fs1 + (*((f32 *) (((char *) temp_s0) + 0x58))));
    *((f32 *) (((char *) arg1) + 8)) = (f32) (var_fs0f + (*((f32 *) (((char *) temp_s0) + 0x5C))));
    *((f32 *) (((char *) arg1) + 0xC)) = (f32) (var_fs2 + (*((f32 *) (((char *) temp_s0) + 0x5C))));
    *((f32 *) (((char *) arg1) + 0x10)) = (f32) (var_fs1f + (*((f32 *) (((char *) temp_s0) + 0x60))));
    *((f32 *) (((char *) arg1) + 0x14)) = (f32) (var_fs2f + (*((f32 *) (((char *) temp_s0) + 0x60))));
  }
  else
  {
    func_8023A0DC(var_fs0, var_fs0f, var_a0, var_a1, var_fs1f, &sp18, temp_s0 + 0x34);
    *((f32 *) (((char *) arg1) + 0)) = (f32) (var_fs0 + (*((f32 *) (((char *) temp_s0) + 0x58))));
    *((f32 *) (((char *) arg1) + 4)) = (f32) (var_fs1 + (*((f32 *) (((char *) temp_s0) + 0x58))));
    *((f32 *) (((char *) arg1) + 8)) = (f32) (var_fs0f + (*((f32 *) (((char *) temp_s0) + 0x5C))));
    *((f32 *) (((char *) arg1) + 0xC)) = (f32) (var_fs2 + (*((f32 *) (((char *) temp_s0) + 0x5C))));
    *((f32 *) (((char *) arg1) + 0x10)) = (f32) (var_fs1f + (*((f32 *) (((char *) temp_s0) + 0x60))));
    *((f32 *) (((char *) arg1) + 0x14)) = (f32) (var_fs2f + (*((f32 *) (((char *) temp_s0) + 0x60))));
  }
}

