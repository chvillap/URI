// https://www.beecrowd.com.br/judge/en/problems/view/1284

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET_SIZE 26
#define FROMASCII(x) ((int) ((x) - 'a'))

typedef struct node_t
{
    struct node_t *children[ALPHABET_SIZE];
    int is_terminal;
    int num_children;
} node_t;

node_t* trie_create()
{
    node_t *x = (node_t *) malloc(sizeof(node_t));
    memset(x->children, 0, sizeof(x->children));
    x->is_terminal = 0;
    x->num_children = 0;
    return x;
}

void trie_insert(node_t *x, char key[])
{
    char *p = NULL;
    for (p = key; *p != '\0'; ++p) {
        if (x->children[FROMASCII(*p)] == NULL) {
            x->children[FROMASCII(*p)] = trie_create();
            x->num_children += 1;
        }
        x = x->children[FROMASCII(*p)];
    }
    x->is_terminal = 1;
}

void trie_destroy(node_t *x)
{
    int i = 0;
    while (i < ALPHABET_SIZE) {
        if (x->children[i] != NULL)
            trie_destroy(x->children[i]);
        ++i;
    }
    free(x);
}


int trie_count_nodes_with_multiple_children(node_t *x, char key[])
{
    char *p = NULL;
    int count = 0;
    for (p = key; *p != '\0'; ++p) {
        if (x->children[FROMASCII(*p)] == NULL)
            return -1;
        count += (x->num_children > 1) || (x->is_terminal);
        x = x->children[FROMASCII(*p)];
    }
    return count;
}

int main()
{
    int N, i;
    char dict[100000][81];
    node_t *trie;
    double avg_keystrokes;

    while (scanf("%d", &N) != EOF) {
        trie = trie_create();

        for (i = 0; i < N; ++i) {
            scanf("%s", dict[i]);
            trie_insert(trie, dict[i]);
        }

        avg_keystrokes = 0.0;
        for (i = 0; i < N; ++i) {
            avg_keystrokes += (double) (trie->num_children == 1) +
                trie_count_nodes_with_multiple_children(trie, dict[i]);
        }
        avg_keystrokes /= (double) N;

        printf("%.2lf\n", avg_keystrokes);
        trie_destroy(trie);
    }

    return 0;
}
