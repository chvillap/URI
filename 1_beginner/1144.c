// https://www.urionlinejudge.com.br/judge/en/problems/view/1144

#include <stdio.h>

int main()
{
    long N, i;

    scanf("%ld", &N);

    for (i = 1; i <= N; ++i) {
        long square = i * i;
        long cube = square * i;

        printf("%ld %ld %ld\n%ld %ld %ld\n",
            i, square, cube, i, square + 1, cube + 1);
    }

    return 0;
}
