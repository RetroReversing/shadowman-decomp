/* adapted from similar verified C in __osDequeueThread in PENNY RACERS (matched), with its names changed by decompdecomp */
/* identical to func_80117370 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
/* identical to func_80117370 in V-RALLY (matched), with its names changed by decompdecomp */
/* identical to func_8008EE00 in V-RALLY (matched), with its names changed by decompdecomp */

void func_80117370(void **arg0, void *arg1) { void *cur = *arg0; while (cur) { if (cur == arg1) { *arg0 = *(void **)cur; return; } arg0 = cur; cur = *(void **)cur; } }
