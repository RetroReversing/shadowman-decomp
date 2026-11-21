s32 func_8023A0DC();
s32 func_802403D4(f32 *, f32 *, f32);
extern u8 D_212078[];
extern s32 D_800311F0;
extern void *D_8006A4FC;
extern s32 D_8006A588;
extern void *D_8007AFF8;
typedef struct 
{
  unsigned char pad[68];
  int value;
} __repair_field_44;
void func_80274280(void)
{
  f32 sp18;
  f32 sp1C;
  volatile unsigned char pad;
  f32 sp20;
  f32 sp28;
  f32 sp2C;
  f32 sp30;
  f32 *temp_a1;
  f32 temp_fs0;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 *__base_D_800311F0;
  __base_D_800311F0 = &D_800311F0;
  if (1)
  {
    temp_v1 = ((__repair_field_44 *) D_8007AFF8)->value;
  }
  if (!(temp_v1 & 0x100000))
  {
    if (!(temp_v1 & 0x04000000))
    {
      func_8023A0DC(0, 0, NULL, &sp18, D_8006A4FC + 0x34);
      sp18 += *((f32 *) (((char *) D_8006A4FC) + 0x24));
      sp20 += *((f32 *) (((char *) D_8006A4FC) + 0x2C));
      sp1C += (*((f32 *) (((char *) D_8006A4FC) + 0x28))) + (*((f32 *) (((char *) (((*((u8 *) (((char *) D_8007AFF8) + 0x40))) * 0x6C) + D_212078)) + 0x38)));
      temp_fs0 = (f32) (*((u8 *) (((char *) (((*((u8 *) (((char *) D_8007AFF8) + 0x40))) * 0x6C) + D_212078)) + 0x3C)));
      temp_a1 = D_8006A4FC + 0x34;
      func_8023A0DC(0, 0, D_212078, temp_a1, *((void **) (&temp_fs0)), &sp28);
      *__base_D_800311F0 = 1;
      sp28 += sp18;
      sp2C += sp1C;
      sp30 += sp20;
      func_802403D4(&sp18, &sp28, temp_fs0);
      *__base_D_800311F0 = 0;
      if (D_8006A588 == 1)
      {
        ((__repair_field_44 *) D_8007AFF8)->value = (s32) (((__repair_field_44 *) D_8007AFF8)->value | 0x04000000);
      }
      goto block_5;
    }
    goto block_6;
  }
  block_5:
  if (((__repair_field_44 *) D_8007AFF8)->value & 0x04000000)
  {
    block_6:
    temp_v1 = ((__repair_field_44 *) D_8007AFF8)->value;

    if (temp_v1 & 0x100)
    {
      ((__repair_field_44 *) D_8007AFF8)->value = (s32) (temp_v1 & (~0x100));
    }
  }

}

