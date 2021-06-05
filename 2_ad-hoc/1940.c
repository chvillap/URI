// https://www.urionlinejudge.com.br/judge/en/problems/view/1940

#include <stdio.h>
#include <string.h>

int main()
{
    int J, R;
    int i, x, max, argmax, pts[500];

    scanf("%d%d", &J, &R);

    memset(pts, 0, sizeof(pts));

    for (i = 0; i < J * R; ++i) {
        scanf("%d", &x);
        pts[i % J] += x;
    }

    for (i = 0, max = 0; i < J; ++i) {
        if (pts[i] >= max) {
            max = pts[i];
            argmax = i;
        }
    }

    printf("%d\n", argmax + 1);

    return 0;
}
