// https://www.beecrowd.com.br/judge/en/problems/view/2218

#include <stdio.h>
#include <string.h>

long cache[10000];

long n_regions(int n) {
    int i = n;
    while (!cache[i])
        --i;
    for (i = i + 1; i <= n; ++i)
        cache[i] = cache[i - 1] + i;
    return cache[n];
}

int main() {
    int T, N;
    
    memset(cache, 0, sizeof(cache));
    cache[0] = 1;

    scanf("%d", &T);
    while (T) {
        scanf("%d", &N);
        printf("%ld\n", n_regions(N));
        --T;
    }

    return 0;
}
