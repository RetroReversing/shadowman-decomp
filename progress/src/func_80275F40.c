typedef struct Node { struct Node *next; char pad[0x10]; s16 id; s16 pad2; s32 kind; } Node;
extern Node **D_80030C5C;
extern s32 D_8005E9D4;

Node *func_80275F40(s16 id) {
    s32 i;
    Node *n;
    for (i = 0; i <= D_8005E9D4; i++) {
        for (n = D_80030C5C[i]; n != NULL; n = n->next) {
            if (n->kind == 1 && n->id == id) return n;
        }
    }
    return NULL;
}
