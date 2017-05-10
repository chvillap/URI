// https://www.urionlinejudge.com.br/judge/en/problems/view/1305

#include <stdio.h>

int main()
{
    double num, cutoff;

    while (scanf("%lf%lf", &num, &cutoff) != EOF) {
        printf("%d\n", (int) (num + 1.0 - cutoff));
    }

    return 0;
}
