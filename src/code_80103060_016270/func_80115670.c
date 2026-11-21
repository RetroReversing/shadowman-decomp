#include "common.h"

/* adapted from similar verified C in func_8003CF70 in PENNY RACERS (matched), with its names changed by decompdecomp */
/* identical to func_8008CFF0 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
extern u32 D_80000308;
extern char D_00102510[];
extern char D_00102514[];
s32 func_80116750(void *, void *, s32);

/* Reads one 32-bit word from the cartridge (ROM) at romOffset, relative to D_80000308,
 * through the uncached cart window, into *dst. Waits until the PI DMA/IO is idle first.
 * Asserts when dst is NULL. Always returns 0. */
s32 func_80115670(s32 romOffsetArg, s32 *dstArg)
{
  s32 *dst;
  s32 romOffset;
  romOffset = romOffsetArg;
  dst = dstArg;
  if (dst == NULL)
  {
    func_80116750(D_00102510, D_00102514, 0x3D);
  }
  while ((*((vu32 *) 0xA4600010)) & 3)
  {
  }

  *dst = *((s32 *) (((*((u32 *) &D_80000308)) | romOffset) | 0xA0000000));
  
  return 0;
}
