// https://www.urionlinejudge.com.br/judge/en/problems/view/1154

#include <stdio.h>

int main()
{
    int x, n = 0;
    double average = 0.0;

    while (1) {
        scanf("%d", &x);
        if (x < 0)
            break;

        average += x;
        ++n;
    }
    average /= n;

    printf("%.2lf\n", average);

    return 0;
}
