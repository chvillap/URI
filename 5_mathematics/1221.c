// https://www.urionlinejudge.com.br/judge/en/problems/view/1221

#include <stdio.h>
#include <math.h>

int main()
{
    int N, prime;
    unsigned long X, sqrtX, i;

    scanf("%d", &N);

    while (N) {
        scanf("%lu", &X);

        sqrtX = (unsigned long) floor(sqrt((double) X));
        prime = 1;
        for (i = 2; i <= sqrtX; ++i) {
            if (!(X % i))
                prime = 0;
        }

        if (prime)
            puts("Prime");
        else
            puts("Not Prime");

        --N;
    }

    return 0;
}
