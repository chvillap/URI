// https://www.urionlinejudge.com.br/judge/en/problems/view/1025

#include <stdio.h>

void countingSort(int *array, int size, int max, int *output)
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

int binarySearch(int *array, int size, int query)
{
    int beg = 0;
    int end = size - 1;

    while (beg <= end) {
        int mid = (beg + end) / 2;

        if (query == array[mid])
            return mid;

        if (query < array[mid])
            end = mid - 1;
        else // if (query > array[mid])
            beg = mid + 1;
    }
    return -1;
}

int main()
{
    int testCase = 0;

    while (1) {
        int N, Q;
        int numbers[100000], sorted[100000], query;
        int i, pos;

        scanf("%d%d", &N, &Q);

        if (!N && !Q)
            break;

        for (i = 0; i < N; ++i)
            scanf("%d", &numbers[i]);

        countingSort(numbers, N, 10000, sorted);

        printf("CASE# %d:\n", ++testCase);

        for (i = 0; i < Q; ++i) {
            scanf("%d", &query);

            pos = binarySearch(sorted, N, query);

            if (pos < 0)
                printf("%d not found\n", query);
            else {
                while (pos > 0 && sorted[pos - 1] == query)
                    --pos;

                printf("%d found at %d\n", query, pos + 1);
            }
        }
    }

    return 0;
}
