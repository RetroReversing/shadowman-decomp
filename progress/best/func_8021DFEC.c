s32 func_8021E130();
s32 func_8021E344();
extern s32 D_8002C0F0;
extern char D_8002C1C0[];
extern s32 D_8002C240;
extern char D_80046560[];
extern char D_80046630[];
extern char D_80047450[];
extern char D_800487E0[];
extern char D_80049C30[];
extern char D_8005281F[];
extern char D_8005342F[];
extern s32 *D_8005387C;
extern s32 D_80053880;
extern char D_80053910[];
extern void *D_80056998;
extern s32 D_8005699C;
extern void *D_800569A4;
extern s32 D_800569A8;
extern s32 D_80075F50;
typedef struct 
{
  unsigned char pad[8];
  int value;
} __repair_field_8;
inline static s32 *inline_fn(char *arg0)
{
  return (s32 *) arg0;
}

void func_8021DFEC(void)
{
  char *__base_D_80053910;
  char *__base_D_8002C1C0;
  s32 *temp_a0;
  s32 *temp_a1_2;
  s32 *temp_t0;
  s32 *temp_v1;
  void *temp_a1;
  void *temp_a1_3;
  void *temp_t1;
  void *temp_a2;
  temp_a1 = D_800569A4;
  temp_t0 = D_8005387C;
  temp_v1 = D_8005387C + 8;
  temp_t1 = D_80056998;
  D_800569A4 += 8;
  *inline_fn(((char *) temp_a1) + 0) = 0xDF000000;
  *((s32 *) (((char *) temp_a1) + 4)) = 0;
  D_80056998 += 8;
  *inline_fn(((char *) temp_t0) + 4) = (s32) D_800569A8;
  temp_a0 = temp_v1 + 8;
  D_8005387C = temp_v1;
  *inline_fn(((char *) temp_t0) + 0) = 0xDE000000;
  D_8005387C = temp_a0;
  *inline_fn(((char *) temp_t1) + 0) = 0xDF000000;
  *((s32 *) (((char *) temp_t1) + 4)) = 0;
  ((__repair_field_8 *) D_8005387C)->value = 0xDE000000;
  temp_a1_2 = temp_v1 + 0x10;
  D_8005387C = temp_a1_2;
  *((s32 *) (((char *) temp_v1) + 4)) = (s32) D_8005699C;
  ((__repair_field_8 *) temp_v1)->value = 0xE9000000;
  *inline_fn(((char *) temp_a0) + 4) = 0;
  D_8005387C = temp_v1 + 0x18;
  *inline_fn(((char *) temp_v1) + 0x10) = 0xDF000000;
  *((s32 *) (((char *) temp_a1_2) + 4)) = 0;
  func_8021E344(1, temp_a1_2);
  __base_D_8002C1C0 = D_8002C1C0;
  temp_a1_3 = (D_8002C240 << 6) + __base_D_8002C1C0;
  *((s32 *) (((char *) temp_a1_3) + 0x20)) = (s32) ((((u32) (&D_8005342F)) >> 4) * 0x10);
  ((__repair_field_8 *) temp_a1_3)->value = D_80046560;
  *inline_fn(((char *) temp_a1_3) + 0xC) = (s32) (D_80046630 - D_80046560);
  if (!(D_8002C0F0 & 2))
  {
    if (!(D_80075F50 & 0x10))
    {
      if (D_800487E0)
      {
        *((s32 **) (((char *) temp_a1_3) + 0x10)) = D_80047450;
      }
      else
      {
        *((s32 **) (((char *) temp_a1_3) + 0x10)) = D_80047450;
      }
      if (1)
      {
        *((s32 **) (((char *) temp_a1_3) + 0x18)) = D_80049C30;
        do
        {
          temp_a2 = (D_8002C240 << 6) + __base_D_8002C1C0;
        }
        while (0);
      }
      if (D_80075F50)
      {
        __base_D_80053910 = D_80053910;
        *((void **) (((char *) temp_a2) + 0x30)) = (void *) ((D_8002C240 * 0x1888) + __base_D_80053910);
        *inline_fn(((char *) temp_a2) + 0x38) = (s32) (4 * ((((u32) (&D_8005281F)) >> 4) * 4));
        *((s32 *) (((char *) temp_a2) + 0x3C)) = 0xC00;
        *((s32 *) (((char *) temp_a2) + 0x34)) = (s32) (D_8005387C - D_80053880);
        return;
      }
      else
        if (temp_v1)
      {
        __base_D_80053910 = D_80053910;
        *((void **) (((char *) temp_a2) + 0x30)) = (void *) ((D_8002C240 * 0x1888) + __base_D_80053910);
        *inline_fn(((char *) temp_a2) + 0x38) = (s32) (4 * ((((u32) (&D_8005281F)) >> 4) * 4));
        *((s32 *) (((char *) temp_a2) + 0x3C)) = 0xC00;
        *((s32 *) (((char *) temp_a2) + 0x34)) = (s32) (D_8005387C - D_80053880);
        return;
      }
      else
        if (temp_a1_3)
      {
        __base_D_80053910 = D_80053910;
        *((void **) (((char *) temp_a2) + 0x30)) = (void *) ((D_8002C240 * 0x1888) + __base_D_80053910);
        *inline_fn(((char *) temp_a2) + 0x38) = (s32) (4 * ((((u32) (&D_8005281F)) >> 4) * 4));
        *((s32 *) (((char *) temp_a2) + 0x3C)) = 0xC00;
        *((s32 *) (((char *) temp_a2) + 0x34)) = (s32) (D_8005387C - D_80053880);
        return;
      }
      else
      {
        __base_D_80053910 = D_80053910;
        *((void **) (((char *) temp_a2) + 0x30)) = (void *) ((D_8002C240 * 0x1888) + __base_D_80053910);
        *inline_fn(((char *) temp_a2) + 0x38) = (s32) (4 * ((((u32) (&D_8005281F)) >> 4) * 4));
        *((s32 *) (((char *) temp_a2) + 0x3C)) = 0xC00;
        *((s32 *) (((char *) temp_a2) + 0x34)) = (s32) (D_8005387C - D_80053880);
        return;
      }
    }
    *((s32 **) (((char *) temp_a1_3) + 0x10)) = D_800487E0;
    func_8021E130(D_80046560, temp_a1_3);
    return;
  }
  *((s32 **) (((char *) temp_a1_3) + 0x10)) = D_800487E0;
  func_8021E130(D_80046560, temp_a1_3);
}

