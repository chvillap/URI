// https://www.urionlinejudge.com.br/judge/en/problems/view/1612

#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    long N;

    scanf("%d", &T);

    while (T > 0) {
        scanf("%ld", &N);
        printf("%ld\n", (long) ceil(N / 2.0));

        --T;
    }

    return 0;
}
