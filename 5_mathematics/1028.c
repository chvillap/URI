// https://www.urionlinejudge.com.br/judge/en/problems/view/1028

#include <stdio.h>

int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int N, F1, F2;

    scanf("%d", &N);

    while (N) {
        scanf("%d%d", &F1, &F2);
        printf("%d\n", gcd(F1, F2));

        --N;
    }

    return 0;
}
