// https://www.urionlinejudge.com.br/judge/en/problems/view/2493

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int X[50], Y[50], Z[50], E[50];
char N[50][51], R[50];

int compare(const void *a, const void *b)
{
    const int *p1 = (const int *) a;
    const int *p2 = (const int *) b;

    return strcmp(N[*p1], N[*p2]);
}

int main()
{
    int T;

    while (scanf("%d", &T) != EOF) {
        int wontProceed[50];
        int length = 0;
        int i;

        for (i = 0; i < T; ++i)
            scanf("%d %d=%d", &X[i], &Y[i], &Z[i]);

        for (i = 0; i < T; ++i)
            scanf("%s %d %c", &N[i], &E[i], &R[i]);

        for (i = 0; i < T; ++i) {
            switch (R[i]) {
                case '+':
                    if (X[E[i] - 1] + Y[E[i] - 1] != Z[E[i] - 1])
                        wontProceed[length++] = i;
                    break;
                case '-':
                    if (X[E[i] - 1] - Y[E[i] - 1] != Z[E[i] - 1])
                        wontProceed[length++] = i;
                    break;
                case '*':
                    if (X[E[i] - 1] * Y[E[i] - 1] != Z[E[i] - 1])
                        wontProceed[length++] = i;
                    break;
                case 'I':
                    if (X[E[i] - 1] + Y[E[i] - 1] == Z[E[i] - 1] ||
                        X[E[i] - 1] - Y[E[i] - 1] == Z[E[i] - 1] ||
                        X[E[i] - 1] * Y[E[i] - 1] == Z[E[i] - 1])
                        wontProceed[length++] = i;
                    break;
            }
        }

        if (length == 0)
            printf("You Shall All Pass!\n");
        else if (length == T)
            printf("None Shall Pass!\n");
        else {
            qsort(wontProceed, length, sizeof(int), compare);
            for (i = 0; i < length - 1; ++i)
                printf("%s ", N[wontProceed[i]]);
            printf("%s\n", N[wontProceed[i]]);
        }
    }

    return 0;
}
