// https://www.urionlinejudge.com.br/judge/en/problems/view/2930

#include <stdio.h>

int main()
{
    int E, D;

    scanf("%d%d", &E, &D);

    if (E > D || D >= 24)
        puts("Eu odeio a professora!");
    else if (D - E >= 3)
        puts("Muito bem! Apresenta antes do Natal!");
    else {
        puts("Parece o trabalho do meu filho!");
        if (E + 2 < 24)
            puts("TCC Apresentado!");
        else
            puts("Fail! Entao eh nataaaaal!");
    }

    return 0;
}