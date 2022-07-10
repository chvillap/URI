// https://www.beecrowd.com.br/judge/en/problems/view/2428

#include <stdio.h>

int gcd(int a, int b)
{
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int A[4];

    scanf("%d%d%d%d", &A[0], &A[1], &A[2], &A[3]);

    // ???

    return 0;
}
