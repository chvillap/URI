// https://www.urionlinejudge.com.br/judge/en/problems/view/1179

#include <stdio.h>

void imprime(const char *nome, int array[], int npos)
{
    int j;

    for (j = 0; j < npos; ++j)
        printf("%s[%d] = %d\n", nome, j, array[j]);
}

int main()
{
    int j, N;
    int p, i, par[5], impar[5];

    for (j = 0, p = 0, i = 0; j < 15; ++j) {
        scanf("%d", &N);

        if (N % 2) {
            impar[i++] = N;
            if (i == 5) {
                imprime("impar", impar, 5);
                i = 0;
            }
        } else {
            par[p++] = N;
            if (p == 5) {
                imprime("par", par, 5);
                p = 0;
            }
        }
    }

    imprime("impar", impar, i);
    imprime("par", par, p);

    return 0;
}
