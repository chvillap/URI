// https://www.urionlinejudge.com.br/judge/en/problems/view/1871

#include <stdio.h>

int removeZeros(int num)
{
    int result = 0;
    int mult = 1;

    while (num > 0) {
        int digit = num % 10;

        if (digit) {
            result += mult * digit;
            mult *= 10;
        }
        num /= 10;
    }
    return result;
}

int main()
{
    while (1) {
        int M, N;

        scanf("%d%d", &M, &N);
        if (!(M || N))
            break;

        printf("%d\n", removeZeros(M + N));
    }

    return 0;
}
