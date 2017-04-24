// https://www.urionlinejudge.com.br/judge/en/problems/view/2311

#include <stdio.h>

#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int main()
{
    int N, i;

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        char name[50];
        float difficult, score = 0.f;
        float s[7];
        float smin, smax;
        int j;

        scanf("%s", name);
        scanf("%f", &difficult);
        scanf("%f %f %f %f %f %f %f",
            &s[0], &s[1], &s[2], &s[3], &s[4], &s[5], &s[6]);

        smin = s[0];
        for (j = 1; j < 7; ++j)
            smin = MIN(smin, s[j]);

        smax = s[0];
        for (j = 1; j < 7; ++j)
            smax = MAX(smax, s[j]);

        for (j = 0; j < 7; ++j)
            score += s[j];
        score = difficult * (score - smin - smax);

        printf("%s %.2f\n", name, score);
    }

    return 0;
}
