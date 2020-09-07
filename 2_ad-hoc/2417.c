// https://www.urionlinejudge.com.br/judge/en/problems/view/2417

#include <stdio.h>

int main()
{
    int Cv, Ce, Cs, Cpts = 0;
    int Fv, Fe, Fs, Fpts = 0;

    scanf("%d%d%d%d%d%d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);

    Cpts = 3*Cv + Ce;
    Fpts = 3*Fv + Fe;

    if (Cpts > Fpts)
        puts("C");
    else if (Cpts < Fpts)
        puts("F");
    else {
        if (Cs > Fs)
            puts("C");
        else if (Cs < Fs)
            puts("F");
        else
            puts("=");
    }

    return 0;
}
