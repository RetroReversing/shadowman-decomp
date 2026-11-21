/* identical to func_8010C7A4 (matched), with its names changed by decompdecomp */
typedef struct { f32 key; s32 val; } HeapItem;

void func_80270238(u32 n, HeapItem *ra) {
    u32 l, ir, i, j;
    HeapItem rra;

    if (n < 2) return;
    l = (n >> 1) + 1;
    ir = n;
    for (;;) {
        if (l > 1) {
            l--;
            rra = ra[l];
        } else {
            rra = ra[ir];
            ra[ir] = ra[1];
            ir--;
            if (ir == 1) {
                ra[1] = rra;
                return;
            }
        }
        i = l;
        j = l << 1;
        while (j <= ir) {
            if (j < ir && ra[j].key < ra[j + 1].key) j++;
            if (rra.key < ra[j].key) {
                ra[i] = ra[j];
                i = j;
                j <<= 1;
            } else {
                break;
            }
        }
        ra[i] = rra;
    }
}
