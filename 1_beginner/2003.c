// https://www.urionlinejudge.com.br/judge/en/problems/view/2003

#include <stdio.h>

int main()
{
    int hours, minutes, delay;

    while (scanf("%d:%d", &hours, &minutes) != EOF) {
        ++hours;
        delay = (hours * 60 + minutes) - 480;
        printf("Atraso maximo: %d\n", (delay > 0 ? delay : 0));
    }

    return 0;
}