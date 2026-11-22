extern char D_8004B420[];
void func_8010798C(s32 *arg0)
{
  char *__base_D_8004B420;
  s32 __repair_store_0;
  s32 __repair_store_1;
  s32 __repair_store_2;
  s32 __repair_store_3;
  char *var_a0;
  char *var_v1;
  if (__base_D_8004B420)
  {
    __base_D_8004B420 = D_8004B420;
    var_v1 = __base_D_8004B420 + 4;
    var_a0 = arg0;
  }
  else
  {
    __base_D_8004B420 = D_8004B420;
    var_v1 = __base_D_8004B420 + 4;
    var_a0 = arg0;
  }
  __repair_rows:
  {
    if (__repair_store_3 || __base_D_8004B420)
    {
      __repair_store_0 = *((s32 *) (((char *) var_v1) + 0));
      __repair_store_1 = (s32) (*((s32 *) (((char *) var_v1) + 4)));
      __repair_store_2 = (s32) (*((s32 *) (((char *) var_v1) + 8)));
      __repair_store_3 = (s32) (*((s32 *) (((char *) var_v1) + 0xC)));
      *((s32 *) (((char *) var_a0) + 0)) = __repair_store_0;
      *((s32 *) (((char *) var_a0) + 4)) = __repair_store_1;
      *((s32 *) (((char *) var_a0) + 8)) = __repair_store_2;
      *((s32 *) (((char *) var_a0) + 0xC)) = __repair_store_3;
      var_v1 += 0x10;
      var_a0 += 0x10;
    }
    else
    {
      __repair_store_0 = *((s32 *) (((char *) var_v1) + 0));
      __repair_store_1 = (s32) (*((s32 *) (((char *) var_v1) + 4)));
      __repair_store_2 = (s32) (*((s32 *) (((char *) var_v1) + 8)));
      __repair_store_3 = (s32) (*((s32 *) (((char *) var_v1) + 0xC)));
      *((s32 *) (((char *) var_a0) + 0)) = __repair_store_0;
      *((s32 *) (((char *) var_a0) + 4)) = __repair_store_1;
      *((s32 *) (((char *) var_a0) + 8)) = __repair_store_2;
      *((s32 *) (((char *) var_a0) + 0xC)) = __repair_store_3;
      var_v1 += 0x10;
      var_a0 += 0x10;
    }
  }

  if (var_v1 != (__base_D_8004B420 + 0x24))
  {
    goto __repair_rows;
  }
  *((s32 *) var_a0) = *((s32 *) var_v1);
}

