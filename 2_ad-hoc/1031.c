// https://www.urionlinejudge.com.br/judge/en/problems/view/1031

#include <stdio.h>
#include <string.h>

int survivor(int n, int k)
{
    int i, Tnk = 0;

    for (i = 1; i < n; ++i)
        Tnk = (Tnk + k) % i;

    return Tnk;
}

int main()
{
    int N, k;

    while (1) {
        scanf("%d", &N);

        if (!N)
            break;

        k = 1;
        while (survivor(N, k) + 2 != 13)
            ++k;

        printf("%d\n", k);
    }

    return 0;
}
