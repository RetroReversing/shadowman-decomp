s32 func_802D2950();
extern s32 D_80030C68;
extern s32 D_8007BF58;
void func_802D282C(void)
{
  s32 *__base_D_8007BF58;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv0_4;
  f32 temp_fv0f;
  f32 temp_fv0f_2;
  f32 temp_fv0f_3;
  f32 temp_fv0f_4;
  f32 temp_fv1f;
  f32 temp_fv1f_2;
  __base_D_8007BF58 = &D_8007BF58;
  if ((*((f32 *) (((char *) __base_D_8007BF58) + 0x20C))) < 0.0f)
  {
    *((f32 *) (((char *) __base_D_8007BF58) + 0x20C)) = (f32) ((*((f32 *) (((char *) __base_D_8007BF58) + 0x20C))) + (*((f32 *) 0x218CAC)));
  }
  if ((*((f32 *) (((char *) __base_D_8007BF58) + 0x210))) < 0.0f)
  {
    *((f32 *) (((char *) __base_D_8007BF58) + 0x210)) = (f32) ((*((f32 *) (((char *) __base_D_8007BF58) + 0x210))) + (*((f32 *) 0x218CB0)));
  }
  temp_fv0 = (*((f32 *) (((char *) __base_D_8007BF58) + 0x20C))) - (*((f32 *) (((char *) __base_D_8007BF58) + 0x200)));
  temp_fv0f = fabsf(temp_fv0);
  if (temp_fv0 >= 0.0f)
  {
    if ((*((f32 *) 0x218CB4)) < temp_fv0f)
    {
      temp_fv0_2 = (*((f32 *) (((char *) __base_D_8007BF58) + 0x200))) - (((*((f32 *) 0x218CB8)) - temp_fv0f) / (*((f32 *) (((char *) (&D_80030C68)) + 4))));
      *((f32 *) (((char *) __base_D_8007BF58) + 0x200)) = temp_fv0_2;
      if (temp_fv0_2 < 0.0f)
      {
        func_802D2950();
        return;
      }
      goto block_16;
    }
    func_802D2950();
    return;
  }
  if ((*((f32 *) 0x218CBC)) < temp_fv0f)
  {
    temp_fv0f_2 = (*((f32 *) (((char *) __base_D_8007BF58) + 0x200))) + (((*((f32 *) 0x218CC0)) - temp_fv0f) / (*((f32 *) (((char *) (&D_80030C68)) + 4))));
    *((f32 *) (((char *) __base_D_8007BF58) + 0x200)) = temp_fv0f_2;
    if ((*((f32 *) 0x218CC4)) < temp_fv0f_2)
    {
      if (((unsigned long) __base_D_8007BF58) & 0x100)
      {
        func_802D2950();
      }
      else
      {
        func_802D2950();
      }
      return;
    }
    goto block_16;
  }
  *((f32 *) (((char *) __base_D_8007BF58) + 0x200)) = (f32) ((*((f32 *) (((char *) __base_D_8007BF58) + 0x200))) - (temp_fv0f / (*((f32 *) (((char *) (&D_80030C68)) + 4)))));
  block_16:
  temp_fv0_3 = (*((f32 *) (((char *) __base_D_8007BF58) + 0x210))) - (*((f32 *) (((char *) __base_D_8007BF58) + 0x204)));

  temp_fv0f_3 = fabsf(temp_fv0_3);
  if (temp_fv0_3 >= 0.0f)
  {
    if ((*((f32 *) 0x218CC8)) < temp_fv0f_3)
    {
      temp_fv1f = *((f32 *) 0x218CCC);
      temp_fv0_4 = (*((f32 *) (((char *) __base_D_8007BF58) + 0x204))) - ((temp_fv1f - temp_fv0f_3) / (*((f32 *) (((char *) (&D_80030C68)) + 4))));
      *((f32 *) (((char *) __base_D_8007BF58) + 0x204)) = temp_fv0_4;
      if (temp_fv0_4 < 0.0f)
      {
        *((f32 *) (((char *) __base_D_8007BF58) + 0x204)) = (f32) (temp_fv0_4 + temp_fv1f);
      }
    }
    else
    {
      *((f32 *) (((char *) __base_D_8007BF58) + 0x204)) = (f32) ((*((f32 *) (((char *) __base_D_8007BF58) + 0x204))) + (temp_fv0f_3 / (*((f32 *) (((char *) (&D_80030C68)) + 4)))));
    }
  }
  else
    if (!((*((f32 *) 0x218CD0)) >= temp_fv0f_3))
  {
    temp_fv1f_2 = *((f32 *) 0x218CD4);
    temp_fv0f_4 = (*((f32 *) (((char *) __base_D_8007BF58) + 0x204))) + ((temp_fv1f_2 - temp_fv0f_3) / (*((f32 *) (((char *) (&D_80030C68)) + 4))));
    *((f32 *) (((char *) __base_D_8007BF58) + 0x204)) = temp_fv0f_4;
    if ((*((f32 *) 0x218CD8)) < temp_fv0f_4)
    {
      *((f32 *) (((char *) __base_D_8007BF58) + 0x204)) = (f32) (temp_fv0f_4 - temp_fv1f_2);
    }
  }
  else
  {
    *((f32 *) (((char *) __base_D_8007BF58) + 0x204)) = (f32) ((*((f32 *) (((char *) __base_D_8007BF58) + 0x204))) - (temp_fv0f_3 / (*((f32 *) (((char *) (&D_80030C68)) + 4)))));
  }
}

