s32 func_80109918();
s32 func_80113AD0();
f32 func_8022EC3C();
s32 func_802A7CD4();
typedef struct { f32 v; } Field_f32;
typedef struct { s32 v; } Field_s32;
typedef struct { s8 v; } Field_s8;
typedef struct { u8 v; } Field_u8;
void func_802B4218(void *arg0)
{
  f32 temp_fs0;
  f32 temp_fv0;
  s32 temp_ret;
  s32 temp_ret_2;
  s32 temp_ret_3;
  func_802A7CD4();
  (((Field_u8 *) (((char *) arg0) + 0x49))->v) = 0xB4;
 do { (((Field_u8 *) (((char *) arg0) + 0x4A))->v) = 0xFF; } while (0);
  (((Field_s8 *) (((char *) arg0) + 0x48))->v) = 0;
  (((Field_u8 *) (((char *) arg0) + 0x50))->v) |= 1;
  (((Field_f32 *) (((char *) arg0) + 0x38))->v) = (f32) (*((f32 *) 0x216A64));
  temp_ret = func_80113AD0();
  (((Field_f32 *) (((char *) arg0) + 0x84))->v) = (f32) (temp_ret % 360);
  temp_ret_2 = func_80113AD0((temp_ret / 360) * 3);
  (((Field_f32 *) (((char *) arg0) + 0x88))->v) = (f32) (temp_ret_2 % 360);
  temp_ret_3 = func_80113AD0((temp_ret_2 / 360) * 3);
  temp_fs0 = *((f32 *) 0x216A68);
  (((Field_f32 *) (((char *) arg0) + 0x8C))->v) = (f32) (temp_ret_3 % 360);
  (((Field_f32 *) (((char *) arg0) + 0x90))->v) = (f32) (func_8022EC3C() + temp_fs0);
  (((Field_f32 *) (((char *) arg0) + 0x94))->v) = (f32) (func_8022EC3C() + temp_fs0);
  temp_fv0 = func_8022EC3C() + temp_fs0;
  (((Field_u8 *) (((char *) arg0) + 0x50))->v) |= 2;
  (((Field_s8 *) (((char *) arg0) + 0x51))->v) = 0;
  (((Field_f32 *) (((char *) arg0) + 0x98))->v) = temp_fv0;
  (((Field_s32 *) (((char *) arg0) + 0x1C))->v) = func_80109918(arg0 + 0x54, 0x7F, *((s16 *) 0x216C1C));
}
