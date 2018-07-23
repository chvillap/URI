// https://www.urionlinejudge.com.br/judge/en/problems/view/2633

#include <stdio.h>

struct meat_expdate_t {
    char meat[21];
    int expdate;
};

void insertion_sort(struct meat_expdate_t *data, int size)
{
    int i, j;
    struct meat_expdate_t tmp;

    for (i = 1; i < size; ++i) {
        tmp = data[i];
        j = i - 1;
        while (j >= 0 && data[j].expdate > tmp.expdate) {
            data[j + 1] = data[j];
            --j;
        }
        data[j + 1] = tmp;
    }
}

int main()
{
    int N, i;

    while (scanf("%d", &N) != EOF) {
        struct meat_expdate_t data[10];

        for (i = 0; i < N; ++i)
            scanf("%s%d", data[i].meat, &data[i].expdate);

        insertion_sort(data, N);

        printf("%s", data[0].meat);
        for (i = 1; i < N; ++i)
            printf(" %s", data[i].meat);
        putchar('\n');
    }

    return 0;
}
