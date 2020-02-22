// https://www.urionlinejudge.com.br/judge/en/problems/view/2685

#include <stdio.h>

int main()
{
    int M;

    while (scanf("%d", &M) != EOF) {
        if (M == 360 || M < 90)
            puts("Bom Dia!!");
        else if (M < 180)
            puts("Boa Tarde!!");
        else if (M < 270)
            puts("Boa Noite!!");
        else if (M < 360)
            puts("De Madrugada!!");
    }

    return 0;
}