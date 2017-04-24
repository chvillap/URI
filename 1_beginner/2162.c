// https://www.urionlinejudge.com.br/judge/en/problems/view/2162

#include <stdio.h>

int main()
{
    int N, i;
    int height, prevHeight;
    int peak, samePattern = 1;

    scanf("%d", &N);

    if (N == 1) {
        scanf("%d", &height);
        puts("1");
    } else {
        scanf("%d", &prevHeight);
        scanf("%d", &height);

        if (height == prevHeight)
            samePattern = 0;
        else {
            peak = height > prevHeight;
            for (i = 2; i < N && samePattern; ++i) {
                prevHeight = height;
                scanf("%d", &height);

                if (height == prevHeight ||
                    peak && height > prevHeight ||
                    !peak && height < prevHeight)
                    samePattern = 0;
                else
                    peak = height > prevHeight;
            }
        }

        printf("%d\n", samePattern);
    }

    return 0;
}
