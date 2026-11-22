extern unsigned char D_800755D9;
volatile long func_80231D44(f32, f32, f32, s32);
s32 func_802D0B28();
extern void *D_8005E9F0;
extern s32 D_8005EA14;
extern char D_80075568[];
void func_802BDFA8(f32 arg0, f32 arg1, f32 arg2)
{
  char *var_s1;
  s16 temp_a1;
  s32 temp_s3;
  s32 var_s2;
  void *var_s0;
  temp_s3 = *((s16 *) (((char *) D_8005E9F0) + 0x22));
  var_s1 = *((s16 **) (((char *) D_8005E9F0) + 0xC));
  var_s2 = 0;
  if (temp_s3 > 0)
  {
    var_s0 = var_s1 + 3;
    do
    {
      if (((*((s16 *) var_s1)) == 0) && (func_80231D44(arg0, arg1, arg2, var_s1 + 4) != 0))
      {
        temp_a1 = *((s16 *) (((char *) var_s0) + (-1)));
        if ((*((s32 *) (((char *) D_8005E9F0) + 0))) != temp_a1)
        {
 do { func_802D0B28(D_8005EA14, temp_a1, 1); D_800755D9 = (u8) (*((u8 *) (((char *) var_s0) + 0))); } while (0);
        }
      }
      var_s0 += 0x1C;
      var_s2 += 1;
      var_s1 += 0x1C;
    }
    while (var_s2 < temp_s3);
  }
}
