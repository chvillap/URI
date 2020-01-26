// https://www.urionlinejudge.com.br/judge/en/problems/view/1557

#include <stdio.h>

int main()
{
    int N;
    int pow2[30] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096,
                    8192, 16384, 32768, 65536, 131072, 262144, 524288,
                    1048576, 2097152, 4194304, 8388608, 16777216, 33554432,
                    67108864, 134217728, 268435456, 536870912};
    int lengths[30] = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 5,
                       5, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9};
    int i, j, exp;
    char format[10];

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;

        for (i = 0; i < N; ++i) {
            exp = i;
            for (j = 0; j < N - 1; ++j, ++exp)
                printf("%*d ", lengths[2*N - 1], pow2[exp]);
            printf("%*d\n", lengths[2*N - 1], pow2[exp]);
        }
        putchar('\n');
    }

    return 0;
}
