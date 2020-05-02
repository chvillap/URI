// https://www.urionlinejudge.com.br/judge/en/problems/view/2846

#include <stdio.h>

int main()
{
    int K;
    int a = 0, b = 1;
    int fnot, index = 0;

    scanf("%d", &K);

    while (index < K) {
        if (b - a > 1) {
            fnot = a + 1;
            while (fnot < b && index < K) {
                ++index;
                ++fnot;
            }
        }
        b = a + b;
        a = b - a;
    }

    printf("%d\n", fnot - 1);

    return 0;
}