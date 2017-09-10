// https://www.urionlinejudge.com.br/judge/en/problems/view/1061

#include <stdio.h>

int main()
{
    char line[15];
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    int time1, time2, delta;
    int d, h, m, s;

    fgets(line, 15, stdin);
    sscanf(line + 4, "%d", &d1);
    fgets(line, 15, stdin);
    sscanf(line, "%d : %d : %d", &h1, &m1, &s1);

    fgets(line, 15, stdin);
    sscanf(line + 4, "%d", &d2);
    fgets(line, 15, stdin);
    sscanf(line, "%d : %d : %d", &h2, &m2, &s2);

    time1 = s1 + m1 * 60 + h1 * 3600 + d1 * 86400;
    time2 = s2 + m2 * 60 + h2 * 3600 + d2 * 86400;
    delta = time2 - time1;

    d = delta / 86400;
    h = delta % 86400 / 3600;
    m = delta % 86400 % 3600 / 60;
    s = delta % 86400 % 3600 % 60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);

    return 0;
}
