// https://www.urionlinejudge.com.br/judge/en/problems/view/1066

#include <stdio.h>

int main()
{
    int i, num;
    int evens = 0, odds = 0, positives = 0, negatives = 0;

    for (i = 0; i < 5; ++i) {
        scanf("%d", &num);

        if (num > 0)
            ++positives;
        else if (num < 0)
            ++negatives;

        if (!(num % 2))
            ++evens;
        else
            ++odds;
    }

    printf("%d valor(es) par(es)\n", evens);
    printf("%d valor(es) impar(es)\n", odds);
    printf("%d valor(es) positivo(s)\n", positives);
    printf("%d valor(es) negativo(s)\n", negatives);

    return 0;
}
