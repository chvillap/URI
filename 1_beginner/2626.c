// https://www.urionlinejudge.com.br/judge/en/problems/view/2626

#include <stdio.h>
#include <string.h>

int main()
{
    char plays_str[3][8];
    int wins_over[3] = {1, 2, 0};

    while (scanf("%s%s%s", plays_str[0], plays_str[1], plays_str[2]) != EOF) {
        int plays[3], i, j;
        int G[3][3];
        int winner = -1;

        memset(G, 0, sizeof(G));

        for (i = 0; i < 3; ++i) {
            if (!strcmp(plays_str[i], "pedra"))
                plays[i] = 0;
            else if (!strcmp(plays_str[i], "papel"))
                plays[i] = 1;
            else if (!strcmp(plays_str[i], "tesoura"))
                plays[i] = 2;
        }

        for (i = 0; i < 3; ++i) {
            j = (i + 1) % 3;
            while (j != i) {
                if (plays[j] == wins_over[plays[i]])
                    G[i][j] = 1;
                j = (j + 1) % 3;
            }
        }

        for (i = 0; i < 3; ++i) {
            if (!(G[i][0] || G[i][1] || G[i][2])) {
                if (winner >= 0) {
                    winner = -1;
                    break;
                } else
                    winner = i;
            }
        }

        if (winner == 0)
            puts("Os atributos dos monstros vao ser inteligencia, sabedoria...");
        else if (winner == 1)
            puts("Iron Maiden's gonna get you, no matter how far!");
        else if (winner == 2)
            puts("Urano perdeu algo muito precioso...");
        else
            puts("Putz vei, o Leo ta demorando muito pra jogar...");
    }

    return 0;
}
