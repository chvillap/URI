// https://www.urionlinejudge.com.br/judge/en/problems/view/2172

#include <stdio.h>

int main()
{
    unsigned int X;
    unsigned long long int M;

    while (scanf("%u %llu", &X, &M) !=  EOF) {
        if (!X && !M)
            break;

        printf("%llu\n", X * M);
    }

    return 0;
}
