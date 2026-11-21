typedef struct { s16 key; s16 pad; s32 b; s32 c; } Row;
typedef struct { s16 count; s16 pad; Row *rows; } Tbl;

void func_8026DFDC(Tbl **arg0) {
    Tbl *t = *arg0;
    Row *rows = t->rows;
    s32 i, j;
    Row tmp;
    for (i = 0; i < t->count - 1; i++) {
        for (j = i + 1; j < t->count; j++) {
            if (rows[i].key > rows[j].key) {
                tmp = rows[i];
                rows[i] = rows[j];
                rows[j] = tmp;
            }
        }
    }
}
