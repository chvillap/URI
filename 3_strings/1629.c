// https://www.urionlinejudge.com.br/judge/en/problems/view/1629

#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;

    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    while (1) {
        int N;

        scanf("%d", &N);
        if (!N)
            break;

        while (N) {
            int checksum, bit, zeros = 0, ones = 0;
            char compacted[1001], *ptr;

            scanf("%s", compacted);

            for (ptr = compacted, bit = 0; *ptr != '\0'; ++ptr, bit = !bit) {
                if (bit)
                    ones += (int) (*ptr - '0');
                else
                    zeros += (int) (*ptr - '0');
            }

            checksum = sumDigits(zeros) + sumDigits(ones);
            printf("%d\n", checksum);

            --N;
        }
    }

    return 0;
}
