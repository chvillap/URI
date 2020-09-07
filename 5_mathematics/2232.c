// https://www.urionlinejudge.com.br/judge/en/problems/view/2232

#include <stdio.h>

int main()
{
    int T, N;
    unsigned int pow2;

    scanf("%d", &T);

    while (T) {
        scanf("%d", &N);

        pow2 = 1u;
        while (N--)
            pow2 <<= 1;

        printf("%u\n", pow2 - 1);
        --T;
    }

    return 0;
}
