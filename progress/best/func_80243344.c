s32 func_8024319C();
s32 func_80243438(s32 *);
extern s32 D_8002D420;
extern s32 D_8002D424;
extern s32 D_8002D488;
extern s32 D_800458F0;
extern s32 D_80045C40;
extern s32 D_800753E4;
extern void *D_80075510;
extern s32 D_80075518;
extern s32 D_800755F8;
extern u8 D_8007DB9B;
s32 func_80243344(void)
{
  s32 *__base_D_80075518;
  s32 temp_v0;
  s32 var_s0;
  s32 var_v0;
  var_s0 = 0;
  temp_v0 = func_8024319C();
  var_v0 = 0;
  if (temp_v0 == 1)
  {
    if (D_800458F0 != 0)
    {
      if (D_80045C40 & 0x400)
      {
        return func_80243438(&D_80045C40);
      }
 do { goto block_15; } while (0);
    }
    var_v0 = 0;
    if (D_8007DB9B == 0)
    {
      var_v0 = 0;
      if (D_800755F8 == 0)
      {
        if (D_800753E4 != 6)
        {
          var_v0 = 0;
          __base_D_80075518 = &D_80075518;
          if (!((*((u16 *) (((char *) __base_D_80075518) + 0x1C))) & 4))
          {
            var_v0 = 0;
            if (D_8002D488 == 0)
            {
              var_v0 = 0;
              if (!(D_8002D420 & 0x8000))
              {
                if ((*((s16 *) (((char *) D_80075510) + 0x16))) != temp_v0)
                {
                  var_v0 = 0;
                  if (D_8002D424 & 0x400)
                  {
                    var_v0 = 0;
                    if (((u32) ((*((u16 *) (((char *) __base_D_80075518) + 4))) - 0x76)) >= 3U)
                    {
                      var_s0 = 1;
                      goto block_15;
                    }
                  }
                }
                else
                {
                  goto block_15;
                }
              }
            }
          }
        }
        else
        {
          block_15:
          var_v0 = var_s0;

        }
      }
    }
    return var_s0;
  }
  return var_v0;
}
