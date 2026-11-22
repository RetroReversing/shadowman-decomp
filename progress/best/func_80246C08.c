s32 func_802295D4(s32 *, s32);
volatile short func_80229F98();
s32 func_8022F084();
s32 func_8023C450();
s32 func_80246CCC(s32 *, void **);
s32 func_80246D38();
extern s32 D_8002D424;
extern s32 D_800596B0;
extern void *D_80072BB0;
extern void *D_80072BB4;
typedef struct 
{
  unsigned char pad_0[12];
  unsigned short field_C;
  unsigned short field_E;
} __repair_record_D_80072BB4;
void func_80246C08(void)
{
  s32 var_v1;
  u16 temp_v0;
  func_8022F084();
  func_8023C450();
  if (D_8002D424 & 4)
  {
    do
    {
      temp_v0 = ((__repair_record_D_80072BB4 *) D_80072BB4)->field_C - 1;
      ((__repair_record_D_80072BB4 *) D_80072BB4)->field_C = temp_v0;
    }
    while (0);
    if (temp_v0 & 0x8000)
    {
      ((__repair_record_D_80072BB4 *) D_80072BB4)->field_C = (u16) ((*((u16 *) (((char *) D_80072BB0) + 2))) - 1);
    }
    if (((__repair_record_D_80072BB4 *) D_80072BB4)->field_C || D_80072BB4)
    {
      func_80246CCC(&D_800596B0, &D_80072BB4);
      return;
    }
    else
    {
      func_80246CCC(&D_800596B0, &D_80072BB4);
      return;
    }
  }
  if (D_8002D424 & 8)
  {
    u16 temp_v0_2;
    temp_v0_2 = ((__repair_record_D_80072BB4 *) D_80072BB4)->field_C + 1;
    ((__repair_record_D_80072BB4 *) D_80072BB4)->field_C = temp_v0_2;
    if (((s16) temp_v0_2) >= (*((s32 *) (((char *) D_80072BB0) + 0))))
    {
      ((__repair_record_D_80072BB4 *) D_80072BB4)->field_C = 0U;
    }
    func_802295D4(&D_800596B0, (*((s32 *) (((char *) D_80072BB0) + 8))) + (((s16) ((__repair_record_D_80072BB4 *) D_80072BB4)->field_C) * 0x28));
  }
  var_v1 = 0x2700;
  if (((__repair_record_D_80072BB4 *) D_80072BB4)->field_E & 1)
  {
    var_v1 = 0x2000;
  }
  if ((var_v1 & D_8002D424) || (func_80229F98() == 0))
  {
    func_80246D38();
  }
}

