// https://www.urionlinejudge.com.br/judge/en/problems/view/2686

#include <stdio.h>

int main()
{
    double M;
    int time, hour, min, sec;

    while (scanf("%lf", &M) != EOF) {
        if (M == 360.0 || M < 90.0)
            puts("Bom Dia!!");
        else if (M < 180.0)
            puts("Boa Tarde!!");
        else if (M < 270.0)
            puts("Boa Noite!!");
        else if (M < 360.0)
            puts("De Madrugada!!");

        time = (int)(21600 + M * 240) % 86400;

        hour = time / 3600;
        min = time % 3600 / 60;
        sec = time % 3600 % 60;

        printf("%02d:%02d:%02d\n", hour, min, sec);
    }

    return 0;
}