// https://www.urionlinejudge.com.br/judge/en/problems/view/1448

#include <stdio.h>

int similarity(const char *str1, const char *str2)
{
    int result = 0;
    const char *p1, *p2;

    for (p1 = str1, p2 = str2; *p1 != '\n'; ++p1, ++p2) {
        if (*p1 == *p2)
            ++result;
    }
    return result;
}

int solveTie(const char *str1, const char *str2, const char *ref)
{
    int result = 0;
    const char *p1, *p2, *pr;

    for (p1 = str1, p2 = str2, pr = ref; *p1 != '\n'; ++p1, ++p2, ++pr) {
        if (*p1 == *pr && *p2 != *pr)
            return 1;
        if (*p1 != *pr && *p2 == *pr)
            return 2;
    }
    return 0;
}

int main()
{
    int t, k, sim1, sim2, winner;
    char initial[102], team1[102], team2[102];

    scanf("%d", &t);
    getchar();

    for (k = 1; k <= t; ++k) {
        fgets(initial, 102, stdin);
        fgets(team1, 102, stdin);
        fgets(team2, 102, stdin);

        sim1 = similarity(team1, initial);
        sim2 = similarity(team2, initial);

        if (sim1 > sim2)
            winner = 1;
        else if (sim1 < sim2)
            winner = 2;
        else
            winner = solveTie(team1, team2, initial);

        printf("Instancia %d\n", k);
        if (winner)
            printf("time %d\n\n", winner);
        else
            puts("empate\n");
    }

    return 0;
}
