// https://www.beecrowd.com.br/judge/en/problems/view/2087

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node_t
{
    struct node_t *children[256];
    int is_terminal;
};

struct node_t * trie_create()
{
    struct node_t *x = (struct node_t *) malloc(sizeof(struct node_t));
    memset(x->children, 0, sizeof(x->children));
    x->is_terminal = 0;
    
    return x;
}

int trie_insert(struct node_t *x, char key[])
{
    int i;
    int length = strlen(key);
    int created = 0;
    int had_prefix = 0;

    for (i = 0; i < length; ++i) {
        if (x->children[key[i]] == NULL) {
            x->children[key[i]] = trie_create();
            if (!created)
                created = 1;
            if (x->is_terminal)
                had_prefix = 1;
        }
        x = x->children[key[i]];
    }
    x->is_terminal = 1;
    
    if (!created || had_prefix)
        return 1; // a prefix or longer word already existed in the tree
    return 0;
}

void trie_delete(struct node_t *x)
{
    int i;

    for (i = 0; i < 256; ++i) {
        if (x->children[i] != NULL)
            trie_delete(x->children[i]);
    }
    free(x);
}

int main()
{
    int N, i, bad;
    char string[101];
    struct node_t *trie;

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;

        trie = trie_create();
        bad = 0;

        for (i = 0; i < N; ++i) {
            scanf("%s", string);
            if (!bad)
                bad = trie_insert(trie, string);
        }

        if (bad)
            puts("Conjunto Ruim");
        else
            puts("Conjunto Bom");

        trie_delete(trie);
    }

    return 0;
}
