// https://www.urionlinejudge.com.br/judge/en/problems/view/1060

#include <stdio.h>

int main()
{
    int i, positives = 0;
    float num;

    for (i = 0; i < 6; ++i) {
        scanf("%f", &num);

        if (num > 0)
            ++positives;
    }

    printf("%d valores positivos\n", positives);

    return 0;
}
