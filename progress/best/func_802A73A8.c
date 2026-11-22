#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
extern float D_8007DB8C;
s32 func_802401D0();
s32 func_802D0B28();
extern s32 D_8002D2B4;
extern u32 D_80036E08;
extern s32 D_8005EA14;
extern char D_8006A510[];
extern s32 D_8006A5B4;
extern char D_8007BBD0[];
extern void *D_8007BD70;
extern char D_8007DB88[];
typedef struct 
{
  unsigned char pad_0[68];
  int field_44;
  unsigned char pad_48[12];
  float field_54;
  float field_58;
  float field_5C;
  unsigned char pad_60[12];
  float field_6C;
  float field_70;
  float field_74;
} __repair_record_arg0;
inline static int inline_fn(int arg0, int arg1)
{
  return arg0 != arg1;
}

void func_802A73A8(void *arg0)
{
  char *__base_D_8007BBD0;
  s32 *__base_D_8006A510;
  f32 sp10[3];
  f32 sp20[3];
  f32 temp_ft0;
  f32 temp_fv0f;
  f32 temp_fv1;
  f32 temp_t1;
  f32 temp_t2;
  f32 temp_t3;
  s32 var_s0;
  s32 temp_v0;
  void *temp_a0;
  temp_v0 = *((u8 *) (((s8 *) ((((__repair_record_arg0 *) arg0)->field_44 * 0x50) + (*((s32 *) (((s8 *) D_8007BD70) + 8))))) + 0x30));
  var_s0 = inline_fn(temp_v0 & 8, 0);
 do { if (temp_v0 & 4) { var_s0 |= 2; } if (inline_fn(var_s0, 0)) { temp_t1 = ((__repair_record_arg0 *) arg0)->field_54; temp_t2 = ((__repair_record_arg0 *) arg0)->field_58; temp_t3 = ((__repair_record_arg0 *) arg0)->field_5C; sp20[0] = temp_t1; sp20[1] = temp_t2; sp20[2] = temp_t3; sp10[0] = temp_t1; sp10[1] = temp_t2; sp10[2] = temp_t3; temp_fv1 = sp20[0] + (((__repair_record_arg0 *) arg0)->field_6C * D_8007DB8C); sp20[0] = temp_fv1; temp_ft0 = sp20[1] + (((__repair_record_arg0 *) arg0)->field_70 * D_8007DB8C); sp20[1] = temp_ft0; temp_fv0f = sp20[2] + (((__repair_record_arg0 *) arg0)->field_74 * D_8007DB8C); sp20[2] = temp_fv0f; if (sp10[0] == temp_fv1) { if ((sp10[1] == temp_ft0) && (sp10[2] == temp_fv0f)) { sp20[1] = temp_ft0 + (*((f32 *) 0x216304)); } } if (inline_fn(func_802D0B28(D_8005EA14, D_8002D2B4, 0), 0)) { D_8006A5B4 = var_s0; func_802401D0(sp10, sp20, *((s32 *) (((s8 *) ((((__repair_record_arg0 *) arg0)->field_44 * 0x50) + (*((s32 *) (((s8 *) D_8007BD70) + 8))))) + 8))); __base_D_8006A510 = D_8006A510; if (((*((s32 *) (((s8 *) __base_D_8006A510) + 0x78))) == 1) && (((u32) D_80036E08) < 0xAU)) { __base_D_8007BBD0 = D_8007BBD0; __base_D_8007BBD0[D_80036E08 * 9] = 0; temp_a0 = (D_80036E08 * 0x24) + __base_D_8007BBD0; *((s32 *) (((s8 *) temp_a0) + 4)) = (s32) (*((s32 *) (((s8 *) __base_D_8006A510) + 0x8C))); *((s32 *) (((s8 *) temp_a0) + 8)) = (s32) (*((s32 *) (((s8 *) __base_D_8006A510) + 0x90))); *((f32 *) (((s8 *) temp_a0) + 0xC)) = (f32) (*((f32 *) (((s8 *) __base_D_8006A510) + 0x80))); *((f32 *) (((s8 *) temp_a0) + 0x10)) = (f32) (*((f32 *) (((s8 *) __base_D_8006A510) + 0x84))); *((f32 *) (((s8 *) temp_a0) + 0x14)) = (f32) (*((f32 *) (((s8 *) __base_D_8006A510) + 0x88))); *((f32 *) (((s8 *) temp_a0) + 0x20)) = (f32) (*((f32 *) (((s8 *) __base_D_8006A510) + 0x9C))); if ((*((void **) (((s8 *) __base_D_8006A510) + 0x98))) != NULL) { if ((*((s32 *) (((s8 *) (*((void **) (((s8 *) __base_D_8006A510) + 0x98)))) + 0x18))) == 2) { *((s8 *) (((s8 *) temp_a0) + 0)) = (s8) (*((s32 *) (((s8 *) __base_D_8006A510) + 0x78))); *((void **) (((s8 *) ((D_80036E08 * 0x24) + __base_D_8007BBD0)) + 0x18)) = (void *) (*((void **) (((s8 *) __base_D_8006A510) + 0x98))); } } D_80036E08 += 1; } } } } while (0);
}
