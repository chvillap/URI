// https://www.urionlinejudge.com.br/judge/en/problems/view/2544

#include <stdio.h>

int log2_int(int x) {
    int result = 0;
    while (x > 1) {
        x >>= 1;
        ++result;
    }
    return result;
}

int main()
{
    int N;
    int result;

    while (scanf("%d", &N) != EOF) {
        printf("%d\n", log2_int(N));
    }

    return 0;
}