s32 func_8022FE7C(void *);
extern s32 D_8002D250;
extern void *D_80059840;
extern void *D_80059858;
extern void *D_8005985C;
extern void *D_80059860;
extern s32 D_80075518;
extern s32 D_80075568;
typedef struct 
{
  unsigned char pad_0[100];
  void *field_64;
  unsigned char pad_68[24];
  void *field_80;
} __repair_record___base_D_80075568;
void func_8022F360(void)
{
  s32 *__base_D_80075568;
  s32 *__base_D_80075518;
  s32 *__base_D_8002D250;
  __base_D_8002D250 = &D_8002D250;
  if ((*__base_D_8002D250) != 0)
  {
    __base_D_80075568 = &D_80075568;
    func_8022FE7C(((__repair_record___base_D_80075568 *) __base_D_80075568)->field_64);
    __base_D_80075518 = &D_80075518;
    func_8022FE7C(*((void **) (((char *) __base_D_80075518) + 0x48)));
    func_8022FE7C(*((void **) (((char *) __base_D_80075518) + 0x4C)));
    func_8022FE7C(((__repair_record___base_D_80075568 *) __base_D_80075568)->field_80);
    *__base_D_8002D250 = 0;
    *((s16 *) (((char *) ((__repair_record___base_D_80075568 *) __base_D_80075568)->field_64) + 0x52)) = 0;
    *((s16 *) (((char *) ((__repair_record___base_D_80075568 *) __base_D_80075568)->field_64) + 0x50)) = 0;
  }
  ((__repair_record___base_D_80075568 *) __base_D_80075568)->field_64 = (void *) D_80059858;
  ((__repair_record___base_D_80075568 *) __base_D_80075568)->field_80 = (void *) D_80059840;
 do { *((void **) (((char *) __base_D_80075518) + 0x48)) = (void *) D_8005985C; *((void **) (((char *) __base_D_80075518) + 0x4C)) = (void *) D_80059860; } while (0);
}
