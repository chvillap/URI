// https://www.urionlinejudge.com.br/judge/en/problems/view/1021

#include <stdio.h>

int main()
{
    double N;
    long int cents;
    long int bnotes[] = {10000, 5000, 2000, 1000, 500, 200};
    long int coins[] = {100, 50, 25, 10, 5, 1};
    long int amount;
    int i;

    scanf("%lf", &N);
    cents = (long int) (N * 100);

    printf("NOTAS:\n");
    for (i = 0; i < 6; ++i) {
        printf("%ld nota(s) de R$ %.2lf\n",
            cents / bnotes[i], bnotes[i] / 100.0);
        cents %= bnotes[i];
    }

    printf("MOEDAS:\n");
    for (i = 0; i < 6; ++i) {
        printf("%ld moeda(s) de R$ %.2lf\n",
            cents / coins[i], coins[i] / 100.0);
        cents %= coins[i];
    }

    return 0;
}
