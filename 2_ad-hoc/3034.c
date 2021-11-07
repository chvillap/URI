// https://www.beecrowd.com.br/judge/en/problems/view/3034

#include <stdio.h>

int sieve_of_eratosthenes(int N, int *array) {
    int i, j;

    array[0] = array[1] = 0;
    for (i = 2; i <= N; ++i)
        array[i] = 1;
    
    for (i = 2; i <= N; ++i) {
        for (j = i*2; j <= N; j += i)
            array[j] = 0;
    }
}

int main() {
    int n, number;
    int isprime[10003];

    sieve_of_eratosthenes(10002, isprime);

    scanf("%d", &n);

    while (n) {
        scanf("%d", &number);
        ++number;

        if (!(number % 7) && (number % 2) && isprime[number + 2])
            puts("Yes");
        else
            puts("No");

        --n;
    }

    return 0;
}
