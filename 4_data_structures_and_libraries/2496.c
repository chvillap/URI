// https://www.urionlinejudge.com.br/judge/en/problems/view/2496

#include <stdio.h>

int check_swaps(char *seq, int length) {

    int i, j, max, swaps = 0;
    char tmp;

    for (i = length; i > 0; --i) {
        for (max = 0, j = 1; j < i; ++j) {
            if (seq[j] >= seq[max])
                max = j;
        }
        if (seq[max] != seq[i - 1]) {
            tmp = seq[max];
            seq[max] = seq[i - 1];
            seq[i - 1] = tmp;
            ++swaps;
        }
        if (swaps > 1)
            break;
    }
    return swaps;
}

int main()
{
    int N, M, i, swaps;
    char seq[27];

    scanf("%d", &N);

    while (N) {
        scanf("%d", &M);
        scanf("%s", seq);

        swaps = check_swaps(seq, M);

        if (swaps > 1)
            puts("There aren't the chance.");
        else
            puts("There are the chance.");

        --N;
    }

    return 0;
}
