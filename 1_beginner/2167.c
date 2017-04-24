// https://www.urionlinejudge.com.br/judge/en/problems/view/2167

#include <stdio.h>

int main()
{
    int N;
    int rpm, lastRpm;
    int i, index = 0;

    scanf("%d", &N);
    scanf("%d", &lastRpm);

    for (i = 1; i < N; ++i) {
        scanf("%d", &rpm);

        if (!index && rpm < lastRpm)
            index = i + 1;

        lastRpm = rpm;
    }
    printf("%d\n", index);

    return 0;
}
