extern u8 D_80036E30[];
s32 func_802BA1A0(s32 arg0)
{
  char *var_v1;
  s32 var_v0;
  s32 *__base_D_80036E30;
  __base_D_80036E30 = D_80036E30;
  var_v0 = -1;
  if ((*D_80036E30) != (-1))
  {
    var_v1 = __base_D_80036E30;
    for (;;)
    {
 do { if ((*((s32 *) (((char *) var_v1) + 0))) != arg0) { var_v1 += 0x18; if ((*((s32 *) var_v1)) == (-1)) { if (!__base_D_80036E30) { return -1; } else { return -1; } } continue; } break; } while (0);
    }

    var_v0 = *((s32 *) (((char *) var_v1) + 4));
  }
}
