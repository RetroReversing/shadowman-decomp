typedef struct { u32 state; s32 timer; } SA;
typedef struct { s32 a; s32 reload; s32 max; } SCfg;
typedef struct { s32 pos; s32 pad; s32 pad2; s32 pad3; SCfg *cfg; } SB;
typedef struct { char pad[0x68]; SB *b; SA *a; } SC;
extern s32 D_80052770;
#define DT (*(s32 *)((char *)&D_80052770 + 4))

void func_8024B720(void *arg0) {
    SC *o = *(SC **)((char *)arg0 + 8);
    SA *a = o->a;
    SB *b = o->b;
    SCfg *c = b->cfg;
    s32 m;
    switch (a->state) {
    case 2:
        break;
    case 0:
        b->pos = 0;
        break;
    case 1:
        a->timer -= DT;
        if (a->timer <= 0) {
            b->pos += DT;
            a->timer = c->reload;
        }
        m = c->max - 1;
        if (b->pos >= m) {
            b->pos = m;
            a->state = 2;
        }
        break;
    case 3:
        a->timer -= DT;
        if (a->timer <= 0) {
            b->pos -= DT;
            a->timer = c->reload;
        }
        if (b->pos <= 0) {
            b->pos = 0;
            a->state = 0;
        }
        break;
    }
}
