s32 func_8010FBE0(void *, s32, s32, void *);
extern s32 D_2A4A50;
extern s32 D_2A4E94;
extern s32 D_2A5218;
void func_80119E54(void *arg0, s32 arg1, void *arg2)
{
  int __repair_literal;
  s32 *__base_D_2A4A50;
  u8 temp_v0_4;
  u8 temp_v1;
  void *temp_v0;
  void *temp_v0_2;
  void *temp_v0_3;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_5;
  void *var_v0;
  switch (arg1)
  {
    case 5:
      *((void **) (((char *) arg0) + 0x28)) = arg2;
      *((s32 *) (((char *) arg0) + 0x38)) = 0;
      *((s32 *) (((char *) arg0) + 0x44)) = (s32) (*((s32 *) (((char *) arg2) + 0)));
      temp_v1 = *((u8 *) (((char *) arg2) + 8));
      switch (temp_v1)
    {
      __base_D_2A4A50 = &D_2A4A50;
      case 0:
        *((s32 **) (((char *) arg0) + 4)) = __base_D_2A4A50;
        temp_v1_2 = *((void **) (((char *) (*((void **) (((char *) arg0) + 0x28)))) + 0x10));
        temp_v1_3 = *((void **) (((char *) arg0) + 0x28));
        __repair_literal = 2;
        *((s32 *) (((char *) arg0) + 0x2C)) = (s32) (((*((s32 *) (((char *) temp_v1_2) + 0))) * ((*((s32 *) (((char *) temp_v1_2) + 4))) * __repair_literal)) * 8);
        temp_v0 = *((void **) (((char *) temp_v1_3) + 0xC));
        if (temp_v0 != NULL)
      {
        *((s32 *) (((char *) arg0) + 0x1C)) = (s32) (*((s32 *) (((char *) temp_v0) + 0)));
        *((s32 *) (((char *) arg0) + 0x20)) = (s32) (*((s32 *) (((char *) (*((void **) (((char *) temp_v1_3) + 0xC)))) + 4)));
        *((s32 *) (((char *) arg0) + 0x24)) = (s32) (*((s32 *) (((char *) (*((void **) (((char *) temp_v1_3) + 0xC)))) + 8)));
        func_8010FBE0((*((void **) (((char *) temp_v1_3) + 0xC))) + 0xC, *((s32 *) (((char *) arg0) + 0x18)), 0x20, arg0);
        return;
      }
        *((s32 *) (((char *) arg0) + 0x24)) = 0;
        *((s32 *) (((char *) arg0) + 0x20)) = 0;
        *((s32 *) (((char *) arg0) + 0x1C)) = 0;
        return;

      case 1:
 do { temp_v1_4 = *((void **) (((char *) arg0) + 0x28)); } while (0);
        *((s32 **) (((char *) arg0) + 4)) = &D_2A4E94;
        temp_v0_2 = *((void **) (((char *) temp_v1_4) + 0xC));
        if (temp_v0_2 != NULL)
      {
        *((s32 *) (((char *) arg0) + 0x1C)) = (s32) (*((s32 *) (((char *) temp_v0_2) + 0)));
        *((s32 *) (((char *) arg0) + 0x20)) = (s32) (*((s32 *) (((char *) (*((void **) (((char *) temp_v1_4) + 0xC)))) + 4)));
        var_v0 = *((void **) (((char *) temp_v1_4) + 0xC));
        *((s32 *) (((char *) arg0) + 0x24)) = (s32) (*((s32 *) (((char *) var_v0) + 8)));
        return;
      }
        *((s32 *) (((char *) arg0) + 0x24)) = 0;
        *((s32 *) (((char *) arg0) + 0x20)) = 0;
        *((s32 *) (((char *) arg0) + 0x1C)) = 0;
        return;

      case 2:
        *((s32 **) (((char *) arg0) + 4)) = &D_2A5218;
        *((s32 *) (((char *) arg0) + 0x24)) = 0;
        *((s32 *) (((char *) arg0) + 0x20)) = 0;
        *((s32 *) (((char *) arg0) + 0x1C)) = 0;
        return;

    }

      break;

    case 4:
      temp_v0_3 = *((void **) (((char *) arg0) + 0x28));
      *((s32 *) (((char *) arg0) + 0x3C)) = 0;
      *((s32 *) (((char *) arg0) + 0x40)) = 1;
      *((s32 *) (((char *) arg0) + 0x38)) = 0;
      if ((temp_v0_3 != NULL) && (((temp_v1_5 = *((void **) (((char *) arg0) + 0x28)), *((s32 *) (((char *) arg0) + 0x44)) = (s32) (*((s32 *) (((char *) temp_v0_3) + 0))), temp_v0_4 = *((u8 *) (((char *) temp_v1_5) + 8)), temp_v0_4 == 0)) || (temp_v0_4 == 1)))
    {
      var_v0 = *((void **) (((char *) temp_v1_5) + 0xC));
      if (var_v0 != NULL)
      {
        *((s32 *) (((char *) arg0) + 0x24)) = (s32) (*((s32 *) (((char *) var_v0) + 8)));
        return;
      }
    }
      break;

  }

}
