// https://www.urionlinejudge.com.br/judge/en/problems/view/2718

#include <stdio.h>
#include <string.h>

int main()
{
    long long N, X;
    long long length, max_length;

    scanf("%lld", &N);

    while (N) {
        scanf("%lld", &X);

        length = 0;
        max_length = 0;

        while (X >= 2) {
            if (X % 2)
                ++length;
            else {
                if (length > max_length)
                    max_length = length;
                length = 0;
            }
            X /= 2;
        }

        length += X;
        if (length > max_length)
            max_length = length;

        printf("%lld\n", max_length);
        --N;
    }

    return 0;
}