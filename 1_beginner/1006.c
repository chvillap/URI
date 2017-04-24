// https://www.urionlinejudge.com.br/judge/en/problems/view/1006

#include <stdio.h>

int main()
{
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    printf("MEDIA = %.1lf\n", (2. * a + 3. * b + 5. * c) / 10.);

    return 0;
}
