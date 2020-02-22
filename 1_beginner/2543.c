// https://www.urionlinejudge.com.br/judge/en/problems/view/2543

#include <stdio.h>

int main()
{
    int N, I, i, j;
    int count;

    while (scanf("%d%d", &N, &I) != EOF) {
        count = 0;
        
        while (N) {
            scanf("%d%d", &i, &j);

            if (i == I && !j)
                ++count;

            --N;
        }
        printf("%d\n", count);
    }

    return 0;
}