// https://www.urionlinejudge.com.br/judge/en/problems/view/1980

#include <stdio.h>
#include <string.h>

unsigned long long factorial(int x)
{
    static int largest = 1;
    static unsigned long long f[16];
    int i;

    f[0] = f[1] = 1;

    for (i = largest + 1; i <= x; ++i) {
        f[i] = f[i - 1] * i;
        largest = i;
    }

    return f[x];
}

int main()
{
    char S[16];

    while (1) {
        scanf("%s", S);

        if (S[0] == '0')
            break;

        printf("%llu\n", factorial(strlen(S)));
    }

    return 0;
}
