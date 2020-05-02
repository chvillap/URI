// https://www.urionlinejudge.com.br/judge/en/problems/view/2761

#include <stdio.h>
#include <string.h>

int main()
{
    int A;
    float B;
    char C, D[52];

    while (scanf("%d%f\n%c\n", &A, &B, &C) != EOF) {
        fgets(D, 51, stdin);
        D[strlen(D) - 1] = '\0';

        printf("%d%.6f%c%s\n"
               "%d\t%.6f\t%c\t%s\n"
               "%10d%10.6f%10c%10s\n",
            A, B, C, D, A, B, C, D, A, B, C, D);
    }

    return 0;
}
