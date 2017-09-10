// https://www.urionlinejudge.com.br/judge/en/problems/view/1064

#include <stdio.h>

int main()
{
    float n, sum = 0.0f;
    int i, positives = 0;

    for (i = 0; i < 6; ++i) {
        scanf("%f", &n);

        if (n > 0.0f) {
            sum += n;
            ++positives;
        }
    }

    printf("%d valores positivos\n%.1f\n", positives, sum / positives);

    return 0;
}
