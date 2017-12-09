// https://www.urionlinejudge.com.br/judge/en/problems/view/1131

#include <stdio.h>

int main()
{
    int goalsInter, goalsGremio;
    int draws = 0, victoriesInter = 0, victoriesGremio = 0;
    int option, grenais = 0, winner;

    do {
        ++grenais;

        scanf("%d%d", &goalsInter, &goalsGremio);

        if (goalsInter < goalsGremio)
            ++victoriesGremio;
        else if (goalsInter > goalsGremio)
            ++victoriesInter;
        else
            ++draws;

        puts("Novo grenal (1-sim 2-nao)");
        scanf("%d", &option);

    } while (option != 2);

    printf("%d grenais\n", grenais);
    printf("Inter:%d\nGremio:%d\nEmpates:%d\n",
           victoriesInter, victoriesGremio, draws);

    if (victoriesInter < victoriesGremio)
        puts("Gremio venceu mais");
    if (victoriesInter > victoriesGremio)
        puts("Inter venceu mais");
    else
        puts("Nao houve vencedor");

    return 0;
}
