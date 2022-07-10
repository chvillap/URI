// https://www.beecrowd.com.br/judge/en/problems/view/2393

#include <stdio.h>
#include <string.h>

int main()
{
    int N, Xi, Xf, Yi, Yf;
    int sea[101][101];
    int r, s, area;

    memset(sea, 0, sizeof(sea));
    scanf("%d", &N);

    while (N) {
        scanf("%d%d%d%d", &Xi, &Xf, &Yi, &Yf);

        for (r = Xi; r < Xf; ++r)
            for (s = Yi; s < Yf; ++s)
                sea[r][s] = 1;

        --N;
    }

    area = 0;
    for (r = 0; r <= 100; ++r)
        for (s = 0; s <= 100; ++s)
            area += sea[r][s];

    printf("%d\n", area);

    return 0;
}
