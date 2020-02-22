// https://www.urionlinejudge.com.br/judge/en/problems/view/2059

#include <stdio.h>

int main()
{
    int p, j1, j2, r, a;

    scanf("%d%d%d%d%d", &p, &j1, &j2, &r, &a);

    if (a && r)
        puts("Jogador 2 ganha!");
    else if (a && !r)
        puts("Jogador 1 ganha!");
    else if (!a && r)
        puts("Jogador 1 ganha!");
    else if (!a && !r) {
        if ((j1 + j2) % 2) {
            if (p)
                puts("Jogador 2 ganha!");
            else
                puts("Jogador 1 ganha!");
        } else {
            if (p)
                puts("Jogador 1 ganha!");
            else
                puts("Jogador 2 ganha!");
        }
    }

    return 0;
}
