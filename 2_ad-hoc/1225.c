// https://www.urionlinejudge.com.br/judge/en/problems/view/1225

#include <stdio.h>

int main()
{
    int N;

    while (scanf("%d", &N) != EOF) {
        int i, notes[10000], sum = 0;

        for (i = 0; i < N; ++i) {
            scanf("%d", &notes[i]);
            sum += notes[i];
        }

        if (sum % N)
            puts("-1");
        else {
            int avg = sum / N;
            int sumdiffs = 0;

            for (i = 0; i < N; ++i)
                if (notes[i] > avg)
                    sumdiffs += notes[i] - avg;

            printf("%d\n", sumdiffs + 1);
        }
    }

    return 0;
}
