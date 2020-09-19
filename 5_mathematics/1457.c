// https://www.urionlinejudge.com.br/judge/en/problems/view/1457

#include <stdio.h>

unsigned long long kfactor(int n, int k)
{
    int term;
    unsigned long long result = 1;

    term = n;
    while (term >= 1) {
        result *= term;
        term -= k;
    }

    return result;
}

int main()
{
    char input[25], *p;
    int T, N, K;

    scanf("%d", &T);

    while (T) {
        scanf("%s", input);
        sscanf(input, "%d", &N);

        for (p = input; *p != '!'; ++p);
        for (K = 0; *p != '\0'; ++p, ++K);

        printf("%llu\n", kfactor(N, K));

        --T;
    }

    return 0;
}
