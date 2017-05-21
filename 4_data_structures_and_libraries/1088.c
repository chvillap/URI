// https://www.urionlinejudge.com.br/judge/en/problems/view/1088

#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1) {
        int N;
        int array[100001];
        int i, j, inversions = 0;

        scanf("%d", &N);
        if (!N)
            break;

        for (i = 1; i <= N; ++i)
            scanf("%d", &array[i]);

        for (i = 1; i <= N; ) {
            if (array[i] != i) {
                inversions += 2 * (array[i] - i) - 1;

                j = array[i];
                array[i] = array[j];
                array[j] = j;
            } else
                ++i;
        }

        if (inversions % 2)
            puts("Marcelo");
        else
            puts("Carlos");
    }

    return 0;
}
