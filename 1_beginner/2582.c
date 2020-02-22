// https://www.urionlinejudge.com.br/judge/en/problems/view/2582

#include <stdio.h>

int main()
{
    int C, X, Y;
    char songs[11][16] = {
        "PROXYCITY",
        "P.Y.N.G.",
        "DNSUEY!",
        "SERVERS",
        "HOST!",
        "CRIPTONIZE",
        "OFFLINE DAY",
        "SALT",
        "ANSWER!",
        "RAR?",
        "WIFI ANTENNAS",
    };

    scanf("%d", &C);

    while (C) {
        scanf("%d%d", &X, &Y);

        puts(songs[X + Y]);
        --C;
    }

    return 0;
}