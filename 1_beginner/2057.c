// https://www.urionlinejudge.com.br/judge/en/problems/view/2057

#include <stdio.h>

int main()
{
    int s, t, f;
    int arrival;

    scanf("%d%d%d", &s, &t, &f);

    arrival = (s + t + f);
    if (arrival < 0)
        arrival += 24;
    else
        arrival %= 24;

    printf("%d\n", arrival);

    return 0;
}