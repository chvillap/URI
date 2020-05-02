// https://www.urionlinejudge.com.br/judge/en/problems/view/2779

#include <stdio.h>

int main()
{
    int N, M, X;
    int i, stickers[101] = {0};
    int count = 0;

    scanf("%d%d", &N, &M);

    for (i = 0; i < M; ++i) {
        scanf("%d", &X);

        if (!stickers[X]) {
            stickers[X] = 1;
            ++count;
        }
    }

    printf("%d\n", N - count);
    
    return 0;
}
