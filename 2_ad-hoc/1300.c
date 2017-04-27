// https://www.urionlinejudge.com.br/judge/en/problems/view/1300

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int N, h, m;
    char hasAngle[181];

    memset(hasAngle, 'N', sizeof(hasAngle));

    h = m = 0;
    while (h < 60) {
        int angle_diff = abs(6*h - 6*m);
        int angle = MIN(angle_diff, 360 - angle_diff);

        hasAngle[angle] = 'Y';

        m = (m + 1) % 60;
        if (!(m % 12))
            ++h;
    }

    while (scanf("%d", &N) != EOF)
        printf("%c\n", hasAngle[N]);

    return 0;
}
