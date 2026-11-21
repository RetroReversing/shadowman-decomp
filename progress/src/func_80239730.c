typedef struct Node { struct Node *next; char pad[0x10]; s16 id; s16 pad2; s32 key; } Node;
Node *func_80239730(Node **arg0, s32 arg1, s16 arg2) {
    Node *n = *arg0;
    Node *next;
    while (n != NULL) {
        next = n->next;
        if (n->key == arg1 && n->id == arg2) return n;
        n = next;
    }
    return NULL;
}
