// https://www.urionlinejudge.com.br/judge/pt/problems/view/1162

#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    for (; N > 0; --N) {
        int L, i, j;
        int wagons[50];
        int swaps = 0;

        scanf("%d", &L);
        for (i = 0; i < L; ++i)
            scanf("%d", &wagons[i]);

        for (i = 0; i < L - 1; ++i) {
            for (j = i + 1; j < L; ++j) {
                if (wagons[i] > wagons[j]) {
                    int tmp = wagons[i];
                    wagons[i] = wagons[j];
                    wagons[j] = tmp;

                    ++swaps;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }

    return 0;
}
