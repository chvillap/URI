// https://www.beecrowd.com.br/judge/en/problems/view/2180

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
    int weight, speed, hours, days;
    int i, nprimes, isprime[61001];

    scanf("%d", &weight);
    sieve_of_eratosthenes(weight + 1000, isprime);

    speed = nprimes = 0;
    i = weight;
    while (nprimes < 10) {
        if (isprime[i]) {
            speed += i;
            ++nprimes;
        }
        ++i;
    }

    hours = 60000000 / speed;
    days = hours / 24;

    printf("%d km/h\n%d h / %d d\n", speed, hours, days);

    return 0;
}

