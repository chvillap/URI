// https://www.beecrowd.com.br/judge/en/problems/view/2443

#include <stdio.h>
#define abs(z) ((z > 0) ? (z) : (-z))

int gcd(int x, int y) {
    if (!y)
        return x;
    return gcd(y, x % y);
}

int main() {
    int a, b, c, d;
    int num, den, div;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    num = (a * d) + (c * b);
    den = b * d;
    div = gcd(num, den);
    num /= div;
    den /= div;

    printf("%d %d\n", num, den);

    return 0;
}
