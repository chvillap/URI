// https://www.urionlinejudge.com.br/judge/en/problems/view/1212

#include <stdio.h>

int main()
{
    unsigned long long n1, n2, d1, d2;
    int carry, count;

    while (1) {
        scanf("%llu%llu", &n1, &n2);

        if (!(n1 || n2))
            break;

        carry = 0;
        count = 0;
        while (n1 && n2) {
            d1 = (n1 % 10);
            d2 = (n2 % 10);

            carry = (d1 + d2 + carry) > 9;
            if (carry)
                ++count;

            n1 /= 10;
            n2 /= 10;
        }

        if (n1)
            count += (n1 % 10 + carry) > 9;
        else if (n2)
            count += (n2 % 10 + carry) > 9;

        if (!count)
            puts("No carry operation.");
        else if (count == 1)
            puts("1 carry operation.");
        else
            printf("%d carry operations.\n", count);
    }

    return 0;
}
