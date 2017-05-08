// https://www.urionlinejudge.com.br/judge/en/problems/view/1125

#include <stdio.h>
#include <string.h>

int main()
{
    while (1) {
        int races, pilots, systems;
        int arrivals[100][100];
        int lastPos[10], points[10][100];
        int earnedPts[100], winners[100];
        int r, s, p, v, w;

        scanf("%d%d", &races, &pilots);

        if (!races && !pilots)
            break;

        for (r = 0; r < races; ++r) {
            for (p = 0; p < pilots; ++p)
                scanf("%d", &arrivals[r][p]);
        }

        scanf("%d", &systems);

        for (s = 0; s < systems; ++s) {
            scanf("%d", &lastPos[s]);

            for (v = 0; v < lastPos[s]; ++v)
                scanf("%d", &points[s][v]);
        }

        for (s = 0; s < systems; ++s) {
            int maxPts = -1;

            memset(earnedPts, 0, sizeof(earnedPts));

            for (r = 0; r < races; ++r) {
                int remaining = lastPos[s];

                for (p = 0; remaining && p < pilots; ++p) {
                    if (arrivals[r][p] <= lastPos[s]) {
                        earnedPts[p] += points[s][arrivals[r][p] - 1];
                        --remaining;
                    }
                }
            }

            for (p = 0; p < pilots; ++p) {
                if (earnedPts[p] == maxPts)
                    winners[w++] = p + 1;
                else if (earnedPts[p] > maxPts) {
                    w = 0;
                    winners[w++] = p + 1;
                    maxPts = earnedPts[p];
                }
            }

            printf("%d", winners[0]);
            for (p = 1; p < w; ++p)
                printf(" %d", winners[p]);
            putchar('\n');
        }
    }

    return 0;
}
