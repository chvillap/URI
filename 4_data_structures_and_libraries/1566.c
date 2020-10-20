// https://www.urionlinejudge.com.br/judge/en/problems/view/1566

#include <stdio.h>
#include <stdlib.h>

void counting_sort(int *array, int size, int max, int *output)
{
    int i, freq[max + 1];

    for (i = 0; i <= max; ++i)
        freq[i] = 0;

    for (i = 0; i < size; ++i)
        ++freq[array[i]];

    for (i = 1; i <= max; ++i)
        freq[i] += freq[i - 1];

    for (i = size - 1; i >= 0; --i) {
        output[freq[array[i]] - 1] = array[i];
        --freq[array[i]];
    }
}

int main()
{
    int NC, N, i;
    int *height = (int *) malloc(3000000 * sizeof(int));
    int *sorted = (int *) malloc(3000000 * sizeof(int));

    scanf("%d", &NC);

    while (NC) {
        scanf("%d", &N);
        for (i = 0; i < N; ++i)
            scanf("%d", &height[i]);

        counting_sort(height, N, 230, sorted);

        printf("%d", sorted[0]);
        for (i = 1; i < N; ++i)
            printf(" %d", sorted[i]);
        putchar('\n');

        --NC;
    }

    free(sorted);
    free(height);

    return 0;
}
