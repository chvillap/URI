// https://www.urionlinejudge.com.br/judge/en/problems/view/1828

#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    int i, win;
    char sheldon[9], raj[9];

    scanf("%d", &T);

    for (i = 1; i <= T; ++i) {
        scanf("%s%s", sheldon, raj);

        if (!strcmp(sheldon, raj)) {
            win = 0;
        } else if (!strcmp(sheldon, "tesoura")) {
            if (!strcmp(raj, "papel") || !strcmp(raj, "lagarto"))
                win = 1;
            else if (!strcmp(raj, "pedra") || !strcmp(raj, "Spock"))
                win = -1;
        } else if (!strcmp(sheldon, "papel")) {
            if (!strcmp(raj, "pedra") || !strcmp(raj, "Spock"))
                win = 1;
            else if (!strcmp(raj, "tesoura") || !strcmp(raj, "lagarto"))
                win = -1;
        } else if (!strcmp(sheldon, "pedra")) {
            if (!strcmp(raj, "tesoura") || !strcmp(raj, "lagarto"))
                win = 1;
            else if (!strcmp(raj, "papel") || !strcmp(raj, "Spock"))
                win = -1;
        } else if (!strcmp(sheldon, "lagarto")) {
            if (!strcmp(raj, "papel") || !strcmp(raj, "Spock"))
                win = 1;
            else if (!strcmp(raj, "pedra") || !strcmp(raj, "tesoura"))
                win = -1;
        } else if (!strcmp(sheldon, "Spock")) {
            if (!strcmp(raj, "pedra") || !strcmp(raj, "tesoura"))
                win = 1;
            else if (!strcmp(raj, "papel") || !strcmp(raj, "lagarto"))
                win = -1;
        }

        switch (win) {
            case 1:
                printf("Caso #%d: Bazinga!\n", i);
                break;
            case -1:
                printf("Caso #%d: Raj trapaceou!\n", i);
                break;
            default:
                printf("Caso #%d: De novo!\n", i);
        }
    }

    return 0;
}