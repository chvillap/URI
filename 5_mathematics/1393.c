// https://www.urionlinejudge.com.br/judge/en/problems/view/1393

#include <stdio.h>

int main()
{
    int N, i;
    long fibo[41];

    fibo[0] = fibo[1] = 1;
    for (i = 2; i <= 40; ++i)
        fibo[i] = fibo[i-1] + fibo[i-2];

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;

        printf("%ld\n", fibo[N]);
    }

    return 0;
}
